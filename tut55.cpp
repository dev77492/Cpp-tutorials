// This program will explain the pointers use in derived class

#include <iostream>
using namespace std;

class Base_class
{
public:
    int base_var;
    void display()
    {
        cout << "The base class variable is " << base_var << endl
             << endl;
    }
};

class derived : public Base_class
{
public:
    int derived_var;
    void display()
    {
        cout << "The base class variable is " << base_var << endl;
        cout << "The derived class variable is " << derived_var << endl
             << endl;
    }
};

int main()
{
    Base_class *base_class_pointer;
    derived *derived_class_pointer;
    Base_class base_obj;
    derived derived_obj;
    base_class_pointer = &base_obj;
    base_class_pointer->base_var = 34;
    base_class_pointer->display();
    cout << endl;
    base_class_pointer = &derived_obj;
    // base_class_pointer->derived_var=344;      //This will throw an error because the pointer is defined as base class pointer
    base_class_pointer->base_var = 647;
    base_class_pointer->display();

    derived_class_pointer = &derived_obj;
    derived_class_pointer->base_var = 45;
    derived_class_pointer->derived_var = 788;
    derived_class_pointer->display();

    return 0;
}