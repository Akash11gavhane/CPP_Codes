# include <bits/stdc++.h>
using namespace std ; 

/*
Take the age from the user and then decide accordingly 
1. if age < 18,
    print -> not eligible for job
2. if age >= 18 and age<= 54
    print -> "eligible for job"
3. if age >= 53 and age <= 57
    print -> "retirement soon"
4. if age > 57
    print-> "retirement time"
*/
int main(){

    int age ; 
    cin >> age ; 

    if (age < 18){
        cout << "not eligible for job" ; 
    }
    else if (age >= 18 && age <= 52)
    {
        cout << "you are eligible to work";
    }
    else if (age >= 53 && age <= 57)
    {
        /* code */
        cout << "retirement soon" ;
    }
    else if (age > 57)
    {
        cout << "retirement time";
    }
    
    return 0 ; 
    
}