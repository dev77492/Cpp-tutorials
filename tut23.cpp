// This Program will conclude class with object using an array

#include<iostream>
using namespace std;

class shop
{
private:
    int ItemId[100];
    int ItemPrice[100];
    int counter;
public:
    void init_counter(void){counter=0;}
    void GetPrice(void);
    void DisplayPrice(void);
};


void shop::GetPrice(void)
{
    cout<<"Enter the item id at position "<<counter+1<<" :"<<endl;
    cin>>ItemId[counter];
    cout<<"Enter the ItemPrice at position "<<counter+1<<" :"<<endl;
    cin>>ItemPrice[counter];
    counter++;
}

void shop ::DisplayPrice(void)
{
    for ( int i = 0; i < counter; i++)
    {
        cout<<"The price of Item with ID "<<ItemId[i]<<" is :"<<ItemPrice[i]<<endl;
    }
    
    
}



int main(){
    int m;
    cout<<"Enter the number of items you want to add :"<<endl;
    cin>>m;

    shop items ;
    items.init_counter();

    for (int i=0;i<m;i++)
    {
        items.GetPrice();

    }

    cout<<"\n";
    items.DisplayPrice();


    return 0;

}