#include <iostream>
using namespace std;
int main()
{
    int arr[3][3], q = 1;
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            cout << "Enter the value of row " << i + 1 << " column " << j + 1 << ":";
            cin >> arr[i][j];
        }
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++)
        {
            if (q % 3 == 0)
            {
                cout << arr[i][j] << endl;
            }
            else
            {
                cout << arr[i][j] << "\t";
            }
            q++;
        }
}