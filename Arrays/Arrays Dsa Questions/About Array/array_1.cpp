#include<bits/stdc++.h>
using namespace std ; 

int main(){

    int arr[5] ; 

// storing elements in array

    arr[0] = 1 ; 
    arr[1] = 2 ;
    arr[2] = 3 ; 
    arr[3] = 4 ; 
    arr[4] = 5 ; 

// printing an array

cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;

// get input for array from user
cout << "enter elements : " << endl ; 
cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] ; 
cout << arr[0] << arr[1] << arr[2] << arr[3] << arr[4] << endl;


// another way to get input from user

int brr[5];
for(int i = 0 ; i < 5 ; i++){
    cin >> brr[i];
}

//another way to print the array elements
for(int i = 0 ; i < 5 ; i++){
    cout << brr[i] << " ";
}


return 0 ;
}