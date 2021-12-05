/
//This program is designed to use overloading functions

#include<iostream>
using namespace std;

int sum(int a, int b){
    return (a+b);
}
int sum(int a, int b, int c){
    return (a+b+c);
}

int volume(int a){
    return(a*a*a);
}
int volume(int r,int h){
    return(3.14*r*r*h);
}

int volume(int l, int b, int h){
    return(l*b*h);
}

int main(){
    cout<<"sum of 3 and 6 is :"<<sum(3,6)<<endl;
    cout<<"sum of 3,4 and 6 is :"<<sum(3,4,6)<<endl;
    cout<<"volume of cube with side 6 is :"<<volume(6)<<endl;
    cout<<"volume of cylinder with radius 4 and height 6 is :"<<volume(4,6)<<endl;
    cout<<"volume of cuboid with length 4, breadth 5 and height 7 is :"<<volume(4,5,7)<<endl;
    return 0;

}