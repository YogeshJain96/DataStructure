#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

# define SIZE 16

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
			for(int i=tos;i>=0;i--)
				cout<<ar[i];
		}	
};
int main(){
	Stack<int> st;
	int n;
	cout<<"Enter No. to convert from Decimal to Binary"<<endl;
	cin>>n;
	while(n>0){
	st.push(n%2);
	n=n/2;
	}
	st.Display();
	
	return 0;
}