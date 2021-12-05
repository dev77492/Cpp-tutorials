// This program is designed to explain virtual base class

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_numner;

public:
    void set_RollNumber(int r)
    {
        roll_numner = r;
    }
    void get_RollNumber(void)
    {
        cout << "The roll number of the student is :" << roll_numner << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void get_marks(void)
    {
        cout << "Your result is here : " << endl
             << "maths :" << maths << endl
             << "physics :" << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float m)
    {
        score = m;
    }
    void print_score(void)
    {
        cout << "Your PT score is :" << score << endl;
    }
};

class Results : public Test, public Sports
{
private:
    float total;

public:
    void display(void){
        total=maths+physics+score;
        get_RollNumber();
        get_marks();
        print_score();

        cout<<"Your total score is :"<<total<<endl;
    }
};

int main()
{

    Results Aniket;
    Aniket.set_RollNumber(321);
    Aniket.set_marks(87.6,99.4);
    Aniket.set_score(9);
    Aniket.display();

    return 0;
}