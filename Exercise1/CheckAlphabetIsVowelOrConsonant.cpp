//WAP to Check whether an alphabet is vowel or consonant

#include <iostream>
using namespace std;

int main()
{
    char c;
    int check1, check2;

    cout << "Enter an alphabet: ";
    cin >> c;

    check1 = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

    check2 = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    if (check1||check2)
        cout << c << " is a vowel.";
    else
        cout << c << " is a consonant.";

    return 0;
}
