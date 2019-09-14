#include "LLbasic.cpp"

template<class T>
class listQueue
{
	private:
		LLbasic<int> ll;
	public:

		void Add(T& ele){
			ll.AddAtEnd(ele);
		}

		T DelQ(){
			return ll.DelAtBeg();
		}

		void DispQ(){
			ll.Display();
		}

		T Size(){
			return ll.Size();
		}

};

int main(){
	
	listQueue<int> q; //Setting data type as <int> for queue
	int m;
	do{
		cout<<"Enter Choice:\n1.Add\n2.Delete\n3.DisplayQueue\n4.Size\n0.Exit\n";
		cin>>m;
		
		switch(m){
			case 1://Add
					int v;
					cout<<"Enter Value to Add: ";
					cin>>v;
					q.Add(v);
					q.DispQ();
					break;
			case 2://Delete
					cout<<q.DelQ()<< " Deleted"<<endl;
					q.DispQ();					
					break;

			case 3://Display
				q.DispQ();
				break;
			case 4://Size
				cout<<"Size is "<<q.Size()<<endl;
			case 0://Exit
					break;

			default:cout<<"Invalid Choice";

		}
	

	}while(m!=0);


	return 0;
}