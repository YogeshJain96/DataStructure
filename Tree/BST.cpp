#include "TreeNode.cpp"
template <class T>

class BST
{
	private:
		TreeNode<T>* root;
	public:
		BST():root(nullptr){}
		
		void Insert(T ele)
		{
			TreeNode<T>* temp=new TreeNode<T>;
			temp->setData(ele);
			temp->setLeft(nullptr);
			temp->setRight(nullptr);
			if(root==nullptr)
			{
				root=temp;
			}
			else
			 {
				TreeNode<T> *current=root;
				while(current!=nullptr){
						if(ele<current->getData()){
						//Left	
							cout<<"Inserted at left"<<endl;
								if(current->getLeft()==nullptr){
										current->setLeft(temp);
										return;
									}
								else
									current=current->getLeft();
						}

						 else{//Right
								cout<<"Inserted at Right"<<endl;							
								if(current->getRight()==nullptr){
										current->setRight(temp);
										return;
										}	
								else
									current=current->getRight();
						 	}
					}	
				}
		}


		TreeNode<T>* getRoot()
		{
			return root;
		}

		TreeNode<T> InOrderDisp(TreeNode<T> *temp)
		{
			if(temp!=nullptr){
			InOrderDisp(temp->getLeft());
			cout<<temp->getData()<<" ";
			InOrderDisp(temp->getRight());
			}
		}

		TreeNode<T> PreOrderDisp(TreeNode<T> *temp)
		{
			if(temp!=nullptr){
			cout<<temp->getData()<<" ";
			PreOrderDisp(temp->getLeft());
			PreOrderDisp(temp->getRight());
			}
		}
		TreeNode<T> PostOrderDisp(TreeNode<T> *temp)
		{
			if(temp!=nullptr){
			PostOrderDisp(temp->getLeft());
			PostOrderDisp(temp->getRight());
			cout<<temp->getData()<<" ";
			}
		}



		void Display(){
			cout<<"\n\nIn Order list --> ";
			InOrderDisp(getRoot());
			cout<<"\n\nPre Order list --> ";
			PreOrderDisp(getRoot());
			cout<<"\n\nPost Order list --> ";
			PostOrderDisp(getRoot());
		
			}

		// void Display1(){
			// TreeNode<T> *current=root->getLeft();


			// cout<<"root value:"<<root->getData()<<endl;

			// while(current!=nullptr){
			// 	cout<<"Inside While";
			// if(current!=nullptr){	
			// 	cout<<"\nleft value:"<<current->getData()<<endl;
			// 	current=current->getLeft();
			// 	return;
			// 	}
			
			
			// if(current!=nullptr){
			// 	cout<<"\nRight value:"<<current->getData()<<endl;
			// 	current=current->getRight();
			// 	return;
			// 	}
			// }
			// }

		};

int main()
{	
	BST<int> bst;
	int n;
	char x;
	do
	{	
		cout<<"\nEnter Element"<<endl;
		cin>>n;
		cin.get();
		if(!cin.fail())
			bst.Insert(n);
		else
		{
			cin.clear();
			cin.ignore();
			cout<<"Enter Valid Number!!"<<endl;
		}
		// //bst.Display();
		cout<<"\nWant to add more(y/n)?"<<endl;
		cin>>x;
		cin.get();
	}while(x!='n');

	bst.Display();

	return 0;
}