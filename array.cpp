#include <iostream>
using namespace std;
int add(int a, int b)
{
    return a + b;
}
int sub(int a, int b)
{
    return a - b;
}
int mul(int a, int b)
{
    return a * b;
}
int qu(int a, int b)
{
    return a / b;
}
int rem(int a, int b)
{
    return a % b;
}
int main()
{
    int x, y;
    char op;
    cout << "Enter the Number A: ";
    cin >> x;
    cout << "Enter the Number B: ";
    cin >> y;
    cout << "Select the Operation[+,-,/,*,%]: ";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << add(x, y) << endl;
        break;
    case '-':
        cout << sub(x, y) << endl;
        break;
    case '*':
        cout << mul(x, y) << endl;
        break;
    case '/':
        cout << qu(x, y) << endl;
        break;
    case '%':
        cout << rem(x, y) << endl;
        break;
    default:
        cout << "Invalid Input!\n";
        break;
    }
    return 0;
}