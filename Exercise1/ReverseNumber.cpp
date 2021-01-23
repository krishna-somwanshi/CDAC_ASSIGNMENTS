//WAP to Reverse a Number
#include <iostream>
using namespace std;

int main()
 {
    int n, rev = 0, remainder;

    cout << "Enter the number: ";
    cin >> n;

    while(n != 0) 
   {
        remainder = n%10;
        rev = rev*10 + remainder;
        n /= 10;
    }

    cout << "Reversed Number = " << rev;

    return 0;
}
