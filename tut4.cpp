#include<iostream>
using namespace std;



void sum(){
    int gol=23;
    int get= 45;
    int sum = gol+get;
    cout<<"sum="<<sum;
    int min=gol-get;
    cout<<"\nmin="<<min;

    int x,y,z;
    cout<<"\nEnter first num:";
    cin>>x;
    cout<<"\nEnter second num:";
    cin>>y;
    z=x+y;
    cout<<"\nThe result is z:"<< z;

}    

int main(){
    int a =12;
    int b= 15;
    float m =1.34;
    bool true_val=true;
    // // int gol=34;
     // gol =54;
    sum();
    
    cout<<"\nthis is tut 4\n"<<"the value of a is: "<<a<<"\nthe value of b is :"<<b<<"\nThe value of gol is";
    cout<<"\nThe value of float is:"<<m<<"\nThe value of boolean is:"<<true_val;
    return 0;

}