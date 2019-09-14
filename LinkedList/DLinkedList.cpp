#include "DNode.cpp"

template<class T>
class DLinkedList //Train
{
	private:
		Node<T> *head;
		Node<T> *tail; 

	public:
		DLinkedList():head(nullptr),tail(nullptr){}
		
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
			temp->setNext(nullptr);	// tail->setNext(nullptr);	
			
			if(!isEmpty())
			{
				tail->setNext(temp);
				temp->setPrev(tail);
				tail=temp;	
				bSuccess=true;			
			}
			else
			{
				temp->setPrev(nullptr);
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
			t->setPrev(nullptr);

			if(!isEmpty())
			{
				t->setNext(head);
				head->setPrev(t);
				head=t;
			}
			else
			{
				t->setNext(nullptr);
				head=tail=t;
			}	
		}
//DeleteAtEnd
		void DelAtEnd()
		{
			T ele;
			if(!isEmpty())
			{

				Node<T> *t=tail;
					
				if(tail->getNext()==nullptr && tail->getPrev()==nullptr){
					head=tail=nullptr;
					delete t;
				}
				else
				{
					t=tail->getPrev();
					t->setNext(nullptr);
					ele=tail->getData();
					// tail->setPre(nullptr);
					delete tail;
					tail=t;
				}
					cout<<"DeletedAtEnd"<<endl;
			}
			else
				cout<<"\nLinkedList is Empty\n"<<endl;
		}

		void DelAtBeg(){
			T ele;
			if(!isEmpty())
			{

				Node<T> *t=head;
					                                                                                                                                             
				if(head->getNext()==nullptr && head->getPrev()==nullptr){
					head=tail=nullptr;
					delete t;
				}
				else{
					head=head->getNext();
					head->setPrev(nullptr);
					delete t;
					}	
				
				cout<<"DeletedAtBeg"<<endl;
			}
			else
				cout<<"\nLinkedList is Empty\n"<<endl;
		}
// 		int Size()
// 		{
// 			int n=0;
// 			Node<T> *t=head;
// 			while(t!=nullptr){
// 				t=t->getNext();
// 				n++;
// 			} 
// 			return n;
// 		}

// 		void InsertAtN(int n, T ele){
// 		int s=Size();
// 		if(n<=s && n>=0){
// 			if(n<=1)
// 				AddAtBeg(ele);	
// 			else{
// 				int count=1;
// 				Node<T> *temp=new Node<T>;
// 				temp->setData(ele);
// 				Node<T> *p=head;
// 				while(count<n-1){
// 					p=p->getNext();
// 					count++;
// 				}
// 				temp->setNext(p->getNext());
// 				p->setNext(temp);
// 			}
// 			Display();
// 		}
// 		else 
// 			cout<<"Enter Value less than "<<s<<endl;

		
// }

// 		void DelAtN(int n){
// 			int s=Size();
// 			T ele;
// 		if(n<=s && n>=1){
// 			if(n==1)
// 				DelAtBeg();	
// 			else{
// 				int count=1;
// 				Node<T> *p=head;
// 				Node<T> *q=head->getNext();
// 				while(count<n-1){
// 					p=p->getNext();
// 					count++;
// 				}
// 				q=p->getNext();
// 				ele=q->getData();
// 				p->setNext(q->getNext());
// 				delete q;
// 		}
// 			Display();
// 		}
// 		else 
// 			cout<<"Enter Value less than "<<s<<endl;

		
// }

		void Reverse()
		{
		// if(!isEmpty()){
		// 	Node<T> *temp=head;
		// 	head=tail;
		// 	tail=temp;	
		// 	}
			if(!isEmpty()){
			Node<T> *t=tail;
			cout<<"\n////Linked List//////\n"<<endl;
			while(nullptr!=t){
				cout<<t->getData()<<"->";
				t=t->getPrev();
			}
			cout<<"nullptr\n"<<endl;
			}
			else
				cout<<"LinkedList isEmpty"<<endl;
		}


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
	DLinkedList<int> l;
	int m;
	do{
		cout<<"Enter Choice:\n1.AddAtEnd\n2.AddAtBeg\n3.DeleteAtEnd\n4.DeleteAtBeg\n5.InsertAtN\n6.DeleteAtN\n7.ReverseLL\n8.Display\n9.Size\n0.Exit\n";
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
		// 	case 5://InsertAtN
		// 		{	int n,v;
		// 			cout<<"Enter Position where you want to Insert Node: ";
		// 			cin>>n;
		// 			cout<<"Enter Node to InsertAt "<<n<<"th Position : ";
		// 			cin>>v;
		// 			l.InsertAtN(n,v);
		// 		}break;
		// 	case 6://DeleteAtN
		// 		{
		// 			int n;
		// 			cout<<"Enter Position from where you want to Delete Node: ";
		// 			cin>>n;
		// 			l.DelAtN(n);
		// 		}break;
			case 7://Reverse
				{
					l.Reverse();
				}break;
				
			case 8://Display LinkedList
					l.Display();
					break;
		// 	case 9://Size Of Linked List
		// 			cout<<"Size Of Linked List: "<<l.Size()<<endl;
		// 			break;
		// 	case 0:break;

		// 	default:cout<<"Invalid Choice";
		 }
	
	}while(m!=0);
	return 0;
}
