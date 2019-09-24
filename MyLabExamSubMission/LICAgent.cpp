#include<iostream>
using namespace std;
class LICAgent{
	private://LIC Agent Data members
		string id;
		string name;
		string city;
	public:
		LICAgent():id(""),name(""),city(""){}

		void Accept(){//Accepting LIC Agent Details
			cout<<"Enter LIC Agent Details"<<endl;
	
			cout<<"Id: ";
			getline(cin,id);
			cout<<"Name: ";
			getline(cin,name);
			cout<<"City: ";
			getline(cin,city);
			}
		void DispLIC(){//Displaying LIC Agent Details
			cout<<"\n\nLIC Agent Details"<<endl;
	
			cout<<"\nId: "<<id;
			cout<<"\nName: "<<name;
			cout<<"\nCity: "<<city;		
			}
		string getCity(){
			return city;	
		}
};
