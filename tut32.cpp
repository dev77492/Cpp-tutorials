#include <iostream>
using namespace std;

class complex
{
    int a;
    int b;

public:
    complex(int x1, int y1)
    {
        a = x1;
        b = y1;
    }
    complex()
    {
        a = 0;
        b = 0;
    }

    complex(int m)
    {
        a = m;
        b = 0;
        // cout<<"The real part is 0 "<<endl;
    }

    void PrintNums()
    {
        cout << "Your complex number is " << a << " + " << b << "i" << endl;
    }
};

int main()
{
    complex s(3, 4);
    s.PrintNums();

    complex m;
    m.PrintNums();

    complex n(3);
    n.PrintNums();

    return 0;
}