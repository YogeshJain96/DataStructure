#include "LLbasic.cpp"
template <class T>
class listStack{
	private:
		LLbasic<int> ll;
	public:
		//template <class T>
		void push(T ele){
			ll.AddAtBeg(ele);
		}
		//template <class T>
		T pop(){
			return ll.DelAtBeg();
		}
		//template <class T>
		T peep(){
			return ll.stackPeep();
		}
		//template <class T>
		void Display(){
			ll.Display();
		}

};
int main(){
	listStack<int> st;
	int m;
	do{
		cout<<"Enter Choice:\n1.Push\n2.Peep\n3.Pop\n4.Show Stack\n0.Exit\n";
		cin>>m;
		
		switch(m){
			case 1://Push
					int v;
					cout<<"Enter Value to Push: ";
					cin>>v;
					st.push(v);
					break;
			case 2://peep
					cout<<"Last Element in Stack is "<<st.peep()<<endl;				
					break;

			case 3://Pop
					cout<<st.pop()<<" Poped Element"<<endl;
					break;
			case 4://Display Stack
					st.Display();
					break;
			case 0://exit
					break;

			default:cout<<"Invalid Choice";

		}
	

	}while(m!=0);

	
	return 0;
}
