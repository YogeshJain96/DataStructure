#include<iostream>
using namespace std;
template<class T>
class Node{
	private:
		T data;
		Node<T>* next;
	public:
		Node():next(nullptr){}
		~Node(){}

		T getData(){
			return data;		
		}
		
		void setData(T ele){
			data=ele;
		}
		
		Node<T>* getNext(){
			return next;		
		}
		
		void setNext(Node<T>* temp){
			next=temp;
		}
};
