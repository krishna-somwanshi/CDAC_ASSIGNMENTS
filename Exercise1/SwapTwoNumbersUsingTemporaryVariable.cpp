//WAP to Swap two numbers using temporary variable
#include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    temp = a;
    a = b;
    b = temp;

    cout<<"a = "<<a<<endl; 
	cout<<"b = "<<b<<endl;

    return 0;
}
