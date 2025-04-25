#pragma once
#include <iostream>
#include <cmath>

namespace mathlib
{
	template<typename T>

	class Fraction
	{
	public:
		Fraction()
		{
			this->numerator = 1;
			this->denominator = 1;
		}

		Fraction(T numerator, T denominator)
		{
			this->numerator = numerator;
			if (denominator != 0)
			{
				this->denominator = denominator;
			}
			else 
			{
				std::cout << "Denominator can't be zero, denominator forced to be one." << std::endl;
				this->denominator = 1;
			}
		}

		
		T findGCD(T numerator, T denominator)
		{
			while (denominator != 0)
			{
				T temp = denominator;
				denominator = numerator % denominator;
				numerator = temp;
			}
			return numerator;
		}

		float ToFloat()
		{
			return static_cast<float>(numerator) / denominator;
\
		}

		Fraction<T> Simplify()
		{
			return Simplifya(numerator, denominator);
		}

		Fraction<T> Simplifya(T numerator, T denominator) //simplify by reducing the fraction and making the denominator positive
		{
			T gcd = findGCD(abs(numerator), abs(denominator));
			T simplifiedNumerator = numerator / gcd;
			T simplifiedDenominator = denominator / gcd;
			if (denominator < 0)
			{
				simplifiedNumerator = -simplifiedNumerator;
				simplifiedDenominator = -simplifiedDenominator;
			}

			return Fraction<T>(simplifiedNumerator, simplifiedDenominator);
		}

		Fraction<T> operator + (const Fraction<T> other) const
		{
			T combined_numerator = ((numerator * other.denominator) + (denominator * other.numerator));
			T combined_denominator = denominator * other.denominator;
			return Fraction<T>(combined_numerator, combined_denominator);
		}

		Fraction<T> operator - (const Fraction<T> other) const
		{
			T combined_numerator = ((numerator * other.denominator) - (denominator * other.numerator));
			T combined_denominator = denominator * other.denominator;
			return Fraction<T>(combined_numerator, combined_denominator);
		}

		Fraction<T> operator * (const Fraction<T> other) const
		{
			T combined_numerator = numerator * other.numerator;
			T combined_denominator = denominator * other.denominator;
			return Fraction<T>(combined_numerator, combined_denominator);
		}

		Fraction<T> operator / (const Fraction<T> other) const
		{
			if (other.numerator != 0) //preventing dividing by zero!
			{
				T combined_numerator = numerator / other.numerator;
				T combined_denominator = denominator / other.denominator;
				return Fraction<T>(combined_numerator, combined_denominator);
			}
			return Fraction<T>(0, 1); //if we would divide by zero, return 0/1 instead
		}

		bool operator == (const Fraction<T> other) const
		{
			T first_numerator = numerator * other.denominator;
			T other_numerator = denominator * other.numerator;
			if (first_numerator == other_numerator)
			{
				return true;
			}
			return false;
		}

		bool operator != (const Fraction<T> other) const
		{
			T first_numerator = numerator * other.denominator;
			T other_numerator = denominator * other.numerator;
			if (first_numerator != other_numerator)
			{
				return true;
			}
			return false;
		}

		bool operator > (const Fraction<T> other) const
		{
			T first_numerator = numerator * other.denominator;
			T other_numerator = denominator * other.numerator;
			if (first_numerator > other_numerator)
			{
				return true;
			}
			return false;
		}

		bool operator < (const Fraction<T> other) const
		{
			T first_numerator = numerator * other.denominator;
			T other_numerator = denominator * other.numerator;
			if (first_numerator < other_numerator)
			{
				return true;
			}
			return false;
		}

		bool operator >= (const Fraction<T> other) const
		{
			T first_numerator = numerator * other.denominator;
			T other_numerator = denominator * other.numerator;
			if (first_numerator >= other_numerator)
			{
				return true;
			}
			return false;
		}

		bool operator <= (const Fraction<T> other) const
		{
			T first_numerator = numerator * other.denominator;
			T other_numerator = denominator * other.numerator;
			if (first_numerator <= other_numerator)
			{
				return true;
			}
			return false;
		}

		friend std::istream& operator>>(std::istream& cin, Fraction<T>& f) {
			char slash;
			cin >> f.numerator >> slash >> f.denominator;

			// make sure the input is in the form of number/number
			if (slash != '/' || f.denominator == 0) {
				cin.setstate(std::ios::failbit);  
			}

			return cin;
		}

		friend std::ostream& operator<<(std::ostream& cout, const Fraction<T>& c)
		{
			cout << c.numerator << "/" << c.denominator;
			return cout;
		}


	private:
		T numerator = 0;
		T denominator = 1;

	};
}
