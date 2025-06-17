// #include<iostream>
// using namespace std;
// template<typename A>
// // A = float   
// A sum(A a, A b){
//     return a+b;
// }
// int main(){
//     int value1= 23,value2 = 234;
//     cout<<"Result : "<< sum(value1,value2)<<endl;
//     float value3 = 3.43,value4=2.35;
//     cout<<"Result 2 : "<<sum(value3,value4);
//     return 0;
// }




// #include<iostream>
// using namespace std;
// pass by value 
// void Swap(float a, float b){
//     float temp;
//     temp = a; // t = 10;
//     a = b;  //  a = 20;
//     b = temp;  // b = 10; 
//     cout<<"Inside the function : value a = "
//         <<a<<" value b = "
//         <<b<<endl;
// }
// int main(){
//     system("cls");
//     float a = 10,b = 20;
//     cout<<"Before function : value a = "<<a<<"value b = "<<b<<endl;
//     Swap(a,b);
//     cout<<"After function : value a = "<<a<<"value b = "<<b<<endl;
// }

// #include<iostream>
// using namespace std;
// // pass by reference
// void Swap(float &a, float &b){
//     float temp;
//     temp = a; // t = 10;
//     a = b;  //  a = 20;
//     b = temp;  // b = 10; 
//     cout<<"Inside the function : value a = " 
//         <<a<<" value b = "
//         <<b<<endl;
// }
// int main(){
//     system("cls");
//     float a = 10,b = 20;
//     cout<<"Before function : value a = "<<a<<" value b = "<<b<<endl;
//     Swap(a,b);
//     cout<<"After function : value a = "<<a<<" value b = "<<b<<endl;
// }

#include<iostream>
using namespace std;
// pass by pointer
template<typename T>
// * pointer
// & address
void Swap(T *a, T *b){

    cout<<"Before swap in function : value a = " 
        <<a<<" value b = "
        <<b<<endl;
    float temp;
    temp = *a; // t = 10;
    *a = *b;  //  a = 20;
    *b = temp;  // b = 10; 
    cout<<"Temp =  "<<temp<<endl;
    cout<<"Inside the function : value a = " 
        <<a<<" value b = "
        <<b<<endl;
}
int main(){
    system("cls");
    float a = 10,b = 20;
    cout<<"Before function : value a = "<<a<<" value b = "<<b<<endl;
    Swap(&a,&b);
    cout<<"After function : value a = "<<a<<" value b = "<<b<<endl;
}


