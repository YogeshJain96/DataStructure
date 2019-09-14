#include "Node.cpp"

template<class T>
class LLbasic //ex-Train
{
	private:
		Node<T> *head;
		Node<T> *tail; 

	public:
		LLbasic():head(nullptr),tail(nullptr){}
		
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
//Delet At End
		T DelAtEnd()
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
					 return ele;
			}
			else
			{
				cout<<"\nEmpty\n"<<endl;
				return 0;
			}
		}
//Delet At Beg
		T DelAtBeg(){
			T ele;
			if(!isEmpty())
			{

				Node<T> *t=head;
				ele=head->getData();

				if(head->getNext()==nullptr && tail->getNext()==nullptr){
					head=tail=nullptr;
					delete t;
				}
				else{
					head=head->getNext();
					delete t;
					}	
				
				cout<<"DeletedAtBeg"<<endl;
				return ele;
			}
			else
			{
				cout<<"\nEmpty\n"<<endl;
				return 0;
			}
		}
//Size of List
		int Size()
		{
			int n=0;
			Node<T> *t=head;
			while(t!=nullptr){
				t=t->getNext();
				n++;
			} 
			return n;
		}

//Displaying
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
//Function for peeping Stack
		T stackPeep()
		{
			if(!isEmpty()){
				return head->getData();
			}
			else
				return 0;
		}
};