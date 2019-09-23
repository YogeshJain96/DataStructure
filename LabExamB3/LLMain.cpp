#include "LL.cpp"
int main(){
    LL<int> ll;
    int n;
    do{
        cout<<"\n//////Menu#LL///////"<<endl;
        cout<<"1.AddAtEnd\n2.AddAtBeg\n3.DelAtEnd\n4.DelAtBeg\n5.Display\n6.Reverse\n0.exit"<<endl;
        cout<<"Enter Choice : ";
        cin>>n;
        cin.get();
        switch(n){
            case 1:{
                int val;
                cout<<"Enter Value: ";
                cin>>val;
                ll.AddAtEnd(val);
                ll.Display();
            }
            break;

            case 2:{
                int val;
                cout<<"Enter Value: ";
                cin>>val;
                ll.AddAtBeg(val);
                ll.Display();
            }
            break;

            case 3:{
                cout<<ll.DelAtEnd()<<"Deleted at End"<<endl;
                ll.Display();
            }
            break;

            case 4:{
                cout<<ll.DelAtBeg()<<"Deleted at Beg"<<endl;
                ll.Display();
            }
            break;

            case 5:{
                ll.Display();
            }
            break;
            case 6:{
                ll.Reverse();
                ll.Display();
            }
            break;
            case 0:break;
            default:cout<<"Enter Valid Choice!!";
        }
    }
    while(n!=0);
       
    return 0;
}