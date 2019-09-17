#include<iostream>
using namespace std;
template <class T>
class TreeNode
{
	private:
		T data;
		TreeNode<T> *left;
		TreeNode<T> *right;

	public:
		T getData()
		{
			return data;
		}
		void setData(T ele)
		{
			data=ele;
		}
		TreeNode* getLeft()
		{
			return left;
		}
		TreeNode* getRight()
		{
			return right;
		}
		void setLeft(TreeNode* temp)
		{
			left=temp;
		}
		void setRight(TreeNode* temp)
		{
			right=temp;
		}
};
