#include<iostream>
using namespace std;

int main(){
    int n;
    
    cout<<"Enter the number of elements in an array:"<<endl;
    cin>>n;

    int arr[n];
    // Taking input from an array
    for (int i = 0;  i<n; i++)
    {       
        cout<<"Enter the "<<i<<"th number of element:"<<endl;
        cin>>arr[i];
    }
    cout<<"\n";
    cout<<"Printing of an array"<<endl;
    
    for (int i = 0;  i<n; i++)
    {       
        cout<<"The "<<i<<"th number of element is:"<<endl;
        cout<<arr[i]<<endl;
    }
    
    
    return 0;

}