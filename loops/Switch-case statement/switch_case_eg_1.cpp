
/* another way to implement say hello programme in diffrent languages */

/* switch case statement are substitute for long if else code 
    switch statement do the if else code smaller */



 #include <iostream>
 using namespace std;

int main(){

    char button;
    cout<<"enter the Character"<<endl;
    cin>>button;

    switch(button){

        case 'a':
        cout<<"hello"<<endl;
        break;

        case 'b':
        cout<<"Namaste"<<endl;
        break;

        case 'c':
        cout<<"salut"<<endl;
        break;

        case 'd':
        cout<<"hola"<<endl;
        break;

        case 'e':
        cout<<"ciao"<<endl;
        break;

        default :
        cout<<"I am still learning"<<endl;
        break;
    }

    return 0;
}