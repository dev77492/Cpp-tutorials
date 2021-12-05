#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    void Setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void SetbySum(complex o1, complex o2){
        a=o1.a+o2.a;
        b=o1.b+o2.b;
    }
    void printNumber(){
        cout<<"Your complex number is " <<a<<" + "<<b<<"i"<<endl;
    }
};

int main()
{
    complex c1,c2,c3;
    c1.Setdata(1,2);
    c1.printNumber();

    c2.Setdata(2,4);
    c2.printNumber();

    c3.SetbySum(c1,c2);
    c3.printNumber();

    return 0;
}