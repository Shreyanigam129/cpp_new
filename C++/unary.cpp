#include<iostream>
using namespace std;
class A{
	
	public :int a;
	public:
		A(){
			a=1;
			//b=1;
		}
	A(int a){
		this->a=a;
	//	this->b=b;
	}
//	int operator++(){
//		this->a=this->a+1;
//		return this->a;
//	}
	void display(){
		cout<<"After overload"<<a<<endl;
	}
};
int main(){
	A obj(5);
    obj.a++; //this is not a unary operator overloading
	obj.display();
}
