#include<iostream>
#include<fstream>
using namespace std;

void readFun(string);
void testfunOp(string);
void testfunOp(string name){
	ofstream obj;
	obj.open(name.c_str());
	if(obj.fail()){
		cout<<"error occured"<<endl;
	}
	else{
		cout<<"writing in file"<<endl;
		string str="this is new file";
		obj<<str;
		obj.close();
		}
}
void readFun(string name)
{
	ifstream obj;
	obj.open(name.c_str());
	if(obj.fail()){
		cout<<"could not open"<<endl;
	}
	else{
		cout<<"reading from file"<<endl;
		string str;
		while(getline(obj,str))
		{
			cout<<str;
		}
		
		obj.close();
		}
	} 

int main()
{
	string name;
	cout<<"enter file name"<<endl;
	cin>>name;
	testfunOp(name);
	readFun(name);
	return 0;
}
