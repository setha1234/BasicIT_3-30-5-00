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
using namespace std;   
struct Library{
    // Data members
    string  book_name[100],author_name[100],book_type[100],book_public[100],book_viral[100];
    int     book_id[100],book_qty[100],book_issued[100],size_book,i;
    float   book_price[100];
};

void AddBook(Library &lib){
    cout<<"\t\t\t====================================================="<<endl;
    cout<<"\t\t\t                  Add Book                         "<<endl;
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
        cout<<"Enter book issued : ";cin>>lib.book_issued[lib.i];
        lib.i++;// step loop
        cout<<"Book added successfully!\n";
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
        }


    }while(choice!=0);
    return 0;
}