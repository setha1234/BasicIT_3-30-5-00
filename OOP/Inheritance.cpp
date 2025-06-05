// // #include<iostream>
// // using namespace std;
// // // syntax : single inheritance 
// // /* 
// //     class sub_class_name : access modifies base_class_name{}
// // */
// // // Base Class 
// // class Father{
// //     protected :
// //         int money;
// //         string address_house;
// // }; 
// // // Derived Class 
// // class Son : public Father{
// //     public :
// //         void Input(){
// //             cout<< "Enter your money         : ";cin>>money;
// //             cout<< "Enter your address house : ";cin>>address_house;
// //         }
// // };
// // class other{
// //     public: 
// //     void Input(){  
// //         cout<<"Enter the money : ";cin>>money;
// //         cout<<"Enter the address : ";cin>>address_house;
// //     }
// // };
// // int main(){
// //     Son son1;
// //     son1.Input();
// //     return 0;
// // }


// #include<iostream>
// using namespace std;

// class Employee{
//     protected : // access 
//         string name;
//         float base_salary;
//         int rated;
//     public :
//     // input from int main by parameter
//         void SetEmployee(string n,float bs,int r){
//             name = n;
//             base_salary = bs;
//             rated = r;
//         }
//         float CalRated(){
//             if (rated == 5) return 0.3;
//             else if (rated == 4) return 0.2;
//             else if (rated == 3) return 0.1;
//             else  return 0.0;  
//         }
// };
// class BonusCal : public Employee{
//     private : 
//         float bonus, total;
//     public :
//         void Display(){
//             bonus = base_salary * CalRated();
//             total = base_salary + bonus;
//             cout<<"Name         : "<<name<<endl;
//             cout<<"Base Salary  : "<<base_salary<<endl;
//             cout<<"Rated        : "<<rated<<endl;
//             cout<<"Bonus        : "<<bonus<<endl;
//             cout<<"Total        : "<<total<<endl;
//         }
// };


// int main(){
//     BonusCal obj[100];
//     string username;
//     float salary;
//     int n,rate;

//     cout<<"=============================================="<<endl;
//     cout<<"Enter n size : ";cin>>n;
//     for(int i=0;i<n;i++){
//         cout<<"Employee #"<<i+1<<endl;
//         cout<<"Enter the name   : ";cin>>username;
//         cout<<"Enter the salary : ";cin>>salary;
//         cout<<"Enter the rate   : ";cin>>rate;
//         obj[i].SetEmployee(username,salary,rate);
//     }
//     cout<<"==============================================="<<endl;
//     for(int i=0;i<n;i++){
//         obj[i].Display();
//     }

    
//     return 0;
// }



// * Multiple Inheritance : 
// Syntax : 
/*
    class sub_class : access_modifies base_class_1 , am base_class_2{};
*/

// #include<iostream>
// using namespace std;
// class Base1{
//     protected :
//         string name;
//         string address;
// };
// class Base2{
//     protected :
//         float salary;


// };
// class Sub_Class:public Base1,public Base2{
//     public :
//         void Input(){
//             cout<<"Enter your name    : ";cin>>name;
//             cout<<"Enter your address : ";cin>>address;
//             cout<<"Enter your salary  : ";cin>>salary;
//         }
//         void Display(){
//             cout<<"Name    : "<<name<<endl;
//             cout<<"Address : "<<address<<endl;
//             cout<<"Salary  : "<<salary<<endl;
//         }
// };


// int main(){
//     Sub_Class obj;

//     obj.Input();
//     obj.Display();


//     return 0;
// }





#include<iostream>
using namespace std;
class Employee{
    protected :
        string name;
        float base_salary;
    public :
        void SetEmployeeInfo(){
            cout<<"Enter your name   : ";cin>>name;
            cout<<"Enter your salary : ";cin>>base_salary;
        }
        void ShowInfo(){
            cout<<"======================================="<<endl;
            cout<<"Name        : "<<name<<endl;
            cout<<"Base Salary : "<<base_salary<<endl;
        }
};

class Performance {
    protected :
        int rate;
    public :
        void SetRated(){
            cout<<"Enter the rating : ";cin>>rate;
        }
        float CalRated(){
            if(rate == 5) return 0.3;
            else if (rate == 4) return 0.2;
            else if(rate == 3)return 0.1;
            else return 0.0;

        }
};

class BonusEmployee : public Employee, public Performance{
    private :
        float total,bonus;
    public :
        void Display(){
            SetEmployeeInfo();
            SetRated();
            bonus = base_salary * CalRated();
            total = base_salary + bonus;
            ShowInfo();
            cout<<"Rated   : "<<rate<<endl;
            cout<<"Bonus   : "<<bonus<<endl;
            cout<<"Total   : "<<total<<endl;
        }
};
int main(){
    BonusEmployee emp;
    emp.Display();
    return 0;
}



