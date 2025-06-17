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


// #include<iostream>
// using namespace std;

// class Calculate{
//     private :   
//         float num1,num2;
//     public :
//         // overloading function 
//         void Cal(int num1,int num2){
//             cout<<"Number 1 + Number 2 = "<<num1 + num2<<endl;
//         }
//         void Cal(float num1,float num2){
//             cout<<"Number 1 - Number 2 = "<<num1-num2<<endl;
//         }
//         void Cal(double num1,double num2){
//             cout<<"Number 1 * Number 2 = "<<num1*num2<<endl;
//         }

//         void Cal(long num1,long num2){
//             cout<<"Number 1 / Number 2 = "<<num1/num2<<endl;
//         }

// };
// int main(){
//     int choose;
//     Calculate obj;
//     do{
//         cout << "1. +"<<endl;
//         cout << "2. -"<<endl;
//         cout << "3. *"<<endl;
//         cout << "4. /"<<endl;
//         cout<<"choose option : ";cin>>choose;
//         switch(choose){
//             case 1 : {
//                 obj.Cal(20,20);
//                 break;
//             }
//             case 2 :{
//                 obj.Cal(20.5f,12.4f);
//                 break;
//             }
//             case 3 :{
//                 obj.Cal(10.0,5.0);
//                 break;
//             }
//             case 4 :{
//                 obj.Cal(100L,5L);
//                 break;
//             }
//         }
//     }while(choose!=0);
// }



//  overloading operator

// #include<iostream>
// using namespace std;
// class A{
//     private : 
//         int a,b;
//     public :
//         void operator +(){
//             a-=10;
//             // a = a - 10
//         }
//         // +, - * ++ -- ** 
//         void operator -(){
//             a+=10;
//         }
//         void operator *(){
//             a*=10;
//         }
//         void Display(){
//             cout<<"a = "<<a<<endl;
//         }
// };

// int main(){
//     A a,b; // a = 0
//     +a; // a = -10
//     -a; // a = 10
//     -b; //
//     a.Display(); // a = 0
//     b.Display();
//     return 0;
// }

// static blinding - Compile-Time Polymorphism : 
// overloading - the same name but deferent parameter
// dynamic blinding - Runtime Polymorphism : 

#include<iostream>
using namespace std;

// Book-library
class Hero{
    public :
        virtual void Skill1(){
            cout<<"This is a skill 1"<<endl;
        }
        virtual void Skill2(){
            cout<<"This is a skill 2"<<endl;
        }
        virtual void Skill3(){
            cout<<"This is a skill 3"<<endl;
        }
};
class Nana:public Hero{
    public :
        void  Skill1(){
            cout<<"Stun"<<endl;
        }
        void Skill2(){
            cout<<"Throw Cat"<<endl;
        }
        void Skill3(){
            cout<<"Ultimate"<<endl;
        }
};
int main(){
    Nana h;
    h.Skill1();
}


