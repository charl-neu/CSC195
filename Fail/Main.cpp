#include "Rectangle.h"
#include "Circle.h"

int main() {
    vector<Shape*> shapes;

    Circle* c = new Circle(1.0f);
    (*c).SetRadius(3.0f);
    Rectangle* r = new Rectangle(4.0f, 5.0f);

    shapes.push_back(c);
    shapes.push_back(r);

    for (int i = 0; i < shapes.size(); i++)
    {
        cout << "Area: " << shapes[i]->Area() << endl;
        Circle* circle = dynamic_cast<Circle*>(shapes[i]);
        if (circle)
        {
            cout << "Radius: " << circle->GetRadius() << endl;
        }
    }

    for (Shape* s : shapes)
    {
        delete s;
    }
    shapes.clear();

    return 0;
}
