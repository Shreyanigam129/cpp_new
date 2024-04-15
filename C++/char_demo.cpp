#include<iostream>
using namespace std;

int main()
{
	/* cout<<"enter the character"<<endl;
	char ch;
	cout<<"enter the character"<<endl;
	cin.get(ch);
	cout.put(ch);
	
	cout<<"----------reading line-------"<<endl;
	char name[10];
	cout<<"enter the line"<<endl;
	cin.getline(name,10);
	cout.write(name,7);
	
	cout<<"using width function"<<endl;
	cout.width(10);
//	char ch='o'; 
	int n=100;
	cout.fill('#');
	cout<<n;
	
	char c;
	cout<<"enter the character for peek() fun"<<endl;
	c=cin.peek();
	cout<<"character is"<<c<<endl;*/
	
	float num=12.789478;
	cout.setf(ios::fixed,ios::floatfield);
	cout.precision(3);
	cout<<num;
	return 0;
}
