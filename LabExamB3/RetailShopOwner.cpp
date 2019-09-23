#include<iostream>
#include<string>
using namespace std;
class RetailShopOwner{
    private:
        string id;
        string name;
        string city;
        string product;

    public:
        void Accept(){
            cout<<"ID: ";
            getline(cin,id);
            cout<<"Name: ";
            getline(cin,name);
            cout<<"City: ";
            getline(cin,city);
            cout<<"Product: ";
            getline(cin,product);
            
        }
        void Display(){
            cout<<id<<":"<<name<<","<<city<<" - "<<product<<endl;
        }
};
