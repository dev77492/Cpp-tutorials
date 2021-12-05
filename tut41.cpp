// Program to demonstrate multiple inheretence
#include <iostream>
using namespace std;

class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};

class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};
class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};

class derived : public base1, public base2, public base3
{
public:
    void show()
    {
        cout << "The base1 int is :" << base1int << endl;
        cout << "The base2 int is :" << base2int << endl;
        cout << "The base3 int is :" << base3int << endl;
        cout << "The sum of base1 int , base2 int and base3 int is :" << base1int + base2int + base3int << endl;
    }

};

int
main()
{
    derived Aniket;
    Aniket.set_base1int(12);
    Aniket.set_base2int(15);
    Aniket.set_base3int(13);
    Aniket.show();

    return 0;
}