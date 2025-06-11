//  Polymorphism : 
// Overloading 
// Overloading Constructor

// #include<iostream>
// using namespace std;
// class Me{
//     public: 
//         string name;
//         int age;
//         float salary;
//         Me(){
//             name = "Default Name";
//             age  = 0;
//             salary = 0;
//         }
//         Me(string n){
//             name = n;
//         }
//         Me(int a){
//             age = a;
//         }
//         Me(float s){
//             salary = s;
//         }
//         void Display(){
//             cout<<"Name : "<<name<<endl;
//             cout<<"age  : "<<age<<endl;
//             cout<<"salary : "<<salary<<endl;
//         }  
// };
// int main(){
//     Me m,m1(12),m2(100.50f),m3("Setha");
//     m.Display();
//     m1.Display();
//     m2.Display();
//     m3.Display();   
// }


#include<iostream>
using namespace std;

class Calculate{
    private :   
        float num1,num2;
    public :
        // overloading function 
        void Cal(int num1,int num2){
            cout<<"Number 1 + Number 2 = "<<num1 + num2<<endl;
        }
        void Cal(float num1,float num2){
            cout<<"Number 1 - Number 2 = "<<num1-num2<<endl;
        }
        void Cal(double num1,double num2){
            cout<<"Number 1 * Number 2 = "<<num1*num2<<endl;
        }

        void Cal(long num1,long num2){
            cout<<"Number 1 / Number 2 = "<<num1/num2<<endl;
        }

};
int main(){
    int choose;
    Calculate obj;
    do{
        cout << "1. +"<<endl;
        cout << "2. -"<<endl;
        cout << "3. *"<<endl;
        cout << "4. /"<<endl;
        cout<<"choose option : ";cin>>choose;
        switch(choose){
            case 1 : {
                obj.Cal(20,20);
                break;
            }
            case 2 :{
                obj.Cal(20.5f,12.4f);
                break;
            }
        }
    }while(choose!=0);
}