#include <iostream>
using namespace std;

int main()
{

    int number[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
    cout << "value at 15 index is : " << number[14] << endl;

    int second[4] = {5, 6, 7};
    cout << "second is : " << second[2] << " " << second[0] << endl;

    int third[15] = {2, 7};
    int n = 5;
    cout << "Printing the Array " << endl;
    // print the array
    for (int i = 0; i <= n; i++)
    {
        cout << "third is : " << third[i] << endl;
    }

    int fourth[10] = {0};
    n = 10;
    cout << "Printing the array " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << fourth[i] << " " << endl;
    }
    cout << endl;
    return 0;
}