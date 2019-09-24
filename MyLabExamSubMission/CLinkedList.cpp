#include"Node.cpp"
template <class T>
//Singly Circular Linked List
class CLinkedList{
		private:
			Node<T>* head;
			Node<T>* tail;
		public:
			CLinkedList():head(nullptr),tail(nullptr){} //Constr
	
			bool isEmpty(){// checking Is Empty Condtn
				return (head==nullptr and tail==nullptr);
			}
			//Adding At End of circularLL
			void AddAtEnd(T ele){
				Node<T>* temp=new Node<T>;
				temp->setData(ele);
				temp->setNext(head);
				if(isEmpty()){
					head=tail=temp;//First Node of LL
					head->setNext(tail);
					tail->setNext(tail);
					}
				else{
					tail->setNext(temp);
					tail=temp;
				}
			}
			//Displaying
			void Display(){
				if(!isEmpty()){
					Node<T>* temp=head;
						do{
						temp->getData().DispLIC();// Displaying Objects
						temp=temp->getNext();
						}while(temp!=head);
				}
				else{
					cout<<"List is Empty."<<endl;		
				    }
				cout<<"\nEndOfList"<<endl;
				
			}
			//Search Agents in City
			void searchInCity(string scity){
				if(!isEmpty()){
					Node<T>* temp=head;
						do{
						if(scity==temp->getData().getCity())
							temp->getData().DispLIC();// Displaying Objects of Searched City
						temp=temp->getNext();
						}while(temp!=head);
				}
				else{
					cout<<"List is Empty."<<endl;		
				    }
				cout<<"\nEndOfList"<<endl;		
			}
			
			//Count Agents in City
			int countAgInCity(string scity){
				int count=0;
				if(!isEmpty()){
					Node<T>* temp=head;
						do{
						if(scity==temp->getData().getCity())
							count++;// Counting Objects of Searched City
						temp=temp->getNext();
						}while(temp!=head);
					return count;				
				}
				else{
					return 0;
				    }
			}


	};
