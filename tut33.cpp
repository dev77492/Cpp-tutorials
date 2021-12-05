// Program to calculate bank returns after y years

#include <iostream>
using namespace std;

class Bankdeposits
{
private:
    int Principle;
    int years;
    float interestrate;
    float returnvalue;

public:
    Bankdeposits(){};
    Bankdeposits(int p, int y, float r);
    Bankdeposits(int p, int y, int R);
    void show();
};

Bankdeposits::Bankdeposits(int p, int y, float r)
{
    Principle = p;
    years = y;
    interestrate = r;
    returnvalue = Principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

Bankdeposits::Bankdeposits(int p, int y, int R)
{
    Principle = p;
    years = y;
    interestrate = float(R) / 100;
    returnvalue = Principle;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

void Bankdeposits::show()
{
    cout << endl
         << "The principal amount was " << Principle
         << ". The return value after " << years
         << " year(s) is " << returnvalue << endl;
}

int main()
{
    Bankdeposits dl1, dl2, dl3;
    int p, y;
    float r;
    int R;

    cout << "Enter the values of Principal , years and interest rate :" << endl;
    cin >> p >> y >> r;
    dl1 = Bankdeposits(p, y, r);
    dl1.show();

    cout << "Enter the values of Principal , years and interest rate(in %) :" << endl;
    cin >> p >> y >> R;
    dl2 = Bankdeposits(p, y, R);
    dl2.show();

    return 0;
}