// #include<iostream>
// using namespace std;
// // syntax : single inheritance 
// /* 
//     class sub_class_name : access modifies base_class_name{}
// */
// // Base Class 
// class Father{
//     protected :
//         int money;
//         string address_house;
// }; 
// // Derived Class 
// class Son : public Father{
//     public :
//         void Input(){
//             cout<< "Enter your money         : ";cin>>money;
//             cout<< "Enter your address house : ";cin>>address_house;
//         }
// };
// class other{
//     public: 
//     void Input(){  
//         cout<<"Enter the money : ";cin>>money;
//         cout<<"Enter the address : ";cin>>address_house;
//     }
// };
// int main(){
//     Son son1;
//     son1.Input();
//     return 0;
// }


#include<iostream>
using namespace std;

class Employee{
    protected : // access 
        string name;
        float base_salary;
        int rated;
    public :
    // input from int main by parameter
        void SetEmployee(string n,float bs,int r){
            name = n;
            base_salary = bs;
            rated = r;
        }
        float CalRated(){
            if (rated == 5) return 0.3;
            else if (rated == 4) return 0.2;
            else if (rated == 3) return 0.1;
            else  return 0.0;  
        }
};
class BonusCal : public Employee{
    private : 
        float bonus, total;
    public :
        void Display(){
            bonus = base_salary * CalRated();
            total = base_salary + bonus;
            cout<<"Name         : "<<name<<endl;
            cout<<"Base Salary  : "<<base_salary<<endl;
            cout<<"Rated        : "<<rated<<endl;
            cout<<"Bonus        : "<<bonus<<endl;
            cout<<"Total        : "<<total<<endl;
        }
};


int main(){
    BonusCal obj[100];
    string username;
    float salary;
    int n,rate;

    cout<<"=============================================="<<endl;
    cout<<"Enter n size : ";cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Employee #"<<i+1<<endl;
        cout<<"Enter the name   : ";cin>>username;
        cout<<"Enter the salary : ";cin>>salary;
        cout<<"Enter the rate   : ";cin>>rate;
        obj[i].SetEmployee(username,salary,rate);
    }
    cout<<"==============================================="<<endl;
    for(int i=0;i<n;i++){
        obj[i].Display();
    }

    
    return 0;
}



