#include<bits/stdc++.h>
using namespace std;

void Sum(int num1 , int num2){

    cout << num1 + num2 << endl;
}

int maxElement(int num1 , int num2){

    if (num1 >= num2){
        return num1;
    }
    return num2 ; 
}

int minElement(int num1 , int num2){

    if(num1 <= num2) return num1 ; 

    return num2 ; 
    
}


int main(){
    int num1 ; 
    cin >> num1 ; 
    int num2 ;
    cin >> num2 ; 

    Sum(num1 , num2);

    int minimum = min(num1 , num2);
    cout << minimum << endl;
    int maximum = max(num1 , num2);
    cout << maximum << endl;

    cout << maxElement(num1 , num2) << endl ;
    cout << minElement(num1 , num2) << endl ; 

}