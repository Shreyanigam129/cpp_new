#include<iostream>
#include<typeinfo>
using namespace std;

class Employee{
	private:int id,dept_id;
	        string name;
	 protected:double basic_salary;
	        
	        
	public:
	Employee()
	{
		cout<<"default const of employee class"<<endl;
	}
	Employee(int id,string name,int dept_id,double basic_salary)
	{
		this->dept_id=dept_id;
		this->id=id;
		this->basic_salary=basic_salary;
		this->name=name;
		
	}
	double computNetSalary()
	 {
	 	return basic_salary;
	 }
	 void display()
	 {
	 	cout<<"id :"<<id<<endl;
	 	cout<<"name :"<<name<<endl;
	 	cout<<"dept_id :"<<dept_id<<endl;
	 	cout<<"salary :"<<basic_salary<<endl;
	 }
};

class Manager:public Employee{
	private:int perf_bonus;
	
	public:Manager(int id,string name,int dept_id,double basic_salary,int perf_bonus):Employee(id,name,dept_id,basic_salary)
	{
		this->perf_bonus=perf_bonus;
	}
	
	double computNetSalary()
	 {
	 	return basic_salary+perf_bonus;
	 }
	 void display()
	 {
	 	Employee::display();
	 	cout<<"perf_bonus:"<<perf_bonus<<endl;
	 	
	 }
};

class Worker:public Employee
{
	private:int hoursWorked,hourlyRate;
	
	public:Worker(int id,string name,int dept_id,double basic_salary,int hoursWorked,int hourlyRate):Employee(id,name,dept_id,basic_salary)
	{
		this->hoursWorked=hoursWorked;
		this->hourlyRate=hourlyRate;
	}
	double computNetSalary()
	 {
	 	return basic_salary+(hoursWorked*hourlyRate);
	 }
    int getHourlyRate()
   {
	return hourlyRate;
   }
    void display()
	 {
	 	Employee::display();
	 	cout<<"hourWorked:"<<hoursWorked<<endl;
	 	cout<<"hourlyRate:"<<hourlyRate<<endl;

	 }
};

int main()
{

	Employee emp(101,"abc",20,50000);
//	cout<<emp.computNetSalary();
	Manager mgr(301,"sdt",30,60000,5000);
//    cout<<"salary"<<mgr.computNetSalary();
//	
Worker wr(100,"xyz",20,10000,8,500);
 cout<<"salary"<<emp.computNetSalary()<<endl;
 cout<<"salary"<<mgr.computNetSalary()<<endl;
 cout<<"salary"<<wr.computNetSalary()<<endl;
// cout<<"Get"<<obj.getHourlyRate();
//	int choice;
//	Employee* arr[3];
//	arr[0]=&emp;
//	arr[1]=&mgr;
//	arr[2]=&wr;
//	Employee *ptr=&emp;
//	
//	int i;
//	for(i=1;i<3;i++)
//	{
//		if(typeid(arr[i])==(typeid(&emp))){
//			cout<<ptr->computNetSalary();
//		}
//		if(typeid(arr[i])==(typeid(&mgr))){
//			cout<<ptr->computNetSalary();
//		}
//		if(typeid(arr[i])==(typeid(&wr))){
//			cout<<ptr->computNetSalary();
//		}
//		
//	
//	}
	
//	cout<<"-------------Menu-------------"<<endl;
//cout<<"1.Hire Manager\n 2.Hire Worker\n 3.Display information of all employees net salary\n 4.Exit"<<endl;
//cout<<"enter your choice"<<endl;
//cin>>choice;
//
//switch(choice)
//{
//	case 1:
//		break;
//    case 2.
//        break;
//    case 3:
//    	break;
//    case 4:
//    	cout<<"------Exiting--------"<<endl;
//    	break;
//    default:
//    	cout<<"invalid choice"<<endl;
//}
// 
	return 0;
}
