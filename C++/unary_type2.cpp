#include<iostream>
using namespace std;
class A{
	
	public :int a,b;
	public:
		A(){
			a=1;
			b=1;
		}
	A(int a,int b){
		this->a=a;
		this->b=b;
	}
	void operator+(){
		a++;
		b++;
	cout<<"After overload "<<a<<b<<endl;
	}
	
};
int main(){
	A obj(5,6);
    +obj;
	
}
