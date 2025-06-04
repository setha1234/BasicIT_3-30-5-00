#include<iostream>
#include<iomanip>
using namespace std;
class Book{
	private : 
		// data member
		int id,qty;
		string title,public_book,author;
		float price;
	public : 
		// constructor 
		Book(){
			id = 0;
			title = "Unknow";
			public_book = "Unknow";
			author = "UnKnow";
			qty = 0;
			price = 0;
		}
		Book(int i,string t,string pu,string a,float p,int q){
			id = i;
			title = t;
			public_book = pu;
			author = a;
			price = p;
			qty = q;
		}
		// method 
		string getTitle(){
			return title;
		}
		int getId(){
			return id;
		}
		string getPub(){
			return public_book;
		}
		string getAut(){
			return author;
		}
		float getPri(){
			return price;
		}
		int getQty(){
			return qty;
		}
	
	
	
};
int main(){
	int choose,size_of_book;
	int id,qty;
	string name,author,public_book;
	float price;
	Book obj[100];
	Book Btmp;
	do{
		system("cls");
		cout<<"|==============================================================|"<<endl;
		cout<<"|                     Menu Option Book                         |"<<endl;
		cout<<"|==============================================================|"<<endl;
		cout<<"| 1. Create the detail book                                    |"<<endl;
		cout<<"| 2. Display all detail                                        |"<<endl;
		cout<<"| 3. Search the book                                           |"<<endl;
		cout<<"| 4. Delete the book                                           |"<<endl;
		cout<<"| 5. Update the Book                                           |"<<endl;
		cout<<"| 6. Add the book                                              |"<<endl;
		cout<<"| 7. Sort the Book                                             |"<<endl;
		cout<<"| 0. Exit                                                      |"<<endl;
		cout<<"|==============================================================|"<<endl;
		cout<<"| => Please choose the option : ";cin>>choose;
		switch(choose){
			case 0 : {
				cout<<"|==============================================================|"<<endl;
				cout<<"|                          Exit Program                        |"<<endl;
				cout<<"|==============================================================|"<<endl;
				system("pause");
				break;
			}
			case 1 : {
				cout<<"|==============================================================|"<<endl;
				cout<<"|                       Create the Book                        |"<<endl;
				cout<<"|==============================================================|"<<endl;
				cout<<"| => Enter size of book : ";cin>>size_of_book;
				// loop
				for(int i=0;i<size_of_book;i++){
					cout<<"|==============================================================|"<<endl;
					cout<<"| Enter book id          : ";cin>>id;
					cout<<"| Enter book title       : ";cin>>name;
					cout<<"| Enter book quantity    : ";cin>>qty;
					cout<<"| Enter book price       : ";cin>>price;
					cout<<"| Enter book author      : ";cin>>author;
					cout<<"| Enter book public date : ";cin>>public_book;
					obj[i] = Book(id,name,public_book,author,price,qty);
				}
				cout<<"|==============================================================|"<<endl;
				cout<<"|                    Create Book Complate                      |"<<endl;
				cout<<"|==============================================================|"<<endl;
				system("pause");
				break;
			}
			case 2 : {				
				cout<<"|==============================================================|"<<endl;
				cout<<"|                      Display All Book                        |"<<endl;
				cout<<"|==============================================================|"<<endl;
				cout<<"|  ID"<<setw(12)
				<<"Name"<<setw(12)
				<<"Author"<<setw(12)
				<<"Price"<<setw(12)
				<<"Qty"<<setw(12)
				<<"PDT |"<<endl;
					
				for(int i=0;i<size_of_book;i++){
					cout<<"|  "<<obj[i].getId()
					<<setw(12)<<obj[i].getTitle()
					<<setw(12)<<obj[i].getAut()
					<<setw(12)<<obj[i].getPri()
					<<setw(12)<<obj[i].getQty()
					<<setw(12)<<obj[i].getPub()<<" |"<<endl;
					cout<<"|--------------------------------------------------------------|"<<endl;
				}		
				system("pause");
				break;
			}
			case 3 : {
				system("cls");
				int chose;
				
				do{
					cout<<"|--------------------------------------------------------------|"<<endl;
					cout<<"| 1. Search by Title                                           |"<<endl;
					cout<<"| 2. Search by ID                                              |"<<endl;
					cout<<"| 0. Back to Menu                                              |"<<endl;
					cout<<"|--------------------------------------------------------------|"<<endl;
					cout<<"| => Enter option for search : ";cin>>chose;
					switch(chose){
						case 1 : {
							string search_name;
							cout<<"|--------------------------------------------------------------|"<<endl;
							cout<<"| Enter the tile for search : ";cin.ignore();getline(cin,search_name);
							for(int i=0;i<size_of_book;i++){
								if(search_name == obj[i].getTitle()){
									cout<<"|  ID"<<setw(12)
										<<"Name"<<setw(12)
										<<"Author"<<setw(12)
										<<"Price"<<setw(12)
										<<"Qty"<<setw(12)
								  		<<"PDT |"<<endl;
									cout<<"|  "<<obj[i].getId()
										<<setw(12)<<obj[i].getTitle()
										<<setw(12)<<obj[i].getAut()
										<<setw(12)<<obj[i].getPri()
										<<setw(12)<<obj[i].getQty()
										<<setw(12)<<obj[i].getPub()<<" |"<<endl;
									cout<<"|--------------------------------------------------------------|"<<endl;
								}
								
							}
							break;
						}
						case 2 : {
							int search_id;
							cout<<"|--------------------------------------------------------------|"<<endl;
							cout<<"| Enter the tile for search : ";cin>>search_id;
							for(int i=0;i<size_of_book;i++){
								if(search_id == obj[i].getId()){
									cout<<"|  ID"<<setw(12)
										<<"Name"<<setw(12)
										<<"Author"<<setw(12)
										<<"Price"<<setw(12)
										<<"Qty"<<setw(12)
								  		<<"PDT |"<<endl;
									cout<<"|  "<<obj[i].getId()
										<<setw(12)<<obj[i].getTitle()
										<<setw(12)<<obj[i].getAut()
										<<setw(12)<<obj[i].getPri()
										<<setw(12)<<obj[i].getQty()
										<<setw(12)<<obj[i].getPub()<<" |"<<endl;
									cout<<"|--------------------------------------------------------------|"<<endl;
								}
								
							}

							break;
						}
					}
				}while(chose!=0);
				
				
				break;
			}

			case 4 :{
				cout<<"|--------------------------------------------------------------|"<<endl;
				cout<<"|                        Delete Data                           |"<<endl;
				cout<<"|--------------------------------------------------------------|"<<endl;
				int delete_id;
				cout<<"| => please enter id for delete : ";cin>>delete_id;
				for(int i=0;i<size_of_book;i++){
					if(obj[i].getId()==delete_id){
						for(int j=i;j<size_of_book-1;j++){
							obj[j] = obj[j+1];
						}
						size_of_book--; // reduce the size of book
					}
				}

				break;
			}
			case 5 : {
				cout<<"|--------------------------------------------------------------|"<<endl;
				cout<<"|                 Update Detail of book                        |"<<endl;
				cout<<"|--------------------------------------------------------------|"<<endl;
				int update_id;
				cout<<"Enter id to update : ";cin>>update_id;
				for(int i=0;i<size_of_book;i++){
					if(update_id == obj[i].getId()){
						
						cout<<"Enter new id book : ";cin>>id;
						cout<<"Enter new title book : ";cin>>name;
						cout<<"Enter new qty book : ";cin>>qty;
						cout<<"Enter new public date : ";cin>>public_book;
						cout<<"Enter new author  : ";cin>>author;
						cout<<"Enter new price  : ";cin>>author;
						obj[i] = Book(id,name,public_book,author,price,qty);

					}
				}
				break;
			}
			case 6 :{
				int add_size;
				cout<<"|--------------------------------------------------------------|"<<endl;
				cout<<"|                       	Add the book                          |"<<endl;
				cout<<"|--------------------------------------------------------------|"<<endl;	
				cout<<"Enter Size to add book = "; cin>>add_size;
				for(int i=size_of_book;i<size_of_book+add_size;i++){
					cout<<"| Enter Book Id			= "; cin>>id;
					cout<<"| Enter Book Title 		= "; cin>>name;
					cout<<"| Enter Book Quantity    = "; cin>>qty;
					cout<<"| Enter Book Price 		= "; cin>>price;
					cout<<"| Enter Book Author      = "; cin>>author;
					cout<<"| Enter Book Public Data = "; cin>>public_book;
					obj[i] = Book(id,name,public_book,author,price,qty);
				}
				size_of_book+=add_size;

				break;
			}
			case 7:{
				int answer;
				bool check;
				check=false;
				cout<<"|--------------------------------------------------------------|"<<endl;
				cout<<"|                       	Add the book                          |"<<endl;
				cout<<"|--------------------------------------------------------------|"<<endl;
				cout<<"1.Sort BY ID[100-0][0-100]."<<endl;
				cout<<"2.Sort BY Title[A-Z][Z-A]"<<endl;
				cout<<"Enter Choose: ";cin>>choose;
				switch(choose){
					case 1 :{
						cout<<"1.Sort By ID[100-0]"<<endl;
						cout<<"2.Sort By ID[0-100]"<<endl;
						cout<<"Enter Choose : ";cin>>answer;
						if(answer==1){
							for(int i=0;i<size_of_book;i++){
								for(int j=i+1;j<size_of_book;j++){
									if(obj[i].getId()<obj[j].getId()){
										swap(obj[i],obj[j]);
									}
								}
							}
						}
						if(answer==2){
							for(int i=0;i<size_of_book;i++){
								for(int j=i+1;j<size_of_book;j++){
									if(obj[i].getId()>obj[j].getId()){
										swap(obj[i],obj[j]);
									}
								}
							}
						}
					}
					case 2 :{
						cout<<"| 1.[A-Z]"<<endl;
						cout<<"| 2.[Z-A]"<<endl;
						cout<<"| Please inter number  choosin:";cin>>answer;
						if(answer==1){
							for(int i=0;i<size_of_book;i++){
								for(int j=i+1;j<size_of_book;j++){
									if(obj[i].getTitle()>obj[j].getTitle()){
										swap(obj[i],obj[j]);
										check = true;
									}
								}
							}
							if(!check){
								cout<<"Sort not complate !"<<endl;
							}else{
								cout<<"Sort complate !"<<endl;
							}
						}
						if(answer==2){
							for(int i=0;i<size_of_book;i++){
								for(int j=i+1;j<size_of_book;j++){
									if(obj[i].getTitle()<obj[j].getTitle()){
										swap(obj[i],obj[j]);
										check = true;
									}
								}
							}
							if(!check){
								cout<<"Sort not complate !"<<endl;
							}else{
								cout<<"Sort complate !"<<endl;
							}
						}
					}

				}


			}
			default : {
				cout<<"|========================{Try Again}===========================|"<<endl;
				system("pause");
				break;
			}
		}
		
		
	}while(choose!=0);
	
	
	
	return 0;
}