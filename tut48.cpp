// This program is designed to explain the use of multiple inheretence and using constructors

#include <iostream>
using namespace std;

class Base1
{
    int data1;

public:
     Base1(int m)
    {
        data1 = m;
        cout << "The Base1 constructor is called here !!" << endl;
    }
    void Printdata1(void)
    {
        cout << "The data 1 is :" << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int m)
    {
        data2 = m;
        cout << "The Base2 constructor is called here !!" << endl;
    }
    void Printdata2(void)
    {
        cout << "The data 2 is :" << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int derived1, derived2;

public:
    Derived(int a, int b, int c, int d): Base1(a), Base2(b)
    {
        derived1=c;
        derived2=d;

    }
    void PrintdataDerived(void)
    {
        cout<<"The value of derived 1 is :"<<derived1<<endl;
        cout<<"The value of derived 2 is :"<<derived2<<endl;

    }
};

int main()
{
    Derived Aniket(2, 3 , 4 , 5);
    Aniket.Printdata1();
    Aniket.Printdata2();
    Aniket.PrintdataDerived();

    return 0;
}