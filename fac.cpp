#include <iostream>
using namespace std;
int fac(int a)
{
    if (a == 0 | a == 1)
        return 1;
    else
        return a * fac(a - 1);
}
int main()
{
    int n;
    cout << "Enter Any Number: ";
    cin >> n;
    cout << "Factorial: " << fac(n) << endl;
    return 0;
}