#include <iostream>

int g = 10;

template<typename T> 

struct smart_ptr
{
	smart_ptr() = delete; //cannot be called, throws error

	smart_ptr(T* p) : p(p) {}

	~smart_ptr()
	{
		delete p;
		std::cout << "Deleted!\n";
	}

	T Dereference() { return *p; }
	T& operator * () { return *p; }
	T operator + () { return *p; } //adds the operator + to return *p
	T* operator & () { return p; }

	T* p = nullptr;
};


int main()
{
	g = 1014;
	int i = 5;
	int* p = &i;
	//delete p; - NO

	{
		smart_ptr<int> sptr(new int(10));
		*sptr = 20;
		std::cout << sptr.p << std::endl;
		std::cout << *sptr << std::endl;
		std::cout << sptr.Dereference() << std::endl;
		std::cout << +sptr << std::endl; //uses the new +operator
		std::cout << &sptr << std::endl;


		smart_ptr<float> fptr(new float(241.23f));
		smart_ptr<char> cptr(new char('r'));
		fptr.p = nullptr;
	}

	std::unique_ptr<int> uptr = std::make_unique<int>(23);
	std::cout << *uptr << std::endl;

	//std::unique_ptr<int> uptr2 = uptr; not allowed, uses deleted function

	std::shared_ptr<int> shared1 = std::make_shared<int>(2423);
	std::cout << shared1.use_count() << std::endl;
	{
		std::shared_ptr<int> shared2 = shared1;
		std::cout << shared1.use_count() << std::endl;
	}
	std::shared_ptr<int> shared3 = shared1;
	std::cout << shared1.use_count() << std::endl;
}