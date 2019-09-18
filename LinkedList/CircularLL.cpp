#include "Node.cpp"
#include<iostream>
using namespace std;

template<class T>
class CLinkedList //Train
{
	private:
		Node<T> *head;
		Node<T> *tail; 

	public:
		CLinkedList():head(nullptr),tail(nullptr){}
		
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
			

			if(!isEmpty()){

				tail->setNext(temp);
				temp->setNext(head);
				tail=temp;

				bSuccess=true;
			}
			else{
				
				temp->setNext(head);
				head=tail=temp;
					
				bSuccess=true;
			}
			return bSuccess;

		}
// Add At Beginning
		bool AddAtBeg(T ele)
		{
			Node<T> *t= new Node<T>;
			t->setData(ele);
			if(!isEmpty())
			{
				t->setNext(head);
				tail->setNext(t);
				head=t;
			}
			else
			{
				t->setNext(head);
				head=tail=t;
			}	
		}

		void DelAtEnd()
		{
			T ele;
			if(!isEmpty())
			{

				Node<T> *t=head;
					
				if(!(head->getNext()==head && tail->getNext()==head))
				{
					while(t->getNext()!=tail)
						{
						t=t->getNext();
						}
					 ele=tail->getData();
					 t->setNext(head);
					 delete tail;
					 tail=t;
					 }
				else
					{
						head=tail=nullptr;
						delete t;
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
					                                                                                                                                             
				if(head==tail){
					head=tail=nullptr;
					delete t;
				}
				else{
					head=head->getNext();
					delete t;
					tail->setNext(head);
					}	
				
				cout<<"DeletedAtBeg"<<endl;
			}
			else
			{
				cout<<"\nLinkedList is Empty\n"<<endl;
			}

		}
		bool loopDet()
		{//Floyd's Loop Detection Algo
			if(!isEmpty()){
				
				if(head->getNext()==nullptr)
					return true;
			Node<T>* slow=head;
			Node<T>* fast=head->getNext();
			while(slow!=nullptr|| fast!=nullptr || fast->getNext()!=nullptr)
			{
				if(slow==fast)
				{
					return true;
				}
				else
				{
					slow=slow->getNext();
					fast=fast->getNext()->getNext();
					}
				}
			}
			return false;

		}


		void Display()
		{
			if(!isEmpty()){
			Node<T> *t=head;
			cout<<"\n////CLinked List//////\n"<<endl;
			cout<<"head->";
			do{
				cout<<t->getData()<<"->";
				t=t->getNext();
			}
			while(t!=tail->getNext());
			cout<<"head\n"<<endl;
			}
			else
				cout<<"CLinkedList isEmpty"<<endl;
		}
};
int main(){
	CLinkedList<int> l;
	int m;
	do{
		cout<<"Enter Choice:\n1.AddAtEnd\n2.AddAtBeg\n3.DeleteAtEnd\n4.DeleteAtBeg\n5.Floyd's Loop Detection\n6.Display\n0.Exit\n";
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
			case 5://loop Detection
				{
				if(l.loopDet())
					cout<<"Loop Detected!"<<endl;
				else
					cout<<"Loop Missing!"<<endl;
				}break;

			case 6://Display LinkedList
					l.Display();
					break;
			case 0:break;

			default:cout<<"Invalid Choice";

		}
	
	}while(m!=0);

	
	return 0;
}
