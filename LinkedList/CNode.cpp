#include<iostream>
//Creating a basic Node i.e. a blueprint for ex-BluePrint of Train's Boggie
template<class T>
class Node
{
	private:
		T data;
		Node* next;

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
		Node* setNext(Node* temp)
		{
			next=temp;
		}
	};