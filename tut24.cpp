#include <iostream>
using namespace std;

class Employee
{
private:
    int EmpId;
    static int count;

    

public:
    void Setdata(void)
    {
        cout << "Enter employee id: " << endl;
        cin >> EmpId;
        count++;
    }
    void Getdata(void)
    {
        cout << "The Employee id is " << EmpId << " and this is employee number " << count << endl;
    }
};

int Employee ::count;
int main()
{
    Employee Aniket, Harry, Rohan; 
    Aniket.Setdata();
    Aniket.Getdata();

    Harry.Setdata();
    Harry.Getdata();

    Rohan.Setdata();
    Rohan.Getdata();

    return 0;
}