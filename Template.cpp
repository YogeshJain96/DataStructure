//Simple Program Using Template
#include <iostream>
using namespace std;
class Add{
public:
	template<class T>
	T sum(T& a,T& b){
		return (a+b);
	}
};
int main()
{
	Add a1;
	//int a=10,b=20;
	float a=10.22,b=20.33;
	cout<<a1.sum(a,b);
	return 0;
}

///////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;
// class Add{
// public:

// 	int sum(int& a,int& b){
// 		return( a+b);
// 	}
// };
// int main()
// {
// 	Add a1;
// 	int a=10,b=20;
// 	cout<<a1.sum(a,b);
// 	return 0;
// }
//////////////////////////////////////////////////////////

// #include <iostream>
// using namespace std;
// class Add{
// public:

// 	float sum(float& a,float& b){
// 		return( a+b);
// 	}
// };
// int main()
// {
// 	Add a1;
// 	float a=10.22,b=20.22;
// 	cout<<a1.sum(a,b);
// 	return 0;
// }
