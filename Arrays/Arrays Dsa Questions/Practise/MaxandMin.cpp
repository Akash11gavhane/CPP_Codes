#include<iostream>

using namespace std;

int getmin(int arr[] , int n){

    int min = arr[0]; 
    for(int i = 0; i <n; i++){
        if (arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int getmax(int arr[] , int n){

    int max = arr[0];

    for(int i=0; i<n; i++){
        if(arr[i] > max){
            max = arr[i];
        }
    }

    return max;

}

int main() {

    int size ;
    cin >> size;

    

    // declaring an array 
    int num[100];

    //taking input for an array 
    for(int i=0; i<size; i++){
        cin>>num[i]; // store the values in num array by num[i]

    }

    cout<<"maximum value is "<< getmax(num , size)<<endl;
    cout<<"minimum value is "<< getmin(num , size)<<endl;

    


    return 0;
}