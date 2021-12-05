#include <iostream>
using namespace std;

void add(){
    int a,b,r=0;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"\nEnter second number:";
    cin>>b;
    r=a+b;
    cout<<"\nResult is:"<<r;
    // return 0;

}

void subtract(){
    int a,b,r;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"\nEnter second number:";
    cin>>b;
    r=a-b;
    cout<<"\nResult is:"<<r;

}void multiply(){
    int a,b,r;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"\nEnter second number:";
    cin>>b;
    r=a*b;
    cout<<"\nResult is:"<<r;

}void divide(){
    int a,b,r;
    cout<<"Enter first number:";
    cin>>a;
    cout<<"\nEnter second number:";
    cin>>b;
    r=a/b;
    cout<<"\nResult is:"<<r;

}

int main()
{
    int a,b;
    int opt,choice;
    do
    {
        cout<<"\nWhat do you want to perform ? ";
        cout<<"\n1.Addition ";
        cout<<"\n2.Subtraction ";
        cout<<"\n3.Multiplication ";
        cout<<"\n4.Division \n";

       cin>>opt;
    
        switch(opt)
        {
        case 1: 
                add();
                break;
        case 2: 
                subtract();
                break;
        case 3: 
                multiply();
                break;
        case 4: 
                divide();
                break;
        } ;
         cout<<"\nDo you wish to continue?\npress 1 to continue\n0 otherwise ";
         cin>>choice;
        
    }
    while (choice==1);
    return 0;
}

