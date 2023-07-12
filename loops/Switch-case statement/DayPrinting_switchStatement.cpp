# include<bits/stdc++.h>
using namespace std ; 

/*
Take the day no and print the corresponding day
for 1 print monday
for 2 print tuesday and so on for 7 print sunday
*/

int main(){

    int day ; 
    cin >> day ; 

    switch(day){
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3 :
            cout << "Wednesday" << endl;
            break;
        case 4 :
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6 :
            cout << "satruday" << endl;
            break;
        case 7 :
            cout << "Sunday" << endl;
            break;
        default : 
            cout << "invalid" << endl;
    }
    return 0 ;
}

// if we dont use the break here they print all the next statements 
// so thats why we use break