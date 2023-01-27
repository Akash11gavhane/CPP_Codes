#include <iostream>
using namespace std;

void update(int arr[] , int n) {
    cout<<" Inside the Array" << endl;
    // update the array
     arr[0] = 120;
    // printing the array

    for(int i=0; i<3; i++){
        cout << arr[i] << " " ;

    }
    cout << endl;

    cout << "outside the array" << endl;
}

int main(){

    int arr[3]={1,2,3};
    update(arr , 3);

    //printing the array

    cout << endl << "printing in main function " << endl;
    for (int i=0; i<3 ; i++){
         cout << arr[i] << " " ;
    }

    return 0;
}

// if we change array or update the array then the whole array is change it means 
//  the array inside main fountion is also change.