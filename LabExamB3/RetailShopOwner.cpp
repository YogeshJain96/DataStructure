#include<iostream>
#include<string>
using namespace std;
class RetailShopOwner{
    private:
        int id;
        string name;
        string city;
        string product;

    public:
        void Accept(){
            cin>>id;
            cin.get();
            getline(cin,name);
            getline(cin,city);
            getline(cin,product);
            
        }
        void Display(){
            cout<<id<<":"<<name<<","<<city<<" - "<<product<<endl;
        }
};