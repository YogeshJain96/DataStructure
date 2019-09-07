#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

# define SIZE 5

template<class T>
class Stack
{
	private:
	
		int tos; //Value of Top Of Stack
		T ar[SIZE];
	
		public:
		Stack():tos(-1){} //Default Constr Initializing TOS=-1

		//template<class T>
		bool IsEmpty(){
			return (tos==-1);//Optimized Code
			
		}

		//template<class T>
		bool IsFull(){
			
			return (tos==(SIZE-1));//Optimized Code
			
		}

		//template<class T>
		T peep(){
			if(IsEmpty())
				throw runtime_error("Stack Underflow");
			else
				return ar[tos];
		}

		
		T pop(){
			
			if(IsEmpty())
				throw runtime_error("Stack Underflow");
			else
				{
					T ele=ar[tos];
					tos=tos-1;
				return ele;
			}
		}

		//template<class T>
		void push(T ele){
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
	Stack<int> st;
	int m;
	do{
		cout<<"Enter Choice:\n1.Push\n2.Peep\n3.Pop\n4.Show Stack\n0.Exit\n";
		cin>>m;
		
		switch(m){
			case 1://Push
					int v;
					cout<<"Enter Value to Push: ";
					cin>>v;
					try{
					st.push(v);
					}
					catch(runtime_error e){
						cout<<e.what()<<endl;
					}
					break;
			case 2://peep
			try{
				cout<<"Last Element in Stack is "<<st.peep()<<endl;
					}
					catch(runtime_error e){
						cout<<e.what()<<endl;
					}
				
				break;
			case 3://Pop
				try{
					cout<<st.pop()<<" Poped Element"<<endl;
					}
					catch(runtime_error e){
						cout<<e.what()<<endl;
					}
				break;
			case 4://Display Stack
					st.Display();
					break;
			case 0:
					break;

			default:cout<<"Invalid Choice";

		}
	

	}while(m!=0);

	
	return 0;
}