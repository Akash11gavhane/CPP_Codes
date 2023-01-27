
// Get hello World output in diffrent languages **using if else.**

#include <iostream>
using namespace std;

int main() {

   char button;
   cout<<"Input A Character"<<endl;
   cin>>button;

   if(button=='a'){
       cout<<"Hello"<<endl;
   }
   else if(button=='b'){
       cout<<"Namaste"<<endl;
   }
   else if(button=='c'){
       cout<<"Salute"<<endl;
   }
   else if(button=='d'){
       cout<<"Hola"<<endl;
   }
   else if(button=='e'){
       cout<<"Ciao"<<endl;
   }

   else{
       cout<<"I Am still learning more"<<endl;
   }

    return 0;
}