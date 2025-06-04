#include<iostream>
using namespace std;
// pass by value; 
// void PassValue(int a){    
//     cout <<"Inside the function : "<<a+10<<endl;
// }
// int main(){
//     int a = 20;
//     cout<<"Before enter to function : "<<a<<endl;
//     PassValue(a);
//     cout<<"After outside from function : "<<a<<endl;
// }


// symbol & is address
void Reference(int &num){// parameter
    num = 5088;
     cout<<"Inside function : "<<num<<endl;
}
int main(){
    int a = 10;
    cout<<"Before enter to function :"<<a<<endl;
    Reference(a); // argument
    cout<<"After outside from function : "<<a<<endl;
}