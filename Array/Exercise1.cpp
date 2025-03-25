/*
Create a program for store coffee

Variable :

	Code_Coffee,
	Name_Coffee,
	Price_Coffee,
	Quantity_Coffee

- Menu
1. Create
2. Display
3. Search
4. Update
5. Delete
6. Insert/Add Coffee
7. Sort [name,id,price]
8. Exit

*/

#include<iostream>
#include<iomanip>
using namespace std;  
// Declare global variable
int 	Code[100],Quantity[10],Size_Coffee;
string 	Name[100];
float 	Price[100];

void CreateCoffee(){
	cout<<"\t\t\t====================================================="<<endl;
	cout<<"\t\t\t                    Create Coffee                    "<<endl;
	cout<<"\t\t\t====================================================="<<endl;	
	cout<<"\t\t\t => Enter size for stock coffee : ";cin>>Size_Coffee;	
	for(int i=0;i<Size_Coffee;i++){
		cout<<"\t\t\t====================================================="<<endl;
		cout<<"\t\t\t Enter Coffee Code     : ";cin>>Code[i];
		cout<<"\t\t\t Enter Coffee Name     : ";cin>>Name[i];
		cout<<"\t\t\t Enter Coffee Price    : ";cin>>Price[i];
		cout<<"\t\t\t Enter Coffee Quantity : ";cin>>Quantity[i];
	}
	cout<<"\t\t\t====================================================="<<endl;
	cout<<"\t\t\t                  Create Complate                    "<<endl;
	cout<<"\t\t\t====================================================="<<endl;	
}
void DisplayCoffee(){
	cout<<"\t\t\t====================================================="<<endl;
	cout<<"\t\t\t                 Display Coffee                      "<<endl;
	cout<<"\t\t\t====================================================="<<endl;
	cout<<"\t\t\t"  <<setw(12)<<"Code"
					<<setw(12)<<"Name"
					<<setw(12)<<"Price"
					<<setw(12)<<"Quantity"
					<<endl;
	cout<<"\t\t\t====================================================="<<endl;
	for(int i=0;i<Size_Coffee;i++){
		cout<<"\t\t\t"  <<setw(12)<<Code[i]
						<<setw(12)<<Name[i]
						<<setw(12)<<Price[i]
						<<setw(12)<<Quantity[i]
						<<endl;	
		cout<<"\t\t\t====================================================="<<endl;
	}
	
	
	
}
int main(){
	int option;
	do{
		cout<<"\t\t\t============================================"<<endl;
		cout<<"\t\t\t              Menu Option                   "<<endl;
		cout<<"\t\t\t============================================"<<endl;
		cout<<"\t\t\t[  1. Create Coffee to Stock."<<endl;
		cout<<"\t\t\t[  2. Display All Coffee from Stock."<<endl;
		cout<<"\t\t\t[  3. Search Coffee in Stock."<<endl;
		cout<<"\t\t\t[  4. Update Detail Coffee."<<endl;
		cout<<"\t\t\t[  5. Delete Coffee from Stock."<<endl;
		cout<<"\t\t\t[  6. Insert/Add Coffee to Stock."<<endl;
		cout<<"\t\t\t[  7. Sort Coffee."<<endl;
		cout<<"\t\t\t[  0. Eixt Program."<<endl;
		cout<<"\t\t\t============================================"<<endl;
		cout<<"\t\t\t[  => Choose option [0-7] : ";cin>>option;
		switch(option){
			case 0 : {
				cout<<"\t\t\t============================================"<<endl;
				cout<<"\t\t\t                Exit Program                "<<endl;
				cout<<"\t\t\t============================================"<<endl;
				break;
			}
			case 1 :{
				CreateCoffee();
				break;
			}
			case 2 :{
				DisplayCoffee();
				break;
			}
		}
		
	}while(option!=0);
}




