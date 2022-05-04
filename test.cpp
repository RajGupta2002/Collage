#include <iostream>
#include <string>
using namespace std;
int main()
{
    int arr[5] = {0};
    for (const auto &num : arr)
    {
        cout << num << endl;
    }
    string course[5] = {"Science", "Maths", "SST", "English", "Hindi"};
    for (const auto &str : course)
    {
        cout << str << endl;
    }
    return 0;
}