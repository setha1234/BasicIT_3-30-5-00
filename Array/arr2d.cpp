// *  ROWS COLUMNS

// *  DataType ArrName[ROWS][COLUMNS];

// Example : int arr[2][3];

/*
    int arr[2][3] = {
                        {1,2,3},
                        {4,5,6}
                    };

*/


// #include<iostream>
// using namespace std;
// int main(){
//     int arr[3][3];
//     // * Input Value 
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<"Enter value : ";cin>>arr[i][j];
//         }
//     }    
//     // * Output 
//     for(int i=0;i<3;i++){// Row
//         for(int j=0;j<3;j++){// Columns
//             cout<<arr[i][j]<<" ";
//         }
//     }
//     return 0;
// }


// * Create a Program for in Cinema 
// * Views Seat
// * Booked Seat
// * Remove Seat

#include<iostream>
using namespace std;
const int ROWS    = 10; // * constant is a variable that cannot be changed value
const int COLUMNS = 15;

void ViewSeat(char seat[ROWS][COLUMNS]){ 
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLUMNS;j++){
            cout<<seat[i][j]<<" ";
        }
        cout<<endl; 
    }
}
void BookSeat(char seat[ROWS][COLUMNS]){
    int row,column;
    cout<<"Enter Row : ";cin>>row;
    cout<<"Enter Column : ";cin>>column;
    if(row>=0 && row<ROWS && column>=0 && column<COLUMNS){
        if(seat[row][column]=='0'){
            seat[row][column]='X';
            cout<<"Seat Booked Successfully"<<endl;
        }else{
            cout<<"Seat Already Booked"<<endl;
        }
    }else{
        cout<<"Invalid Row or Column"<<endl;
    }
}
int main(){
    system("cls");
    char seat[ROWS][COLUMNS];
    int op;
    // * Initialize Seat to 0
    for(int i=0;i<ROWS;i++){
        for(int j=0;j<COLUMNS;j++){
            seat[i][j] = '0'; // * O = Available Seat
        }
    }
    do{
        cout<<"*************** [ Cinema Seat ] ***************"<<endl;
        cout<<"1. View Seat"<<endl;
        cout<<"2. Book Seat"<<endl;
        cout<<"3. Remove Seat"<<endl;
        cout<<"0. Exit"<<endl;
        cout<<"Enter your option : ";cin>>op;
        switch(op){
            case 0 : {
                cout<<"Exit"<<endl;
                break;
            }
            case 1 : {
                // Create a function for view seat
                ViewSeat(seat);
                break;
            }
            case 2 :{
                // Create a function for book seat
                BookSeat(seat);
                break;
            }
        }

    }while(op!=0);

    return 0;
}