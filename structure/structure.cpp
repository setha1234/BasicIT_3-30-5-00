// #include<iostream>
// using namespace std;

// struct Person{
//     // Data members
//     string name;
//     int age;
//     float height;
// };
// int main(){
    
//     // create a object of Person structure
//     struct Person sl_ke,obj1,obj2;
//     cout<<"Enter name: ";
//     getline(cin,sl_ke.name);
//     cout<<"Enter age: ";
//     cin>>sl_ke.age;
//     cout<<"Enter height: ";
//     cin>>sl_ke.height;

//     cout<<"Name: ";cin>>obj1.name;

//     return 0;
// }

#include<iostream>
#include<iomanip>
using namespace std;   
struct Library{
    // Data members
    string  book_name[100],author_name[100],book_type[100],book_public[100],book_viral[100],search_by_name,q_book;
    int     book_id[100],book_qty[100],book_issued[100],size_book,i,search_by_id,update_book,qty_issued,answer_borrow = 0,delete_book,j;
    float   book_price[100];
    bool    check;
};

void AddBook(Library &lib){
    cout<<"\t\t\t====================================================="<<endl;
    cout<<"\t\t\t                    Add Book                         "<<endl;
    cout<<"\t\t\t====================================================="<<endl;	
    cout<<"Enter the number of books to add: ";
    cin>>lib.size_book;
    lib.i=0;// start loop
    while(lib.i<lib.size_book){ // condition loop
        cout<<"Enter book ID : ";cin>>lib.book_id[lib.i];
        cout<<"Enter book name : ";cin.ignore();getline(cin,lib.book_name[lib.i]);
        cout<<"Enter author name : ";getline(cin,lib.author_name[lib.i]);
        cout<<"Enter book type : ";getline(cin,lib.book_type[lib.i]);   
        cout<<"Enter book publisher : ";getline(cin,lib.book_public[lib.i]);
        cout<<"Enter book viral : ";getline(cin,lib.book_viral[lib.i]);
        cout<<"Enter book price : ";cin>>lib.book_price[lib.i];
        cout<<"Enter book quantity : ";cin>>lib.book_qty[lib.i];
        lib.i++;// step loop
        cout<<"Book added successfully!\n";
    }
}

void Display_Book(Library &lib){
    cout<<"\t\t\t====================================================="<<endl;
    cout<<"\t\t\t                    Display Book                     "<<endl;
    cout<<"\t\t\t====================================================="<<endl;	
    cout<<"ID"
        <<setw(12)<<"Name"
        <<setw(12)<<"Author"
        <<setw(12)<<"Type"
        <<setw(12)<<"Publisher"
        <<setw(12)<<"Viral"
        <<setw(12)<<"Price"
        <<setw(12)<<"Quantity"
        <<setw(12)<<"Issued"<<endl;
        cout<<"---------------------------------------------------------------------------------------------------"<<endl; 
    for(int i=0;i<lib.size_book;i++){
        cout<<lib.book_id[i]
        <<setw(12)<<lib.book_name[i]
        <<setw(12)<<lib.author_name[i]
        <<setw(12)<<lib.book_type[i]
        <<setw(12)<<lib.book_public[i]
        <<setw(12)<<lib.book_viral[i]
        <<setw(12)<<lib.book_price[i]
        <<setw(12)<<lib.book_qty[i]
        <<setw(12)<<lib.book_issued[i]<<endl;
        cout<<"---------------------------------------------------------------------------------------------------"<<endl; 
    }

}

void Search_Book(Library &lib){
    int choose;
    do{
        cout<<"\t\t\t====================================================="<<endl;
        cout<<"\t\t\t                    Search Book                      "<<endl;
        cout<<"\t\t\t====================================================="<<endl;
        cout<<"\t\t\t| 1. Search By Id."<<endl;
        cout<<"\t\t\t| 2. Search By Name."<<endl;
        cout<<"\t\t\t| 0. Go Back to Menu."<<endl;
        cout<<"\t\t\t| => Enter your choice : ";cin>>choose;
        switch(choose){
            case 1 : {
                cout<<"Enter book ID to search: ";cin>>lib.search_by_id;
                for(lib.i=0;lib.i<lib.size_book;lib.i++){
                    if(lib.book_id[lib.i]==lib.search_by_id){
                        cout<<"Book ID: "<<lib.book_id[lib.i]<<endl;
                        cout<<"Book Name: "<<lib.book_name[lib.i]<<endl;
                        cout<<"Author Name: "<<lib.author_name[lib.i]<<endl;
                        cout<<"Book Type: "<<lib.book_type[lib.i]<<endl;
                        cout<<"Book Publisher: "<<lib.book_public[lib.i]<<endl;
                        cout<<"Book Viral: "<<lib.book_viral[lib.i]<<endl;
                        cout<<"Book Price: "<<lib.book_price[lib.i]<<endl;
                        cout<<"Book Quantity: "<<lib.book_qty[lib.i]<<endl;
                    }
                }
                break;
            }
            case 2 : {
                cout<<"Enter book name to search: ";cin.ignore();getline(cin,lib.search_by_name);
                for(lib.i=0;lib.i<lib.size_book;lib.i++){
                    if(lib.search_by_name == lib.book_name[lib.i]){
                        cout<<"Book ID: "<<lib.book_id[lib.i]<<endl;
                        cout<<"Book Name: "<<lib.book_name[lib.i]<<endl;
                        cout<<"Author Name: "<<lib.author_name[lib.i]<<endl;
                        cout<<"Book Type: "<<lib.book_type[lib.i]<<endl;
                        cout<<"Book Publisher: "<<lib.book_public[lib.i]<<endl;
                        cout<<"Book Viral: "<<lib.book_viral[lib.i]<<endl;
                        cout<<"Book Price: "<<lib.book_price[lib.i]<<endl;
                        cout<<"Book Quantity: "<<lib.book_qty[lib.i]<<endl;
                        cout<<"Book Issued: "<<lib.book_issued[lib.i]<<endl;
                    }
                }
                break;
            }
        }
    

    }while(choose!=0);
}

