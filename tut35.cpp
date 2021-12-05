#include <iostream>
using namespace std;

class employee
{

public:
    int Id;
    float salary;
    employee(int EmpId)
    {
        Id = EmpId;
        salary = 34.0;
    }
    employee() {}
};

class Programer : public employee
{
public:
    int LanguageCode;
    Programer(int ImpId)
    {
        Id = ImpId;
        LanguageCode = 9;
    }
};

int main()
{
    employee Harry(5), Rohan(7);
    cout << Harry.salary << endl;
    cout << Rohan.salary << endl;

    Programer Aniket(7);
    cout << Aniket.Id;
    cout << endl;
    
    cout << Aniket.LanguageCode;
    cout << endl;

    cout << Aniket.salary;
    cout << endl;

    return 0;
}