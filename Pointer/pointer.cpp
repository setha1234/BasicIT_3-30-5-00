// #include<iostream>
// using namespace std;
// int main(){
//     system("clear");
//     int n = 2;
//     int *ptr;
//     ptr = &n;
//     cout<<"Value of n : "<<n<<endl;
//     cout<<"Address of n : "<<&n<<endl;
//     cout<<"Value of ptr : "<<ptr<<endl;
//     cout<<"Address for ptr : "<<&ptr<<endl;
//     cout<<"Value of ptr have : "<<*ptr<<endl;


   
//     return 0;

// }

// Calculate by pointer + - * / %

// #include<iostream>
// using namespace std;
// int main(){
//     int a = 10,b = 20;
//     int *ptrA,*ptrB;
//     ptrA = &a;
//     ptrB = &b;

//     cout<<"Calculate simple\n";
//     cout<<a+b<<endl;
//     cout<<a-b<<endl;
//     cout<<a*b<<endl;
//     cout<<a/b<<endl;
//     cout<<a%b<<endl;

//     cout<<"Calculate by pointer\n";
//     cout<<*ptrA + *ptrB<<endl;
//     cout<<*ptrA - *ptrB<<endl;
//     cout<<(*ptrA)*(*ptrB)<<endl;
//     cout<<(*ptrA)/(*ptrB)<<endl;
//     cout<<(*ptrA)%(*ptrB)<<endl;

//     return 0;
// }


#include<iostream>
using namespace std;
void Swap(int *x,int *y){
    int theme;
    theme = *x; // theme = 101
    *x  = *y; // x = 201
    *y = theme;  // y = 101
    cout<<"Inside function Swap : "<<*x<<"  "<<*y<<endl;
}
int main(){
    system("clear");
    int a = 101,b = 201;
    cout<<"Before input to function Swap : a = "<<a<<" b = "<<b<<endl;
    Swap(&a,&b);
    // swap(a,b);
    cout<<"After output to function Swap : a = "<<a<<" b = "<<b<<endl;
    return 0;
}