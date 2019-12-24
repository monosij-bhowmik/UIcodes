//Person --> Employee --> Manager
#include<iostream>
using namespace std;
class Person{
	public :
		void personDetails(){
			cout<<"Name : ABC"<<endl;
			cout<<"Gender : M"<<endl;
			cout<<"City : HYD"<<endl;
		}
};
class Employee: protected Person{
	public :
		 int sal = 35000;
		void EmpDetails(){
			personDetails();
			cout<<"Employer name : Deloitte"<<endl;
			cout<<"Salary : "<<sal<<endl;
		}
};
class Manager: public Employee{
	public :
		void ManagerDetails(){
			int nsal;
			nsal = 4000 +sal;
			EmpDetails();
			cout<<"Manager ID : MN74582585"<<endl;
			cout<<"Experience : 5 Yr+"<<endl;
			cout<<"New Salary :"<<nsal;
		}
	
	
};
main(){
	Manager manager;
	Person person;
	int exp;
	cout<<"Enter the no of years of experience :";
	cin>>exp;
	if(exp >= 2 && exp <= 5){
		cout<<"\n Employee Details \n";
		manager.EmpDetails();
	}
	else if(exp>= 5 ){
		cout<<"\n Manager Details \n";
		manager.ManagerDetails();
	}
	else if(exp >= 1  && exp <= 2){
		person.personDetails();
	}
	else if(exp<=0){
		cout<<"Still a student";
	}
}
