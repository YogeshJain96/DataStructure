//Implementing Queue using Templates
#include<iostream>
#include<string>
#include<stdexcept>
using namespace std;

# define SIZE 3

template<class T>
class Queue
{
	private:
		int front;
		int rear;
		T ar[SIZE];
	public:
		Queue():front(0),rear(0){

		}

		~Queue(){}//Destructor

		bool isEmpty(){
			return (front==rear);
		}

		bool isFull(){
			return (SIZE==rear);
		}

		void Add(T& ele){
			if(!isFull()){
				ar[rear]=ele;
				rear++;
				}
			else
				{ //front=0;
				throw runtime_error("Queue is Full");
			}
		}

		T DelQ(){
			if(!isEmpty()){
				T ele=ar[front];
				front++;
				// if(rear==front) //Trying to Optimize Singular Queue
				// 	{rear=0;front=0;}
				return ele;
			}
			else{
				//front=0;
				throw runtime_error("Queue is Empty");
			}

		}

		void DispQ(){
			for(int i=front;i<rear;i++)
				cout<<ar[i];
		}

};
int main(){
	Queue<int> q;
	int m;
	do{
		cout<<"Enter Choice:\n1.Add\n2.Delete\n3.DisplayQueue\n0.Exit\n";
		cin>>m;
		
		switch(m){
			case 1://Add
					int v;
					cout<<"Enter Value to Add: ";
					cin>>v;
					try{
					q.Add(v);
					}
					catch(runtime_error e){
						cout<<e.what()<<endl;
					}
					break;
			case 2://Delete
			try{
					cout<<q.DelQ()<< " Deleted";
					}
					catch(runtime_error e){
						cout<<e.what()<<endl;
					}
				
				break;

			case 3://Display
				q.DispQ();
				break;
			case 0://Exit
					break;

			default:cout<<"Invalid Choice";

		}
	

	}while(m!=0);


	return 0;
}