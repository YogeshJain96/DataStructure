#include<iostream>
using namespace std;

//Creating a basic Node i.e. a blueprint for ex-BluePrint of Train's Boggie
template<class T>
class Node
{
	private:
		T data;
		Node* next;
		Node* prev;

	public:
		T getData()
		{
			return data;
		}
		T setData(T ele)
		{
			data=ele;

		}
		Node* getNext()
		{
			return next;
		}
		Node* getPrev()
		{
			return prev;
		}
		Node* setNext(Node* temp)
		{
			next=temp;
		}
		Node* setPrev(Node* temp)
		{
			prev=temp;
		}
	};