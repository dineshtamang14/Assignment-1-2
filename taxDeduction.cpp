#include<iostream> 
#include<string> 
using namespace std; 

int main(){ 
	double income, tax; 
	int age; 
	string gender; 
	
	cout<<"Enter the income of a person : "; 
	cin>>income; 
	
	cout<<"Enter your gender: "; 
	cin>>gender; 
	
	cout<<"Enter the age of a person: "; 
	cin>>age;
	 
	if(income<=250000){ 
	tax=0; 
	} 
	else if(income>250000 && income<=500000){ 
	tax=(income-200000)/10; 
	} 
	else if(income>500000 && income<=1000000){ 
	tax=(((income-500000)/10)*2)+30000; 
	} 
	else if(income>1000000 && age >= 60 && gender == "female"){ tax=(((income-1000000)/10)*3)+130000; 
	} 
	else if(income>1000000 && age >= 60 && gender == "male"){ tax=(((income-1000000)/10)*0.6)+130000; 
	} 
	else if(income>1000000){ 
	tax=(((income-1000000)/10)*0.09)+130000; 
	} 
	cout<<"The Income Tax Payable of a Person is: "<<tax; 
	
	return 0; 
}

