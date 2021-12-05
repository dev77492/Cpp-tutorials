// This is the program to print factorial of any number created by Aniket Sawant

#include <iostream>
using namespace std;

int main(){
    int num1,i,fact=1;
    cout<<"Enter your number to find a factorial:";
    cin>>num1;

    for(i=num1;i>0;i--){
        fact=i*fact;
    }

    cout<<"\nYour given number is:"<<num1;
    cout<<"\nFactorial of given number is:"<<fact;

    return 0;
  
}