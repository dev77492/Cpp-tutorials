#include <iostream>
using namespace std;

class complex
{
private:
    int a;
    int b;

public:
    complex(void);
    void Print(void)
{
    cout << "Your complex number is " << a << " + " << b << "i" << endl;
}
};

complex::complex(void)
{
    a = 10;
    b = 20;
}



int main()
{
    complex c1,c2,c3;
    c1.Print();
    c2.Print();
    c3.Print();
    return 0;
}