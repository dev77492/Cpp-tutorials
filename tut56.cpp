#include<iostream>
using namespace std;
class Base_class
{
public:
    int base_var=1;
    virtual void display()
    {
        cout << "1 The base class variable is " << base_var << endl
             << endl;
    }
};

class derived : public Base_class
{
public:
    int derived_var =2;
    void display()
    {
        cout << "2 The base class variable is " << base_var << endl;
        cout << "2 The derived class variable is " << derived_var << endl
             << endl;
    }
};


int main(){
    Base_class *base_class_pointer;
    Base_class base_obj;
    base_class_pointer = &base_obj;

    derived *derived_class_pointer;
    derived derived_obj;
    base_class_pointer = &derived_obj;
    base_class_pointer ->display();
    // derived_class_pointer= &derived_obj;
    // derived_class_pointer->display();


    
    return 0;

}