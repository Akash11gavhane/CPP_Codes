#include <iostream>
using namespace std;

int printSum(int arr[] , int n){

    int count = 0;
    for(int i=0 ; i<n ; i++){
        count = count + arr[i];
    }
    return count;
}

int main(){

    int size ;
    cin>>size;
    int num[100];
    for(int i=0; i < size; i++){
        cin>>num[i];
    }
    cout << "the sum of an array is " << printSum(num , size) << endl;

    return 0;
}