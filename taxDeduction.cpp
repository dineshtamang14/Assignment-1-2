#include<iostream>
using namespace std;

int main(){
//	constants for tax slabs
	const long TAX_SLAB_1_END = 250000;
	const double TAX_SLAB_1_RATE = 0.0;
	
	const long TAX_SLAB_2_END = 500000;
	const double TAX_SLAB_2_RATE = 10.0;
	
	const double MIN_TAX_FOR_ABOVE_SLAB_2 = (TAX_SLAB_2_END - TAX_SLAB_1_END) * 0.1;
	
	const long TAX_SLAB_3_END = 1000000;
	const double TAX_SLAB_3_RATE = 20.0;
	
	const double MIN_TAX_FOR_ABOVE_SLAB_3 = (TAX_SLAB_3_END - TAX_SLAB_2_END) * 0.1 + (TAX_SLAB_2_END - TAX_SLAB_1_END) * 0.2;
	
	const int SENIOR_CITIZEN_AGE = 60;
	
//	variables to store income, age and gender
	long income;
	int age;
	char gender;
	
	cout<<"Enter annual income: ";
	cin>>income;
	
	cout<<"Enter a age: ";
	cin>>age;
	
	cout<<"Enter a gender: ";
	cin>>gender;
	
//	variable to store the tax amount
	double taxAmount = 0;
	
	if(income > TAX_SLAB_3_END){
//		income more than 10L
		taxAmount = MIN_TAX_FOR_ABOVE_SLAB_3 + (income - TAX_SLAB_3_END) * 0.3;
	}
	else if(income > TAX_SLAB_2_END){
//		income is more than 5L
		taxAmount = MIN_TAX_FOR_ABOVE_SLAB_2 + (income - TAX_SLAB_2_END) * 0.2;
	}
	else if(income > TAX_SLAB_1_END){
		taxAmount = (income - TAX_SLAB_1_END) * 0.1;
	}
	
//	relaxation in tax
	double relaxation = 0.0;
//	senior citizen
	if(age >= SENIOR_CITIZEN_AGE){
		relaxation = 5.0;
	}
	if(gender == 'f'){
		relaxation = relaxation + 3.0;
	}
	
	taxAmount = ((100 - relaxation)/100) * taxAmount;
	cout<<"Tax amount is Rs: "<<taxAmount<<endl;
	
	return 0;
	
}
