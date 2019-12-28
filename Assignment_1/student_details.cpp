#include<iostream>
using namespace std;
main(){
	int n, id[10],i;
	string name[100];
	float m1[100], m2[100], m3[100], m4[100];
	float totalMarks[10], avgMarks[10];
	cout<<"\n Enter the number of students :";
	cin>>n;
	for(i=0;i<n;i++){
		cout<<"\n Enter name :";
		cin>>name[i];
		cout<<"\n Enter student ID :";
		cin>>id[i];
		cout<<"Enter marks in Maths:";
		cin>>m1[i];
		cout<<"\n Enter marks in English:";
		cin>>m2[i];
		cout<<"\n Enter marks in Science:";
		cin>>m3[i];
		totalMarks[i] = m1[i]+m2[i]+m3[i];
		avgMarks[i] = totalMarks[i]/3;	
	}
	for(i=0;i<n;i++){
		cout<<"\n <------Student "<<(i+1)<<" Details------> "<<endl;
		cout<<"\n Name :"<<name[i]<<endl;
		cout<<"\n Student ID:"<<id[i]<<endl;
		cout<<"\n <----- Marks ----->"<<endl;
		cout<<"Math :"<<m1[i]<<"  ";
		cout<<"English :"<<m2[i]<<"  ";
		cout<<"Science :"<<m3[i]<<"  ";
		cout<<"Total marks:"<<totalMarks[i]<<"  ";
		cout<<"Average marks:"<<avgMarks[i]<<"  "<<endl;
		cout<<"_______________________";
	}
}
