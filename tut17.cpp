#include<iostream>
using namespace std;

float MoneyReturn(int CurrentMoney , float Interest =1.04){
    return CurrentMoney*Interest;
}


int main(){
    
    int Money;
    cout<<"Enter money to deposit:"<<endl;
    cin>>Money;
    cout<<"If you put "<<Money<<" Then You will get "<<MoneyReturn(Money,2.6)<<" in return";
    return 0;

}