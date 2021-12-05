#include<iostream>
#include<fstream>
using namespace std;


int main(){
    string str2;
    string st = "Aniket Bhai";
    ofstream out("sample60.txt");
    out<<st;
    

    ifstream in("sample60b.txt");
    // in>>str2;
    getline(in,str2);
    cout<<str2;
    return 0;

}