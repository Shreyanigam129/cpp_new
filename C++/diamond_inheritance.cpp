#include<iostream>
using namespace std;

class Employee{
	protected:int id;
	        string name;
	        double salary;
	
	public:
		Employee()
		{
			id=10;
			name="noname";
			salary=10;
			cout<<"default cont of employee"<<endl;
		}
		Employee(int id,string name,double salary)
		{
			this->id=id;
			this->name=name;
			this->salary=salary;
			cout<<"parameterize cont of employee"<<endl;
		}
	void display()
	{
		cout<<"id  name salary:"<<id<<name<<salary<<endl;
	}
};

class Manager:virtual public Employee{
	protected:int dept_no,incentives;
	
	public:
	Manager()
	{
		dept_no=20;
		incentives=20;
			cout<<"default cont of manager"<<endl;
	}
	Manager(int id,string name,double salary,int dept_no,int incentives):Employee(id,name,salary)
	{
		this->dept_no=dept_no;
		this->incentives=incentives;
		cout<<"parameterize cont of manager"<<endl;
	}
	void display()
	{
		cout<<"id  name salary dept_id incentives:"<<id<<name<<salary<<dept_no<<incentives<<endl;
	}
	        
};

class SalesPerson:virtual public Employee{
	protected:
	       int pa,fa,ta;
	public:
		SalesPerson()
		{
			pa=ta=fa=30;
				cout<<"default cont of salesperson"<<endl;
		}
		
		SalesPerson(int id,string name,double salary,int pa,int fa,int ta):Employee(id,name,salary)
		{
			this->pa=pa;
			this->ta=ta;
			this->fa=fa;
			cout<<"parameterize cont of salesperson"<<endl;
		}
		void display()
	{
		cout<<"id  name salary dept_id incentives pa fa ta:"<<id<<name<<salary<<pa<<fa<<ta<<endl;
	}
	     
};

class SaleManager:public Manager,public SalesPerson{
	private:string des;
	
	public:
		SaleManager()
		{
			des="";
			cout<<"default cont of salemanager"<<endl;
		}
		SaleManager(int id,string name,double salary,int dept_id,int incentives,int pa,int fa,int ta,string des):
		Manager(id,name,salary,dept_no,incentives),SalesPerson(id,name,salary,pa,fa,ta),Employee(id,name,salary)
		{
			this->des=des;
			cout<<"parameterize cont of salemanager"<<endl;
		}
		void display()
	{
		Employee::display();
		Manager::display();
		SalesPerson::display();
		//cout<<"id name salary dept_id incentives pa fa ta des:"<<id<<" "<<name<<" "<<salary<<" "
		//<<dept_no<<" "<<incentives<<" "<<pa<<" "<<fa<<" "<<ta<<" "<<des<<" "<<endl;
	}
	     
};

int main()
{
	SaleManager s(101,"geeta",50000,20,2000,3000,4000,5000,"saleperson");
	s.display();
	//Employee e;
	//e.display();
	return 0;
}
