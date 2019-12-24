//Data Abstraction implementation.
#include<iostream>
using namespace std;
class Calculator{
	float n1, n2 , result;
	
	public :
		void getValues(){
			cout<<"Enter two values :";
			cin>>n1>>n2;
		}
		float Addition(){
			result = n1 + n2;
			return(result);
		}
		float Substraction(){
			result = n1 - n2;
			return(result);
		}
		float Product(){
			result = n1 * n2;
			return(result);
		}
		float Division(){
			
			result = n1 / n2;
			return(result);
		}
};
int main(){
	Calculator calculator;
	int ch;
	float res;
	cout<<"<--------Choice---------> \n";
	cout<<"1. Addition \n";
	cout<<"2. Substraction \n";
	cout<<"3. Product \n";
	cout<<"4. Division \n";
	cout<<"\n Enter your choice :";
	cin>>ch;
	switch (ch){
		case 1:
			calculator.getValues();
			res = calculator.Addition();
			cout<<"Result :"<<res;
			break;
		case 2 :
			calculator.getValues();
			res = calculator.Substraction();
			cout<<"Result :"<<res;
			break;
		case 3 :
			calculator.getValues();
			res = calculator.Product();
			cout<<"Result :"<<res;
			break;
		case 4 :
			calculator.getValues();
			res = calculator.Division();
			cout<<"Result :"<<res;
			break;
		default : cout<<"Invalid Input";
	}
		 
}
