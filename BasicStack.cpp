#include<iostream>
#include<stdexcept>
using namespace std;
# define SIZE 5
class Stack
{
	private:
		int tos; //Value of Top Of Stack
		int ar[SIZE];
	public:
		Stack():tos(-1){} //Default Constr Initializing TOS=-1

		bool IsEmpty(){
			return (tos==-1);//Optimized Code
			/* Logic
			if (tos==-1)
				return true;
			else 
				return false;
			*/	
		}

		bool IsFull(){
			
			return (tos==(SIZE-1));//Optimized Code
			/* Logic
			if (tos==SIZE-1)
				return true;
			else 
				return false;
			*/
		}

		int peep(){
			if(IsEmpty())
				throw runtime_error("Stack Underflow");
			else
				return ar[tos];
		}


		int pop(){
			
			if(IsEmpty())
				throw runtime_error("Stack Underflow");
			else
				{
					int ele=ar[tos];
					tos=tos-1;
				return ele;
			}
		}

		void push(int ele){
			if(IsFull())
				throw runtime_error("Stack Overflow");
			else
				{
					tos=tos+1;//tos++;
					ar[tos]=ele;
				}
			
			}
		void Display(){
			cout<<"///////STACK///////////"<<endl;
			for(int i=tos;i>=0;i--)
				cout<<ar[i]<<endl;
			cout<<"/////////////////"<<endl;
		}	
};
int main(){
	Stack st;
	int m;
	do{
		cout<<"Enter Choice:\n1.Push\n2.Peep\n3.Pop\n4.Show Stack\n0.Exit\n";
		cin>>m;
		try{
		switch(m){
			case 1://Push
					int v;
					cout<<"Enter Value to Push: ";
					cin>>v;
					st.push(v);
					break;
			case 2://peep
				cout<<"Last Element in Stack is "<<st.peep()<<endl;
				break;
			case 3://Pop
				cout<<st.pop()<<" Element Poped"<<endl;
				break;
			case 4://Display Stack
				st.Display();
				break;
			case 0://Exit
				cout<<"Exiting Program! TQ!"<<endl;
				break;

			default:cout<<"Invalid Choice";

		}
	}
	catch(runtime_error e){
		cout<<e.what()<<endl;
	}

	}while(m!=0);

return 0;
}
