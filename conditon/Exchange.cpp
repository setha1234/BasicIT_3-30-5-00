#include<iostream>
using namespace std;
int main(){
    system("cls");
    int op;
    float dollar,riel,exchange,baht,won,yen,yuan,euro,rupee,peso;
    again:
    cout<<"Choose your currency conversion option : "<<endl;
    cout<<"0. Exit Program"<<endl;
    cout<<"1. Exchange Dollar to Riel."<<endl;
    cout<<"2. Exchange Dollar to Baht."<<endl;
    cout<<"3. Exchange Dollar to Won."<<endl;
    cout<<"4. Exchange Dollar to Yen."<<endl;
    cout<<"5. Exchange Dollar to Yuan."<<endl;
    cout<<"6. Exchange Dollar to Euro."<<endl;
    cout<<"7. Exchange Dollar to Rupee."<<endl;
    cout<<"8. Exchange Dollar to Peso."<<endl;
    cout<<"Please enter currency an option :";
    cin>>op;

    if(op == 0){
        cout<<"==================Thanks for using our program==================="<<endl;
    }else if(op == 1){
        riel = 4000;
        cout<<"===================== Exchange Dollar to Riel ======================="<<endl;
        cout<<"You are choosing exchange Dollar to Riel."<<endl;
        cout<<"Please enter cost Dollar for exchange :";cin>>dollar;
        exchange = dollar * riel;
        cout<<"Cost Riel after exchange : "<<exchange<<endl;
        cout<<"====================================================================="<<endl;
        goto again;
    }else if(op == 2){
        baht = 33.06;
        cout<<"===================== Exchange Dollar to Baht ======================="<<endl;
        cout<<"You are choosing exchange Dollar to Baht."<<endl;
        cout<<"Please enter cost Dollar for exchange :";cin>>dollar;
        exchange = dollar * baht;
        cout<<"Cost Baht after exchange : "<<exchange<<endl;
        goto again;
    }else if(op == 3){
        won = 1404.54;
        cout<<"===================== Exchange Dollar to Won ======================="<<endl;
        cout<<"You are choosing exchange Dollar to Won."<<endl;
        cout<<"Please enter cost Dollar for exchange :";cin>>dollar;
        exchange = dollar * won;
        cout<<"Cost Won after exchange : "<<exchange<<endl;
        goto again;

    }else if(op == 4){
        yen = 150.18;
        cout<<"===================== Exchange Dollar to Yen ======================="<<endl;
        cout<<"You are choosing exchange Dollar to Yen."<<endl;
        cout<<"Please enter cost Dollar for exchange :";cin>>dollar;
        exchange = dollar * yen;
        cout<<"Cost Yen after exchange : "<<exchange<<endl;
        goto again;
    }else if(op == 5){

        yuan = 7.15;
        cout<<"===================== Exchange Dollar to Yuan ======================="<<endl;
        cout<<"You are choosing exchange Dollar to Yuan."<<endl;
        cout<<"Please enter cost Dollar for exchange :";cin>>dollar;
        exchange = dollar * yuan;
        cout<<"Cost Yuan after exchange : "<<exchange<<endl;
        goto again;
    }else if (op == 6){
        euro = 0.94;
        cout<<"===================== Exchange Dollar to Euro ======================="<<endl;
        cout<<"You are choosing exchange Dollar to Euro."<<endl;
        cout<<"Please enter cost Dollar for exchange :";cin>>dollar;
        exchange = dollar * euro;
        cout<<"Cost Euro after exchange : "<<exchange<<endl;
        goto again;
    }else if(op == 7){
        rupee = 278.20;
        cout<<"===================== Exchange Dollar to Rupee ======================="<<endl;
        cout<<"You are choosing exchange Dollar to Rupee."<<endl;
        cout<<"Please enter cost Dollar for exchange :";cin>>dollar;
        exchange = dollar * rupee;
        cout<<"Cost Rupee after exchange : "<<exchange<<endl;
        goto again;
    }else if(op == 8){
        peso = 57.79;
        cout<<"===================== Exchange Dollar to Peso ======================="<<endl;
        cout<<"You are choosing exchange Dollar to Peso."<<endl;
        cout<<"Please enter cost Dollar for exchange :";cin>>dollar;
        exchange = dollar * peso;
        cout<<"Cost Peso after exchange : "<<exchange<<endl;
        goto again;
    }else{
        cout<<"Invalid option. Please try again."<<endl;
        goto again;
    }


    return 0;
}