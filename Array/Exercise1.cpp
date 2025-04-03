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

#define CYAN   "\033[36m"
#define PURPLE   "\033[35m"
#define BLUE   "\033[34m"
#define GREEN  "\033[32m"
#define RESET  "\033[0m"

using namespace std;  
// Declare global variable
int 	Code[100],Quantity[10],Size_Coffee;
string 	Name[100];
float 	Price[100];
bool    check; // bool - Boolean : Check Condition TRUE OR FALASE

void CreateCoffee(){
	cout<<CYAN <<"\t\t\t====================================================="<<endl;
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
	cout<<GREEN<<"\t\t\t====================================================="<<endl;
	cout<<"\t\t\t                  Create Complate                    "<<endl;
	cout<<"\t\t\t====================================================="<<RESET<<endl;	
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
void Search(){
	int search_id;
	string search_name;
	int options;
	cout<<"\t\t\t====================================================="<<endl;
	cout<<"\t\t\t                    Search Coffee                    "<<endl;
	cout<<"\t\t\t====================================================="<<endl;
	cout<<"\t\t\t[ 1. Search By ID."<<endl;
	cout<<"\t\t\t[ 2. Search By Name."<<endl;
	cout<<"\t\t\t[ => Please Enter What you want to choose :";cin>>options;
	switch (options){
		case 1 : {
			cout<<"\t\t\t Enter the ID of coffee for search : ";cin>>search_id;// 4
			for(int i=0;i<Size_Coffee;i++){
				if(Code[i]==search_id){
					cout<<"\t\t\t====================================================="<<endl;
					cout<<"\t\t\tCode     : "<<Code[i]<<endl;
					cout<<"\t\t\tName     : "<<Name[i]<<endl;
					cout<<"\t\t\tPrice    : "<<Price[i]<<endl;
					cout<<"\t\t\tQuantity : "<<Quantity[i]<<endl;
					cout<<"\t\t\t====================================================="<<endl;
				}
			}
			break;
		}
		case 2 : {
			cout<<"\t\t\t Enter the Name of coffee for search : ";cin>>search_name;
			for(int i=0;i<Size_Coffee;i++){
				if(Name[i]==search_name){
					cout<<"\t\t\t====================================================="<<endl;
					cout<<"\t\t\tCode     : "<<Code[i]<<endl;
					cout<<"\t\t\tName     : "<<Name[i]<<endl;
					cout<<"\t\t\tPrice    : "<<Price[i]<<endl;
					cout<<"\t\t\tQuantity : "<<Quantity[i]<<endl;
					cout<<"\t\t\t====================================================="<<endl;
				}
			}
			break;
		}
	}
}

void Update(){
	int update_coffee,new_id,new_quantity;
	string new_name;
	float new_price;
	cout<<"Enter id for update detail : ";cin>>update_coffee;// 2
	for(int i=0;i<Size_Coffee;i++){
		if(Code[i]==update_coffee){
			cout<<"Enter New Code     : ";cin>>new_id;
			cout<<"Enter New Name     : ";cin>>new_name;
			cout<<"Enter New Price    : ";cin>>new_price;
			cout<<"Enter New Quantity : ";cin>>new_quantity;
			Code[i] = new_id; 
			Name[i] = new_name;
			Price[i] = new_price;
			Quantity[i] = new_quantity;
		}
	}	
}

void Delete(){
	int Delete_Code;
	cout<<"Enter code for delete coffee : ";cin>>Delete_Code;
	for(int i=0;i<Size_Coffee;i++){ // Check find Code
		if(Delete_Code==Code[i]){ // Conditon for delete
			for(int j=i;j<Size_Coffee-1;j++){
				Code[j]     = Code[j+1];
				Name[j]     = Name[j+1];
				Price[j]    = Price[j+1];
				Quantity[j] = Quantity[j+1];
			}
			Size_Coffee--; 
			
		}	
	}	
}

void Add(){
	int add_size;
	cout<<"Enter size to add coffee : ";cin>>add_size;//4
	for(int i=Size_Coffee;i<Size_Coffee+add_size;i++){ // 3+4 = 7
		cout<<"\t\t\t====================================================="<<endl;
		cout<<"Enter Coffee Code     : ";cin>>Code[i];
		cout<<"Enter Coffee Name     : ";cin>>Name[i];
		cout<<"Enter Coffee Price    : ";cin>>Price[i];
		cout<<"Enter Coffee Quantity : ";cin>>Quantity[i];
	}
	Size_Coffee+=add_size; // Size Coffee = Size Coffee + Add Size
}

void Sort(){
	int options,answer;
	check = false; // Check False
	cout<<"1. Sort By Name.[A-Z] / [Z-A]"<<endl;
	cout<<"2. Sort By Id.[0-100]/[100-0]"<<endl;
	cout<<"3. Sort By Price.[1-$$$$][$$$$-1]"<<endl;
	cout<<"Please choose option : ";cin>>options;
	switch(options){
		case 1 : {
			cout<<"Choose for sort."<<endl;
			cout<<"1. [A-Z]"<<endl;
			cout<<"2. [Z-A]"<<endl;
			cout<<"Please inter number choosing : ";cin>>answer;
			if(answer==1){
				for(int i=0;i<Size_Coffee;i++){ // check data // 1 = S
					for(int j=i+1;j<Size_Coffee;j++){ // create a new data start i + 1  // 2 = A
						if(Name[i]>Name[j]){
							swap(Code[i],Code[j]);
							swap(Name[i],Name[j]);
							swap(Price[i],Price[j]);
							swap(Quantity[i],Quantity[j]);
							check = true;
						}
					}
				}
				if(!check){
					cout<<"Sort Not Complate!"<<endl;
				}else{
					cout<<"Sort Complate!!"<<endl;
				}	
			}
			if(answer==2){
				for(int i=0;i<Size_Coffee;i++){ // check data // 1 = S
					for(int j=i+1;j<Size_Coffee;j++){ // create a new data start i + 1  // 2 = A
						if(Name[i]<Name[j]){
							swap(Code[i],Code[j]);
							swap(Name[i],Name[j]);
							swap(Price[i],Price[j]);
							swap(Quantity[i],Quantity[j]);
							check = true;
						}
					}
				}
				if(!check){
					cout<<"Sort Not Complate!"<<endl;
				}else{
					cout<<"Sort Complate!!"<<endl;
				}	
			}
			break;
		}
		case 2 :{
			cout<<"Choose for sort."<<endl;
            cout<<"1. [0-100]"<<endl;
            cout<<"2. [100-0]"<<endl;
            cout<<"Please inter number choosing : ";cin>>answer;
            if(answer==1){
				for(int i=0;i<Size_Coffee;i++){ // check data // 1 = S
					for(int j=i+1;j<Size_Coffee;j++){ // create a new data start i + 1  // 2 = A
                        if(Code[i]>Code[j]){
                            swap(Code[i],Code[j]);
                            swap(Name[i],Name[j]);
                            swap(Price[i],Price[j]);
                            swap(Quantity[i],Quantity[j]);
                            check = true;
                        }
                    }
                }
				if(!check){
					cout<<"Sort Not Complate!"<<endl;
                }else{
					cout<<"Sort Complate!!"<<endl;
                }
			}
			if(answer==2){
				for(int i=0;i<Size_Coffee;i++){ // check data // 1 = S
                    for(int j=i+1;j<Size_Coffee;j++){ // create a new data start i + 1  // 2 = A
                        if(Code[i]<Code[j]){
                            swap(Code[i],Code[j]);
                            swap(Name[i],Name[j]);
                            swap(Price[i],Price[j]);
                            swap(Quantity[i],Quantity[j]);
                            check = true;
                        }
                    }
                }
                if(!check){
                    cout<<"Sort Not Complate!"<<endl;
                } else{
                    cout<<"Sort Complate!!"<<endl;
                }
			}	
			break;
		}
		case 3 :{
			cout<<"Choose for sort."<<endl;
            cout<<"1. [1-$$$$]"<<endl;
            cout<<"2. [$$$$-1]"<<endl;
            cout<<"Please inter number choosing : ";cin>>answer;
            if(answer==1){
				for(int i=0;i<Size_Coffee;i++){ // check data // 1 = S
					for(int j=i+1;j<Size_Coffee;j++){ // create a new data start i + 1  // 2 = A
                        if(Price[i]>Price[j]){
                            swap(Code[i],Code[j]);
                            swap(Name[i],Name[j]);
                            swap(Price[i],Price[j]);
                            swap(Quantity[i],Quantity[j]);
                            check = true;
                        }
                    }
                }
                if(!check){
					cout<<"Sort Not Complate!"<<endl;
                } else{
                    cout<<"Sort Complate!!"<<endl;
                }
            }
			if(answer==2){
				for(int i=0;i<Size_Coffee;i++){ // check data // 1 = S
                    for(int j=i+1;j<Size_Coffee;j++){ // create a new data start i + 1  // 2 = A
                        if(Price[i]<Price[j]){
                            swap(Code[i],Code[j]);
                            swap(Name[i],Name[j]);
                            swap(Price[i],Price[j]);
                            swap(Quantity[i],Quantity[j]);
                            check = true;
                        }
                    }
                }
                if(!check){
                    cout<<"Sort Not Complate!"<<endl;
                } else{
                    cout<<"Sort Complate!!"<<endl;
                }
            }    
			break;
		}
	}
	
	
}

int main(){
	int option;
	do{
		system("cls");
		cout<< PURPLE <<"\t\t\t====================================================="<<endl;
		cout<<"\t\t\t                    Menu Option                      "<<endl;
		cout<<"\t\t\t====================================================="<<endl;
		cout<<"\t\t\t[  1. Create Coffee to Stock."<<endl;
		cout<<"\t\t\t[  2. Display All Coffee from Stock."<<endl;
		cout<<"\t\t\t[  3. Search Coffee in Stock."<<endl;
		cout<<"\t\t\t[  4. Update Detail Coffee."<<endl;
		cout<<"\t\t\t[  5. Delete Coffee from Stock."<<endl;
		cout<<"\t\t\t[  6. Insert/Add Coffee to Stock."<<endl;
		cout<<"\t\t\t[  7. Sort Coffee."<<endl;
		cout<<"\t\t\t[  0. Eixt Program."<<endl;
		cout<<"\t\t\t====================================================="<<endl;
		cout<<"\t\t\t[  => Choose option [0-7] : ";cin>>option;
		switch(option){
			case 0 : {
				cout<<"\t\t\t====================================================="<<endl;
				cout<<"\t\t\t                      Exit Program                   "<<endl;
				cout<<"\t\t\t====================================================="<<endl;
				
				break;
			}
			case 1 :{
				CreateCoffee();
				system("pause");
				break;
			}
			case 2 :{
				DisplayCoffee();
				system("pause");
				break;
			}
			case 3 :{
				Search();
				system("pause");
				break;
			}
			case 4 : {
				Update();
				system("pause");
				break;
			}
			case 5 :{
				Delete();
				system("pause");
				break;
			}
			case 6 :{
				Add();
				break;
			}
			case 7 : {
				Sort();
				break;
			}
				
		}
		
	}while(option!=0);
}




