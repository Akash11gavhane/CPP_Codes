#include <iostream>
using namespace std;

int main()
{

    int number[] = {0, 1, 5, 8, 6, 4, 7, 3, 4, 8, 6, 1, 8, 2, 4, 6, 4, 8, 2};
    int arrSize = sizeof(number) / sizeof(int);
    cout << "value at 15 index is : " << number[14] << endl;
    cout << "value at index 2 is :" << number[1] << endl;
    cout << "value at 10 index is : " << number[9] << endl;
    cout << "the size of an array is : " << arrSize << endl;

    // printing the array

    cout << " \nprinting the array" << endl;
    int n = 20;
    for (int i = 0; i < n - 1; i++)
    {
        cout << number[i] << " ";
    }

    cout << endl;

    int fourth[10] = {0};
    cout << "printing the array" << endl;
    int k = 10;
    for (int i = 0; i < k - 1; i++)
    {
        cout << fourth[i] << " ";
    }

    return 0;
}