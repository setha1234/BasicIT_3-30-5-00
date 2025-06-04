#include<iostream>
using namespace std;
// array : // name[10] : 
// object array : obj[10] : obj * 10
class Person{
	private: 
		string name;
		int id;
		float salary;
		char gender;
	public : 
		void input(){
			cout<<"Enter your id : ";cin>>id;
			cout<<"Enter your name : ";cin>>name;
			cout<<"Enter your gender: ";cin>>gender;
			cout<<"Enter your salary : ";cin>>salary;
		}
		void Display(){
			cout<<"ID   : "<<id<<endl;
			cout<<"Name : "<<name<<endl;
			cout<<"Gender : "<<gender<<endl;
			cout<<"Salary : "<<salary<<endl;
		}
};
int main(){
	Person p[10];// object p = * 10
	// array : start 0
	cout<<"====================[Input]========================"<<endl;
	for(int i=0;i<10;i++){
		cout<<endl;
		p[i].input();
		system("pause");
	}
	cout<<"====================[output]========================"<<endl;	
	for(int i=0;i<10;i++){
		p[i].Display();
	}	
	return 0;
}
