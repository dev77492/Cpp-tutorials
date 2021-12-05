// This program will explain the pointers and classes together with arrow operator

#include<iostream>
using namespace std;


class Complex{

int imaginary , real;
public:
void setdata(int a, int b);
void getdata(void);
};

void Complex ::setdata(int a, int b){
    real = a;
    imaginary=b;
}

void Complex ::getdata(void){
    cout<<"The real part is : "<<real<<endl;
    cout<<"The imaginary part is : "<<imaginary<<endl<<endl;
}

int main(){
    Complex c1;
    c1.setdata(3,4);
    // c1.getdata();
    // Complex *ptr=&c1;
    // (*ptr).getdata();

    // Complex *ptr=new Complex[4];
    // (*ptr).setdata(5,6);
    // (*ptr).getdata();

    // (*(ptr+1)).setdata(4,9);
    // (*(ptr+1)).getdata();

    // (*(ptr+2)).setdata(5,9);
    // (*(ptr+2)).getdata();

    // (*(ptr+3)).setdata(7,1);
    // (*(ptr+3)).getdata();
    
    Complex *ptr= new Complex[5];

    // ptr-> new Complex;
    ptr->setdata(4,7);
    ptr->getdata();

    (ptr+1)->setdata(45,7);
    (ptr+1)->getdata();

    (ptr+2)->setdata(4,73);
    (ptr+2)->getdata();

    (ptr+3)->setdata(4,37);
    (ptr+3)->getdata();

    (ptr+4)->setdata(42,74);
    (ptr+4)->getdata();



    

    return 0;

}