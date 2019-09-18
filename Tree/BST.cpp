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

		bool Delete(TreeNode<T> *temp)
		{
			if(temp!=nullptr)
			{
			Delete(temp->getLeft());
			Delete(temp->getRight());
			delete temp;
			}
			root=nullptr;
			return true;
		}

		T Find_Min(TreeNode<T> *t)			//TreeNode<T>* Find_Min(TreeNode<T> *t)
		{
			if(t==nullptr||t->getLeft()==nullptr)
			{
				return t->getData();			//return t;
			}
			else
			{
				Find_Min(t->getLeft());
			}
		}
												//For Node
		T Find_Max(TreeNode<T> *t)			//TreeNode<T>* Find_Min(TreeNode<T> *t)
		{
			if(t==nullptr|| t->getRight()==nullptr)
			{
				return t->getData();   		//return t;
			}
			else
			{
				Find_Max(t->getRight());
			}
		}

		int Depth(TreeNode<T>* temp)
		{
			if(temp==nullptr)
				return 0;
			else{
				int ldepth=Depth(temp->getLeft());
				int rdepth=Depth(temp->getRight());

				if(ldepth>rdepth)
					return (ldepth+1);
				else
					return (rdepth+1);
			}

		}
		//tRYING WITH LOOP
		// int Depth(TreeNode<T>* temp,int dmax){
		// 	int dep=0;

		// 	//Traverse Left
		// 	TreeNode<T> *current=root->getLeft();
		// 	while(current!=nullptr){
		// 		cout<<"Inside Left While"<<endl;
		// 		if(current!=nullptr){	
		// 			dep++;
		// 			current=current->getLeft();
		// 			return 0;
		// 			}
		// 		}

		// 	if(dep>dmax)
		// 		dmax=dep;
		// 	//Traverse Right
		// 	current=root->getRight();
		// 	while(current!=nullptr){
		// 		cout<<"Inside Right While"<<endl;
		// 		if(current!=nullptr){	
		// 			dep++;
		// 			current=current->getRight();
		// 			return 0;
		// 			}
		// 		}

		// 	if(dep>dmax)
		// 		dmax=dep;

		// 	return dmax;
		// }

		void Display(){
			cout<<"\n\nIn Order list --> ";
			InOrderDisp(getRoot());
			cout<<"\n\nPre Order list --> ";
			PreOrderDisp(getRoot());
			cout<<"\n\nPost Order list --> ";
			PostOrderDisp(getRoot());
			cout<<endl;		
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
	int x;
	int c;
	do
	{	
		
		cout<<"Enter choice\n1.Insert\n2.InOrder\n3.PreOrder\n4.PostOrder\n5.Delete\n6.Find_Min\n7.Find_Max\n8.Display\n9.Depth\n0.Exit"<<endl;
		cin>>c;
		cin.get();
		switch(c)
		{
			case 1://Insert a Node in Tree
			{
				int n;
				cout<<"\nEnter Element"<<endl;
				cin>>n;
				cin.get();
				bst.Insert(n);
			}break;

			case 2://InOrder Sequence of Tree
			{
				bst.InOrderDisp(bst.getRoot());
			}break;

			case 3://PreOrder Sequence of Tree
			{
				bst.PreOrderDisp(bst.getRoot());
			}break;

			case 4://PostOrder Sequence of Tree
			{
				bst.PostOrderDisp(bst.getRoot());
			}break;

			case 5://Delete a Node in Tree
			{
				if(bst.Delete(bst.getRoot()));
				cout<<"Tree is Deleted and Empty."<<endl;
			}break;

			case 6://Find_Min Node of Tree
			{
				cout<<"Min :"<<bst.Find_Min(bst.getRoot())<<endl;		//bst.Find_Min(bst.getRoot())->getData()
			}break;

			case 7://Find_Max Node of Tree
			{
				cout<<"Max :"<<bst.Find_Max(bst.getRoot())<<endl;		//bst.Find_Max(bst.getRoot())->getData()
			}break;

			case 8://Display Tree
			{
				bst.Display();
			}break;

			case 9://Depth/Height of Tree
			{
				cout<<"Depth of Tree : "<<bst.Depth(bst.getRoot())<<endl;
			}break;

			case 0:break;
			default :
			cout<<"Invalid choice"<<endl;
		}
	}while(c!=0);
	return 0;
}
		
		
		// if(!cin.fail())
			
		// else
		// {
		// 	cin.clear();
		// 	cin.ignore();
		// 	cout<<"Enter Valid Number!!"<<endl;
		// }
		// // //bst.Display();
		// cout<<"\nWant to add more(y/n)?"<<endl;
		// cin>>x;
		// cin.get();
	
