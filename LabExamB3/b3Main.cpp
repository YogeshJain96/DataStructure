#include "Enqueue.cpp"
#include "RetailShopOwner.cpp"
int main(){
    int shopsize=10;
    RetailShopOwner rshop[shopsize];
    Enqueue<RetailShopOwner> eq;
    int n;
     do{
        cout<<"\n//////Menu///////"<<endl;
        cout<<"1.Add Retail Shops\n2.Search Shops in Particular City\n3.Delete Shop\n4.DisplayAll\n0.exit"<<endl;
        cout<<"Enter Choice : ";

        cin>>n;
        cin.get();
        switch(n){
            case 1:{int i=0;
                    char ch;
                do{
                rshop[i].Accept();
                eq.Add(rshop[i]);
                cout<<"Want to Add more shops(y/n)?";
                cin>>ch;
                cin.get();
                i++;
                }
                while(ch!='n');
            }
            break;

            case 2:{
                //Search
                cout<<"Enter City: ";
                string city;
                getline(cin,city);
                int count=0;
                string scity;
                for(int j=0;j<shopsize;j++){
                    scity=rshop[j].getCity();
                    //cout<<j<<scity<<endl;
                    if(scity==city){
                        count++;
                        }
                }
                cout<<city<<" is having "<<count<< " shops";
            }
            break;

            case 3:{
                eq.Del();
            }
            break;

            case 4:{
                eq.Disp();
            }
            break;

            break;
            case 0:break;
            default:cout<<"Enter Valid Choice!!";
        }
    }
    while(n!=0);
    
    return 0;
}
