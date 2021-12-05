#include <iostream>
using namespace std;

class Base
{
private:
    int data1;

public:
    int data2;
    void setData();
    int getdata1();
    int getdata2();
};

void Base ::setData(void)
{
    data1 = 10;
    data2 = 20;
}
int Base ::getdata1()
{
    return data1;
}
int Base ::getdata2()
{
    return data2;
}

class Derived :public Base
{
    int data3;

public:
    void process();
    void Display();
};

void Derived :: process()
{
    setData();
    data3 = data2 * getdata1();
}

void Derived :: Display(){
    cout<<"The value of data 1 is :"<<getdata1() <<endl;
    // cout<<endl;
    cout<<"The value of data 2 is :"<<data2 <<endl;
    // cout<<endl;
    cout<<"The value of data 3 is :"<<data3 <<endl;
    // cout<<endl;
}

int main()
{
    Derived der;
    // der.setData();
    der.process();
    der.Display();
    return 0;
}