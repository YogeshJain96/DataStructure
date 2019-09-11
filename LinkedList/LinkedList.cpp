#include "Node.cpp"
#include<iostream>
using namespace std;

template<class T>
class LinkedList //Train
{
	private:
		Node<T> *head;
		Node<T> *tail; 

	public:
		LinkedList():head(nullptr),tail(nullptr){}
		
		bool isFull()
		{
			return false;
		}

		bool isEmpty()
		{
			return(nullptr==head && nullptr==tail);
		}
//Creating Train->Adding Boogie's
		bool AddAtEnd(T ele)
		{
			Node<T> *temp=new Node<T>;
			bool bSuccess=false;

			temp->setData(ele);
			temp->setNext(nullptr);	// tail->setNext(nullptr);	
			

			if(isEmpty()){
				
				head=tail=temp;
				bSuccess=true;
			}
			else{
				tail->setNext(temp);
				tail=temp;
						

				bSuccess=true;
			}

			return bSuccess;

		}
//Add At Beginning
		bool AddAtBeg(T ele)
		{
			Node<T> *t= new Node<T>;
			t->setData(ele);
			if(!isEmpty())
			{
				t->setNext(head);
				head=t;
			}
			else
			{
				t->setNext(nullptr);
				head=tail=t;
			}	
		}

		void DelAtEnd()
		{
			T ele;
			if(!isEmpty())
			{

				Node<T> *t=head;
					
				if(head->getNext()==nullptr && tail->getNext()==nullptr){
					head=tail=nullptr;
					delete t;
				}
				else{
					while(t->getNext()!=tail)
						{
						t=t->getNext();
						}
					 ele=tail->getData();
					 t->setNext(nullptr);
					 delete tail;
					 tail=t;
					 }
					 cout<<"DeletedAtEnd"<<endl;

			}
			else
			{
				cout<<"\nLinkedList is Empty\n"<<endl;
			}
		}

		void DelAtBeg(){
			T ele;
			if(!isEmpty())
			{

				Node<T> *t=head;
					                                                                                                                                             
				if(head->getNext()==nullptr && tail->getNext()==nullptr){
					head=tail=nullptr;
					delete t;
				}
				else{
					head=head->getNext();
					delete t;
					}	
				
				cout<<"DeletedAtBeg"<<endl;
			}
			else
			{
				cout<<"\nLinkedList is Empty\n"<<endl;
			}

		}

		void InsertAtN(int n, T ele){}

		void DelAtN(int n){}

		void Reverse(){}

		void Display()
		{
			if(!isEmpty()){
			Node<T> *t=head;
			cout<<"\n////Linked List//////\n"<<endl;
			while(nullptr!=t){
				cout<<t->getData()<<"->";
				t=t->getNext();
			}
			cout<<"nullptr\n"<<endl;
			}
			else
				cout<<"LinkedList isEmpty"<<endl;
		}
};
int main(){
	LinkedList<int> l;
	int m;
	do{
		cout<<"Enter Choice:\n1.AddAtEnd\n2.AddAtBeg\n3.DeleteAtEnd\n4.DeleteAtBeg\n5.InsertAtN\n6.DeleteAtN\n7.ReverseLL\n8.Display\n0.Exit\n";
		cin>>m;
		cin.get();
		
		switch(m){
			case 1:{//AddAtEnd
					int v;
					cout<<"Enter Node to AddAtEnd: ";
					cin>>v;
					l.AddAtEnd(v);
					l.Display();
				}break;

			case 2://AddAtBeg
				{
					int v;
					cout<<"Enter Node to AddAtBeg: ";
					cin>>v;
					l.AddAtBeg(v);
					l.Display();
				}break;
			case 3://DeleteAtEnd
				{
					l.DelAtEnd();
					l.Display();
				}break;
			case 4://DeleteAtBeg
				{
					l.DelAtBeg();
					l.Display();
				}break;
			case 5://InsertAtN
				{	int n,v;
					cout<<"Enter Position where you want to Insert Node: ";
					cin>>n;
					cout<<"Enter Node to InsertAt "<<n<<"th Position : ";
					cin>>v;
					l.InsertAtN(n,v);
				}break;
			case 6://DeleteAtN
				{
					int n;
					cout<<"Delete the Node At: ";
					cin>>n;
					l.DelAtN(n);
				}break;
			case 7://Reverse
				{
					l.Reverse();
					l.Display();
				}break;
				
			case 8://Display LinkedList
					l.Display();
					break;
			case 0:break;

			default:cout<<"Invalid Choice";

		}
	
	}while(m!=0);

	
	return 0;
}
