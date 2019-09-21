#include<iostream>
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
