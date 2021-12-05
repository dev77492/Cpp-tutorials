// Code to eveluate fibbonacci series

#include<iostream>
using namespace std;

int fibbonacci(int n){
    if(n<2){
        return 1;
    }
    return fibbonacci(n-2)+fibbonacci(n-1);
}


int main(){
    int a;
    cout<<"Enter a number to find its fibbonacci Series:"<<endl;
    cin>>a;

    cout<<"The Fibbonacci of "<<a<<" is "<<fibbonacci(a);
    // return 0;

}