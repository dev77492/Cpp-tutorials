// Code to understand class and its made objects
#include<iostream>
#include<string>
using namespace std;

class roommates
{
    private:
        int num;
        long long int mob_num;
        char gender;
public:
    int block;
    string name;
    void Setdata(int num1, long long int mob_num1, char gender1);
    void Getdata();

};


 void roommates::Setdata(int num1, long long int mob_num1, char gender1)
{
    num= num1;
    mob_num=mob_num1;
    gender= gender1;


}

 void roommates:: Getdata()
{
    cout<<"The name of roomamte is: "<<name<<endl;
    cout<<"The number of roomamte is: "<<num<<endl;
    cout<<"The Mobile_number of roomamte is: "<<mob_num<<endl;
    cout<<"The gender of roomamte is: "<<gender<<endl;
    cout<<"The block number is: "<<block<<endl;
}



int main(){
    roommates aniket ;
    aniket.block=102;
    // aniket.name={'A','n','i','e','t','\0'};     // This will not work
    aniket.name="Aniket";
    aniket.Setdata(4,8390894080,'M');
    aniket.Getdata();

    cout<<endl;

    roommates shlok; 
    shlok.block=102;
    // shlok.name={'S','h','l','o','k','\0'};     //This will not work
    shlok.name="Shlok";
    shlok.Setdata(2,950310042,'M');
    shlok.Getdata();
    return 0;

}