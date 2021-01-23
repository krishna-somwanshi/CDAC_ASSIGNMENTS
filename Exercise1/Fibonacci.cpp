//WAP to Display Fibonacci series

#include<iostream>

using namespace std;

int main(){

	int num;
	cout<<"Enter the number"<<endl;
	cin>>num;
	
	int fNum = 0;
	int sNum = 1;
	int tNum = 0;

    cout << "Enter the number of elements: ";
    cin >> num;
    cout << fNum << " " << sNum << " ";
    for (int i = 2; i < num; ++i)
    {
        tNum = fNum + sNum;
        cout << tNum << " ";
        fNum = sNum;
        sNum = tNum;
    }
    return 0;
	

return 0;
}
