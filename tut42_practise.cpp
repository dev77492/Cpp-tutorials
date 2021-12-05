// This program is designed for using simple clculator and scientific calculator

#include <iostream>
#include <math.h>
using namespace std;

class SimpleCalculator
{
protected:
    int a;
    int b;

public:
    void getdata(int m, int n)
    {
        a = m;
        b = n;
    }
    void displaySimpleAnswer(void)
    {
        cout << "The addition of two numbers is :" << a + b << endl;
        cout << "The subtraction of two numbers is :" << a - b << endl;
        cout << "The multiplication of two numbers is :" << a * b << endl;
        cout << "The division of two numbers is :" << a / b << endl;
    }
};

class ScientificCalculator
{
protected:
    int a;
    int b;

public:
    void getdata(int m, int n)
    {
        a = m;
        b = n;
    }
    void displayScientificAnswer(void)
    {
        cout << "The absolute value of two numbers is :" <<abs(a)<<", "<<abs(b)<<endl;
        cout << "The squareroot of two numbers is :" <<sqrt(a)<<", "<<sqrt(b)<<endl;
        cout << "The square of two numbers is :" <<(a*a)<<", "<<(b*b)<<endl;
        cout << "The logrithmic value of two numbers is :" <<log(a)<<", "<<log(b)<<endl;
        
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator{
    public:
        void getdata(int a, int b){
            SimpleCalculator :: getdata(a,b);
            ScientificCalculator :: getdata(a,b) ;
        }
};

int main()
{
    SimpleCalculator m;
    m.getdata(20,15);
    cout<<"This is the answer of SimpleCalculator---------------------"<<endl<<endl;
    m.displaySimpleAnswer();
    cout<<"\n\n";

    ScientificCalculator n;
    n.getdata(20,15);
    cout<<"This is the answer of ScientificCalculator---------------------"<<endl<<endl;
    n.displayScientificAnswer();
    cout<<"\n\n";

    HybridCalculator x;
    // x.getdata(12,15);
    // x.getData(12,15);
    x.getdata(20,15);
    cout<<"This is the answer of HybridCalculator------------------------"<<endl<<endl;
    x.displaySimpleAnswer();
    x.displayScientificAnswer();

    return 0;
}