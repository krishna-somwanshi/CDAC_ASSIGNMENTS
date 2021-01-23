//WAP to Find Factorial of a number

#include<iostream>

using namespace std;

int main(){

	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	int a = 1;
	for(int i=1;i<=num;i++){
		a = a*i;
	}
	cout<<"a = "<<a<<endl;
	return 0;
}
