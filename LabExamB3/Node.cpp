#include<iostream>
using namespace std;
template <class T>
class Node{
    private:
        T data;
        Node<T>* next;
    public:
        Node(){}
        ~Node(){}
        
        void setData(T ele){
            data=ele;
        }
        T getData(){
            return data;
        }
        void setNext(Node<T>* temp){
            next=temp;
        }
        Node<T>* getNext(){
            return next;
        }
};