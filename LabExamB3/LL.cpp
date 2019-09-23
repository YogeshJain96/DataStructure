#include "Node.cpp"
template <class T>
class LL{   
    private:
        Node<T> *head;
        Node<T> *tail;

    public:
        LL():head(nullptr),tail(nullptr){}
        // ~LL(){
        //     cout<<"LL dstr called";
        // }

        bool isEmpty(){
            return (nullptr==head && nullptr==tail);             
        }

        void AddAtEnd(T ele){
            Node<T> *temp=new Node<T>;
            temp->setData(ele);
            temp->setNext(nullptr);
         
            if(isEmpty()){
                head=tail=temp;
            }
          
            else{
                tail->setNext(temp);
                tail=temp;
            }
        }

        void AddAtBeg(T ele){
            Node<T> *temp=new Node<T>;
            temp->setData(ele);
            temp->setNext(nullptr);
         
            if(isEmpty()){
                head=tail=temp;
            }
          
            else{
                temp->setNext(head);
                head=temp;
            }
        }

        T DelAtEnd(){
            if(!isEmpty()){
                T ele=tail->getData();
                if(head==tail){
                    Node<T>* temp=tail;
                    head=tail=nullptr;
                    delete temp;                    
                }
                else{
                    Node<T>* temp=head;
                    while(temp->getNext()->getNext()!=nullptr){
                        temp=temp->getNext();                        
                      }
                    temp->setNext(nullptr);
                    delete tail;
                    tail=temp;
                    }
                return ele;
            }
            
        }

        T DelAtBeg(){
            if(!isEmpty()){
                T ele=head->getData();
                if(head==tail){
                    Node<T>* temp=head;
                    head=tail=nullptr;
                    delete temp;    
                }
                else{
                    Node<T>* temp=head;
                    head=head->getNext();
                    delete temp;
                }
                return ele;
            }
        }

        void Display(){
            if(!isEmpty()){
                Node<T>* t=head;
                while(t!=nullptr){
                    t->getData().Display();
                    t=t->getNext();
                }
                cout<<"nullptr"<<endl;
            }
            else
                cout<<"LL is Empty"<<endl;
        }
    
    void Reverse(){
            if(!isEmpty()){
                Node<T>* nh=head;
                Node<T>* temp=nullptr;
                head=head->getNext();
                nh->setNext(nullptr);
                tail=nh;
                while(head!=nullptr){
                    temp=head;
                    head=head->getNext();
                    temp->setNext(nh);
                    nh=temp;
                }
                head=nh;
            }
    }
};