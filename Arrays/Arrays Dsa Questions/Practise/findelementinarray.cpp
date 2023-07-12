// linear search
// here we have to find a element or number in an array
// it find that element in linear direction because of that its problem of linear search
#include <iostream>
using namespace std;

bool search(int arr[], int size , int key){
    for (int i = 0; i < size; i++){
        if(arr[i] == key){
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[18]={5,9,2,7,6,4,7,2,4,5,2,6,4,11,8,54,6,12};
    cout<<"enter the element you want to find"<<endl;
    int key ;
    cin>>key;

    bool found = search(arr, 18 , key);
    if(found){
        cout<<"key is present"<<endl;
    }
    else{
        cout<<"key is not present"<<endl;
    }

    return 0;
}