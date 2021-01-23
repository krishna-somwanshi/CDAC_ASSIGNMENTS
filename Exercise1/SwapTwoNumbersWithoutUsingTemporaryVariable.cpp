//WAP to Swap two numbers without using temporary variable
    
    #include <iostream>
using namespace std;

int main()
{
    int a = 5, b = 10, temp;

    a = a + b;
    b = a - b;
    a = a - b;

    cout<<"a = "<<a<<endl; 
	cout<<"b = "<<b<<endl;

    return 0;
}
