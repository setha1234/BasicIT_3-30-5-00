// constructor - 
/*
    default constructor
    constructor with parameter
*/


#include <iostream>
using namespace std;
class Crush{
    private : 
        string name;
        int id;
        float salary;
    public : 
        // default constructor
        Crush(){
            // body
            name = "N/A";
            id = 0;
            salary = 0.0;
        }
        // constructor with parameter
        Crush(int i,float s,string n){
            name = n;
            id  = i;
            salary = s;
        }
        string title;
        void display(){
            cout<<"Name : "<<name<<endl;
            cout<<"ID   : "<<id<<endl;
            cout<<"Salary : "<<salary<<endl;
            cout<<"Hello "<<name<<endl;
        }
};
int main(){
    Crush c1,c2(2,900,"Koko melon");
    c1.display();
    c2.display();
    return 0;
}