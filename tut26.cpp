#include<iostream>
using namespace std;

class complex;

class calculator{
    public:
    int add(int a, int b){
        return (a+b);
    }

    int SumRealComplex(complex ,complex);
    int SumComComplex(complex, complex);
};

class complex
{
private:
    int a;
    int b;
    friend class calculator;
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


int calculator ::SumRealComplex(complex o1,complex o2)
{
    return (o1.a+o2.a);
}
int calculator ::SumComComplex(complex o1, complex o2)
{
    return (o1.b+o2.b);
}


int main(){
    complex o1,o2;
    o1.Setdata(1,2);
    o2.Setdata(3,4);

    calculator calc;
    int res = calc.SumRealComplex(o1,o2);
    cout<<"The sum of the real part of o1 and o2 is :"<<res<<endl;

    int resc = calc.SumComComplex(o1,o2);
    cout<<"The sum of the Complex part of o1 and o2 is :"<<resc<<endl;

    return 0;

}