// Program to implement multilevel inheretence

#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void student ::set_roll_number(int r)
{
    roll_number = r;
}
void student ::get_roll_number(void)
{
    cout << "The roll number of student is: " << roll_number<<endl;
}

class Exam : public student
{
protected:
    float maths;
    float physics;

public:
    void set_marks(float, float);
    void get_marks(void);
};

void Exam ::set_marks(float m1,float m2){
    maths=m1;
    physics=m2;
}

void Exam ::get_marks(void){
    cout<<"The marks obtained in physics are: "<<physics<<endl;
    cout<<"The marks obtained in maths are: "<<maths<<endl;
}

class result : public Exam{
protected:
float percentage;
public:
void display(){
    get_roll_number();
    get_marks();
    cout<<"The result obtained is :"<<(maths+physics)/2<<"%"<<endl;
}
};

int main()
{
    result Aniket;
    Aniket.set_roll_number(321);
    Aniket.set_marks(96.0 , 94.0);
    Aniket.display();

    return 0;
}