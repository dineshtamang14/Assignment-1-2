#include<iostream> 
using namespace std; 

int main(){ 
	int n, remainder, sum = 0; 
	
	cout<<"Enter a Three Numbers: "; 
	cin>>n; 
	
	while (n > 0) { 
		remainder = n % 10; 
		sum = sum * 10 + remainder; 
		n = n / 10; 
	} 
	cout<<sum;
	 
	return 0; 
} 

