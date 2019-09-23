#include "Enqueue.cpp"
#include "RetailShopOwner.cpp"
int main(){
    RetailShopOwner rshop[10];
    Enqueue<RetailShopOwner> eq;
    rshop[0].Accept();
    rshop[1].Accept();
    //rshop[0].Display();
    eq.Add(rshop[0]);
    eq.Add(rshop[1]);
    
    eq.Disp();
    
    return 0;
}