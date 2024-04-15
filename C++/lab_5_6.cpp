#include<iostream>
using namespace std;

class Sortable{
	public:
	virtual void Sort_Area()=0;
};
class Compare:public Sortable{
	public:
		void Sort_Area(float rec,float cir,float tr){
		int arr[3],i=0;
		if(rec>cir){
			if(rec>tr){
				arr[i]=rec;
				cout<<"Rectangle area is greatest \n";
				i++;
			}
			else{
				arr[i]=tr;
				cout<<"trangle area is greatest \n";
				i++;
			}
		}
		else if(cir>tr){
			arr[i]=cir;
			cout<<"Circle area is greatest \n";
			i++;
		}
		else{
			arr[i]=tr;
			cout<<"Trangle area is greatest \n";
			i++;
		}
		}
		int j=0;
		for(int j=0;j<3;j++){
			cout<<arr[j]<<" "<<endl;
		}
};

class Shape{
	public:
	float virtual area()
	{
		cout<<"area"<<endl;
	 } 
	virtual void  perimeter()
	{
		cout<<"peri"<<endl;
	}
};
class Rectangle:public Shape{
	int l,b;
	public:
	Rectangle(int l,int b){
	   this->l=l;
	   this->b=b;
	}
	float area(){
		cout<<"Area of Rectangle = "<<l*b<<endl;
		return l*b;
	}
	void perimeter(){
		cout<<"perimeter of rectangle = "<<2*(l+b)<<endl;
	}
};
class Circle:public Shape {
	
	int r;
	public:
	Circle(int r){
	   this->r=r;
	}
	float area(){
		cout<<"Area of Circle = "<<3.14*r*r<<endl;
		3.14*r*r;
	}
	void perimeter(){
		cout<<"perimeter of Circle = "<<2*3.14*r<<endl;
	}
};
class Tringle:public Shape{
	
	int h,ba,s1,s2;
	public:
	Tringle(int h,int ba,int s1,int s2){
	   this->h=h;
	   this->ba=ba;
	   this->s1=s1;
	   this->s2=s2;
	}
	float area(){
		float T_area=0.5*h*ba;
		cout<<"Area of Tringle = "<<T_area<<endl;
		return T_area;
	}
	void perimeter(){
		cout<<"perimeter of Tringle = "<<ba+s1+s2<<endl;
	}
};

int main(){
    Compare *cm;
	Tringle obj1(12,6,6,6);
	float a=obj1.area();
	Circle obj2(5);
	float b=obj2.area();
	Rectangle obj3(3,3);
	float c=obj3.area();
	cm->Sort_Area(c,b,a);
	
	return 0;
}
