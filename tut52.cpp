// This program will explain use of pointers in more details
#include<iostream>
using namespace std;

class ShopItem
{
private:
    int ID;
    float price;
public:
    void setData(int a, float b){
        ID=a;
        price=b;
    }

    void getData(){
        cout<<"The ID of Shop Item is : "<<ID<<endl;
        cout<<"The price of Shop Item is : "<<price<<endl<<endl;

    }
 
};


int main(){
    int size,p;
    float q;
    cout<<"Enter the number of items to be added : "<<endl;
    cin>>size;

    ShopItem *ptr=new ShopItem[size];
    ShopItem *TempPtr=ptr;

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter the product ID and price of Item "<<i+1<<":"<<endl;
        cin>>p>>q;
        ptr->setData(p,q);
        ptr++;
        
    }
    ptr=TempPtr;

    for (int i = 0; i < size; i++)
    {
        cout<<"The product ID and price of Item "<<i+1<<" is :"<<endl;
        ptr->getData();
        ptr++;
        
    }
    
    
    return 0;

}