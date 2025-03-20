// #include<iostream>
// #include<iomanip>
// using namespace std;
// int code,quantity;
// string name;
// float price,discount;
// void Input(){
//     cout<<"Enter the code :";cin>>code;
//     cout<<"Enter the name :";cin>>name;
//     cout<<"Enter the quantity :";cin>>quantity;
//     cout<<"Enter the price :";cin>>price;
// }

// void Header(){
//     cout<<setw(12)<<"Code"
//         <<setw(16)<<"Name"
//         <<setw(12)<<"Price"
//         <<setw(12)<<"Quantity"<<endl;
//     cout<<"-----------------------------------------------------------------"<<endl;
 
// }
// void Output(){

//     cout<<setw(12)<<code
//         <<setw(16)<<name
//         <<setw(12)<<price
//         <<setw(12)<<quantity<<endl;
//     cout<<"-----------------------------------------------------------------"<<endl;
// }


// int main(){
//     system("cls");
//     Input();
//     Header();
//     for(int i=0;i<4;i++){
//         Output();
//     }


//     return 0;
// }

// Create a program for calculate find tax
//* id/code name price quantity discount tax total payment
//* 1.Create
//* 2.Display
//* 3.Exit
#include<iostream>
#include<iomanip>
using namespace std;
//* Declare global variables
int id,quantity;
float price,total,payment,tax,discount;
string name;

void CreateProduct(){
    cout<<"*************************************"<<endl;
    cout<<"Enter code :";cin>>id;
    cout<<"Enter name :";cin>>name;
    cout<<"Enter price :";cin>>price;
    cout<<"Enter quantity :";cin>>quantity;
    cout<<"*************************************"<<endl;
    total = price*quantity;
    discount =  (total > 1 && total <=100) ? 5 : // condition 1
                (total > 100 && total<=200) ? 10 :// condition 2
                (total > 200 && total <= 300) ? 15 :// condition 3
                (total > 300 && total <= 400) ? 20 : // condition 4
                (total > 400) ? 25 : // condition 5
                0; // condition else
    tax = total * 5/100;// ពន្ធ 5%
    payment = total + tax - (total*discount)/100;
}

void DisplayProduct(){
    cout<<"*************************************"<<endl;
    cout<<setw(12)<<"ID"
        <<setw(12)<<"Name"
        <<setw(12)<<"Price"
        <<setw(12)<<"Quantity"
        <<setw(12)<<"Discount"
        <<setw(12)<<"Tax"
        <<setw(12)<<"Total"
        <<setw(12)<<"Payment"
        <<endl;
    cout<<setw(12)<<id
        <<setw(12)<<name
        <<setw(12)<<price
        <<setw(12)<<quantity
        <<setw(12)<<discount
        <<setw(12)<<tax
        <<setw(12)<<total
        <<setw(12)<<payment
        <<endl;
}


int main()
{
    system("cls");
    int options;
    do{
        cout<<"*************************************"<<endl;
        cout<<"1.Create a new product"<<endl;
        cout<<"2.Display the product"<<endl;
        cout<<"3.Exit"<<endl;
        cout<<"Enter the options :";cin>>options;
        switch(options){
            case 1 :{
                // FunctionInput
                CreateProduct();
                break;
            }
            case 2 :{
                // FunctionDisplay
                DisplayProduct();
                break;
            }
            case 3 :{
                cout<<"Out Program"<<endl;
                break;
            }
            default :{
                cout<<"Please try again."<<endl;
                break;
            }
        }
    }while(options != 3);

    return 0;
}
