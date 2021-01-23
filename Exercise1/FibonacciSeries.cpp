//WAP to Display Fibonacci series up to a given
//number (instead of terms)
//Input: 20
//Output:0 + 1 + 1 + 2 + 3 + 5 + 8 + 13

#include <iostream>
using namespace std;

int main() {
    int n1 = 0, n2 = 1, hold = 0, n;

    cout << "Enter a positive number: ";
    cin >> n;

    
    cout << "Fibonacci Series: " << n1 << " " << n2 << " ";

    hold = n1 + n2;

    while(hold <= n) {
        cout << hold << " ";
        n1 = n2;
        n2 = hold;
        hold = n1 + n2;
    }
    return 0;
}
