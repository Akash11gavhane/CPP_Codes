#include <iostream>
using namespace std ;

// write function to printing an array

void printArray(int arr[] , int n){

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " ";
    }
    cout << endl ;

}

// write function to swap alternate element

void swapAlternate(int arr[] , int n){

    int num1 = 0 ; 
    int num2 = 1 ;

    for (int i = 0 ; num2 <= n ; i++){

        swap(arr[num1] , arr[num2]);
        num1 = num1 + 2 ;
        num2 = num2 + 2 ;
    }
}

int main(){

    int arr1[10] = {1 , 2 , 3 , 4 , 5 , 6 , 7 , 8 , 9 , 10};

    printArray(arr1 , 10);
    swapAlternate(arr1 , 10);
    printArray(arr1 , 10);
}