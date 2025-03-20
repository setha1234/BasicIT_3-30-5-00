// * Array 
// Create a program for store item
// Variable : code name price qty total payment discount tax;
// 1. Create
// 2. Display
// 3. Payment


#include<iostream>
#include<iomanip>
using namespace std;
// Global
// Declare Variable
int code[20],quantity[20],Size;
string name[20];
float price[20],total,discount,tax,payment;

void Input(){
	cout<<"Enter size for store item : ";cin>>Size;
	for (int i=0;i<Size;i++){
		cout<<"================================================"<<endl;
		cout<<"Enter code item     : ";cin>>code[i];
		cout<<"Enter name item     : ";cin>>name[i];
		cout<<"Enter price item    : ";cin>>price[i];
		cout<<"Enter quantity item : ";cin>>quantity[i];
	}
}
void Display(){
	// Header
	cout<<setw(4)<<"Code"
		<<setw(12)<<"Name"
		<<setw(12)<<"Price"
		<<setw(12)<<"Quantity"
		<<endl;
	cout<<"================================================"<<endl;
	for(int i=0;i<Size;i++){		
		cout<<setw(4)<<code[i]
			<<setw(12)<<name[i]
			<<setw(12)<<price[i]
			<<setw(12)<<quantity[i]
			<<endl;
		cout<<"------------------------------------------------"<<endl;
	}
	
}

float Total(){
	total = 0;	
	for(int i=0;i<Size;i++){
		total += price[i]*quantity[i]; 
	}
	return total;
}


float Tax(){
	total = Total();
	tax = 0;
	tax = total * 0.05;
	return tax;
}

float Discount(){
	total = Total();
	discount = (total > 1 && total <=100) ? 0.01 :
				(total > 100 && total <=200) ? 0.02 :
				(total > 200 && total <=300) ? 0.03 :
				(total > 300 && total <=400) ? 0.04 :
				(total > 400 && total <=500) ? 0.05 :
				(total > 500 && total <=600) ? 0.06 :
				(total > 600 && total <=700) ? 0.07 :
				(total > 700 && total <=800) ? 0.08 :
				(total > 800 && total <=900) ? 0.09 :
				(total > 900 && total <=1000) ? 0.10 :
				(total > 1000 ) ? 7.0  :	
				0;
	return discount;
}

float Payment(){
	total  = Total();
	discount = Discount();
	tax = Tax();
	payment = total + tax - (total * discount);
	return payment;
}

int main(){
	int option;
	do{
		cout<<"================================================"<<endl;
		cout<<"1. Create a item."<<endl;
		cout<<"2. Display all item."<<endl;
		cout<<"3. Payment."<<endl;
		cout<<"0. Exit"<<endl;
		cout<<"Choose an option :";cin>>option;
		switch (option){
			case 0 :{
				cout<<"Bye Bye !!!"<<endl;
				break;
			}
			case 1 : {
				Input();
				break;
			}
			case 2 : {
				Display();
				break;
			}
			case 3 :{
				cout<<"================================================"<<endl;
				cout<<"Total    : "<<Total()<<endl;
				cout<<"Tax      : "<<Tax()<<endl;
				cout<<"Discount : "<<Discount()<<endl;
				cout<<"Payment  : "<<Payment()<<endl;
				cout<<"================================================"<<endl;
				break;
			}
			default :{
				cout<<"Please try again!!"<<endl;
				break;
			}
		}
		
	}while(option!=0);
	
	
	return 0;
}
