//WAP to Check Prime Number using loop?
#include<iostream>

using namespace std;

int main(){
	
	int a;
	cout<<"Enter the number"<<endl;
	cin>>a;
	bool flag = 0;
	for(int i=2;i<a/2;i++){
		if((a%i) == 0){
			flag = 1;
		}
	}
	
	if(flag == 0)
	{
		cout<<"Prime Number"<<endl;
	}
	else{
		cout<<"Not a Prime Number"<<endl;
	}
	return 0;
}
