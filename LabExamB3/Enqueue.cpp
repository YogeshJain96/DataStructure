#include "LL.cpp"
template <class T>
class Enqueue{
    private:
        LL<T> ll;
    public:
        void Add(T ele){
            ll.AddAtEnd(ele);
        }
        void Del(){
            ll.DelAtBeg();
        }
        void Disp(){
            ll.Display();
        }
};