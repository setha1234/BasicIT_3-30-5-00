#include <iostream>
using namespace std;
void Swap(int *a, int *b){ // a = 5 b = 4
    int temp;
    temp = *a; // temp = 5
    *a = *b;    // a = 4
    *b = temp; // b = 5
    cout<<"Inside function : a = "<<*a<<", b = "<<*b<<endl;
}
int main(){
    int a,b;
    a = 5;
    b = 4;
    cout<<"Before swap: a = "<<a<<", b = "<<b<<endl;
    Swap(&a,&b);
    cout<<"After swap : a = "<<a<<", b = "<<b<<endl;
}