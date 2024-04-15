#include<iostream>
using namespace std;
class Box{
	int l,h;
	public :
		Box(){
	    l=0;
		h=0;
		}
		Box(int l,int h)
		{
			this->l=l;
			this->h=h;
			
		}
	Box operator+(const Box &b1)
	{
		int i=this->l+b1.l;
		int y=this->h+b1.h;
		Box obj(i,y);
		return obj;
	}
	void display()
	{
		cout<<"l "<<l<<endl;
		cout<<"h "<<h<<endl;
	}
};

int main(){
	Box obj1(10,12);
	Box obj2(20,22);
	Box out=obj1+obj2;
	out.display();
	
return 0;	
}