void Update_Book(Library &lib){
    lib.check=false;
    cout<<"Enter Book ID to update : ";cin>>lib.update_book;
    for(lib.i=0;lib.i<lib.size_book;lib.i++){
        if(lib.update_book==lib.book_id[lib.i]){
            cout<<"Book ID : "<<lib.book_id[lib.i]<<endl;
            cout<<"Enter new book name : ";cin.ignore();getline(cin,lib.book_name[lib.i]);
            cout<<"Enter new author name : ";getline(cin,lib.author_name[lib.i]);
            cout<<"Enter new book type : ";getline(cin,lib.book_type[lib.i]);   
            cout<<"Enter new book publisher : ";getline(cin,lib.book_public[lib.i]);
            cout<<"Enter new book viral : ";getline(cin,lib.book_viral[lib.i]);
            cout<<"Enter new book price : ";cin>>lib.book_price[lib.i];
            cout<<"Enter new book quantity : ";cin>>lib.book_qty[lib.i];
            lib.check=true;
            cout<<"Book updated successfully!\n";
        }
    }
    if(!lib.check){
        cout<<"Book unfind!\n";
    }
}
void Delate_Book(Library &lib){
    cout<<"Enter ID To Delate Book:";cin>>lib.delete_book;
    for(lib.i=0;lib.i<lib.size_book;lib.i++){
        if(lib.book_id[lib.i]==lib.delete_book){
            for(lib.j=lib.i;lib.j<lib.size_book-1;lib.j++){
                lib.book_id[lib.j]=lib.book_id[lib.j+1];
                lib.book_name[lib.j]=lib.book_name[lib.j+1];
                lib.author_name[lib.j]=lib.author_name[lib.j+1];
                lib.book_type[lib.j]=lib.book_type[lib.j+1];
                lib.book_public[lib.j]=lib.book_public[lib.j+1];
                lib.book_viral[lib.j]=lib.book_viral[lib.j+1];
                lib.book_price[lib.j]=lib.book_price[lib.j+1];
                lib.book_qty[lib.j]=lib.book_qty[lib.j+1];
                lib.book_issued[lib.j]=lib.book_issued[lib.j+1];
            }
        }
        lib.size_book--;
    }
}

void Issued_Book(Library &lib){
    cout<<"What you want ot borrow?"<<endl;
    cout<<"Enter Title of Book for borrow : ";
    cin>>lib.q_book;
    for(lib.i=0;lib.i<lib.size_book;lib.i++){
        if(lib.q_book == lib.book_name[lib.i]){
            cout<<"How many for borrow the book";cin>>lib.answer_borrow;
            if(lib.answer_borrow>0 && lib.answer_borrow<=lib.book_qty[lib.i]){
                cout<<"Issued Successfully!"<<endl;
                lib.book_issued[lib.i] += lib.answer_borrow;
            }else{
                cout<<"Invalid Borrow!!!"<<endl;
            }
            
        }
    }
}

void Return_Book(Library &lib){
    string r_book;
    int r_b;
    lib.check = false;
    cout<<"Enter name book : ";cin>>r_book;
    for(lib.i=0;lib.i<lib.size_book;lib.i++){
        if(r_book == lib.book_name[lib.i]){
            cout<<"Input Return book : ";cin>>r_b;
            lib.book_issued[lib.i]-=r_b;// b=b-r_b;
            cout<<"Return is Successfully!!"<<endl;
            lib.check = true;
        }
    }

    if(!lib.check){
        cout<<"Not Complate For Return!!"<<endl;
    }

}

int main(){
    Library books;
    int choice;
    do{

        cout<<"\n\n\t\t\tLibrary Management System\n";
        cout<<"\t\t\t-------------------------\n";
        cout<<"1. Add Book\n";
        cout<<"2. Display Book\n";
        cout<<"3. Search Book\n";
        cout<<"4. Update Book\n";
        cout<<"5. Delete Book\n";
        cout<<"6. Issue Book\n";
        cout<<"7. Return Book\n";
        cout<<"0. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        switch(choice){ 
            case 0: {
                cout<<"Exiting the program...\n";
                break;
            }
            case 1 : {
                AddBook(books);
                break;
            }
            case 2 : {
                Display_Book(books);
                break;
            }
            case 3 : {
                Search_Book(books);
                break;
            }
            case 4 : {
                Update_Book(books);
                break;
            }
            case 5 : {
                Delate_Book(books);
                break;
            }
            case 6 :{
               Issued_Book(books);
               break;
            }
            case 7 : {
                Return_Book(books);
                break;
            }
        }


    }while(choice!=0);
    return 0;
}