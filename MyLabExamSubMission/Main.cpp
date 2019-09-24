#include "LICAgent.cpp"
#include "CLinkedList.cpp"
int main(){

	CLinkedList<LICAgent> LLag;// Creating an Object LLag of Class Type LICAagent to store LICAgent's Object

	int n;//menu choice variable
	do{//Menu Driven
	cout<<"\n////////MENU////////"<<endl;
	cout<<""<<endl;
	cout<<"\n1.Add LIC Agents\n2.Display All Agents\n3.Total Agent in city \n4.Search by City\n0.Exit"<<endl;
	cout<<"Enter Choice: ";
	cin>>n;
	cin.get();
	switch(n){
		case 1://Add LIC Agents
			{ char ch;
				do{
				LICAgent lagent;// Creating Object of LICAgent
				lagent.Accept();
				//Adding in LL
				LLag.AddAtEnd(lagent);
				cout<<"Add More Agents(y/n)?"<<endl;
				cin>>ch;
				cin.get();
				}while(ch!='n');
			}
			break;
		case 2://Display Linked List of All Agents
			LLag.Display();
			break;
		case 3://Total Agent in Particular city
			{
			cout<<"Total Agent in City: "<<endl;
			string scity;
			getline(cin,scity);
			cout<<"In "<<scity<<" there are "<<LLag.countAgInCity(scity)<<" Agents."<<endl;
			}
			break;
		case 4://Search by City
			{
			cout<<"Enter City to Search Agents: "<<endl;
			string scity;
			getline(cin,scity);
			cout<<"Agents in "<<scity<<endl;
			
			//Traversing in LL and Searching
			LLag.searchInCity(scity);
			}
			break;

		case 0://Exit case
			break;

		default:cout<<"Invalid Choice"<<endl;		
		}
	}while(n!=0);

	return 0;
}
