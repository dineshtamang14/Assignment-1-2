#include<iostream>

using namespace std;

int main()
{
   int n;

    cout<<"Enter a three digit Numbers: "<<endl;
    cin>>n;
    
    // to get 1st number
    int a = n/100;
    
    //to get last number
    int b = n%10;

	//	to check if 1st num and last num are equal
    if (a==b){
        cout<<"It is palindrome. ";
    } else {
       printf("It is not a palindrome. ");
    }

    return 0;

}
