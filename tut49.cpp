// This program will describe pointers and "new" keywors use.

#include<iostream>
using namespace std;

int main(){
    int m= 10;

    int *x= &m;

    cout<<"The value of pointer is : "<<*x;
    return 0;

}