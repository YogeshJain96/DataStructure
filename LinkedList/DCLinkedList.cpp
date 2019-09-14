#include "DNode.cpp"

template<class T>
class DCLinkedList //Train
{
	private:
		Node<T> *head;
		Node<T> *tail; 

	public:
		DCLinkedList():head(nullptr),tail(nullptr){}
		
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
			bool bSuccess=false;
			Node<T> *temp=new Node<T>;
			temp->setData(ele);

			if(!isEmpty())
			{	

				temp->setNext(head);
				head->setPrev(temp);
				tail->setNext(temp);
				temp->setPrev(tail);
				tail=temp;	
				bSuccess=true;			
			}
			else
			{
				// temp->setNext(nullptr);
				// temp->setPrev(nullptr);
				head=tail=temp;
				bSuccess=true;
			}
			return bSuccess;
		}
//Add At Beginning
		bool AddAtBeg(T ele)
		{
			Node<T> *t= new Node<T>;
			t->setData(ele);
			t->setPrev(tail);
			t->setNext(head);
			if(!isEmpty())
			{
				head->setPrev(t);
				head=t;
				tail->setNext(head);
			}
			else
			{
				head=tail=t;
			}	
		}
//DeleteAtEnd
		T DelAtEnd()
		{
			T ele;
			if(!isEmpty())
			{

				Node<T> *t=tail;
				ele=tail->getData();	
				if(tail==head){
					head=tail=nullptr;
					delete t;
					return ele;
				}
				else
				{
					t=tail->getPrev();
					head->setPrev(t);
					delete tail;
					t->setNext(head);
					tail=t;
					return ele;
				}
					
			}
		}

		T DelAtBeg(){
			T ele;
			if(!isEmpty())
			{

				Node<T> *t=head;
				ele=head->getData();		                                                                                                                                             
				if(tail==head){
					head=tail=nullptr;
					delete t;
					return ele;
				}
				else{
					head=head->getNext();
					head->setPrev(tail);
					tail->setNext(head);
					delete t;
					return ele;
					}	
			}
		}
		
		void Display()
		{
			if(!isEmpty()){
			Node<T> *t=head;
			cout<<"\n////Doubly Circular Linked List//////\n"<<endl;
			cout<<"->head<-->";
			do{
				cout<<t->getData()<<"<-->";
				t=t->getNext();
			}
			while(t!=tail->getNext());
			cout<<"tail<-\n"<<endl;
			}
			else
				cout<<"DCLinkedList isEmpty"<<endl;
		}
};
int main(){
	DCLinkedList<int> l;
	int m;
	do{
		cout<<"Enter Choice:\n1.AddAtEnd\n2.AddAtBeg\n3.DeleteAtEnd\n4.DeleteAtBeg\n5.ReverseLL\n6.Display\n9.Size\n0.Exit\n";
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
					cout<<l.DelAtEnd()<<"Deleted At End"<<endl;
					l.Display();
				}break;
			case 4://DeleteAtBeg
				{
					cout<<l.DelAtBeg()<<" Deleted At Beg"<<endl;
					l.Display();
				}break;
	
			// case 5://Reverse
			// 	{
			// 		l.Reverse();
			// 	}break;
				
			case 6://Display LinkedList
					l.Display();
					break;
		// 	case 9://Size Of Linked List
		// 			cout<<"Size Of Linked List: "<<l.Size()<<endl;
		// 			break;
			case 0:break;

			default:cout<<"Invalid Choice";
		 }
	
	}while(m!=0);
	return 0;
}
