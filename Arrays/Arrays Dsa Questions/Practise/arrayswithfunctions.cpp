#include <iostream>
using namespace std;

void printArray(int arr[], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{

    int third[15] = {2, 7, 8, 4, 7, 5, 2, 7, 8, 6};
    printArray(third, 15);
    int arrSize = sizeof(third) / sizeof(int);
    cout << " the size of array is " << arrSize << endl;

    cout << "printing next function" << endl;

    int fourth[10] = {0};
    int k = 10;
    printArray(fourth, 10);
    int fourthSize = sizeof(fourth) / sizeof(int);
    cout << " the size of array is " << fourthSize << endl;

    cout << "printing last function" << endl;

    int fifth[10] = {1};
    int n = 10;
    printArray(fifth, 10);

    int fifthSize = sizeof(fifth) / sizeof(int);
    cout << "size of fifth is " << fifthSize << endl;

    return 0;
}