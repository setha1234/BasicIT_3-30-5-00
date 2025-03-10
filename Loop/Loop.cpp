// * Loop : have 3 special values in initialization(Start), condition(Stop) and increment/decrement (Step).
// * Loop have 3 is : For loop, While loop, DoWhile loop
/*
for loop :
syntax : for(initialization; condition; increment/decrement){
        code block
    }

while loop :
syntax :
        initialization;
        while(condition){
            code block
            increment/decrement statement;
        }

doWhile loop :
syntax :
        do{
            code block
        }while(condition);

*/
// example for loop :
/*
#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i <= 10; i++){
        cout << i << " ";
    }
    return 0;
}

*/
// example while loop :
/*
#include<iostream>
using namespace std;
int main(){
    int i = 0;
    while(i < 10){
    cout << i << " ";
        i++;
    }
    return 0;
}

*/
// example doWhile loop :
/*
#include<iostream>
using namespace std;

int main(){
    int i = 0;
    do{
        cout << i << " ";
        i++;
    }while(i < 10);
    return 0;
}

*/
// example goto label :
/*

#include<iostream>
using namespace std;

int main(){
    int i = 0;
    label1:
        cout << i << " ";
        i++;
        if(i < 10)
            goto label1;
    return 0;
}

*/

// example nest loop :

/*
#include<iostream>
using namespace std;

int main(){
    for(int i = 0; i < 5; i++){  // run 5 times
        for (int j= 0 ; j < 5; j++){ // run 5 times
            cout<<i<<"/i \t"<<j <<"/ j \t";
        }
        cout<<endl;
    }
    return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
    int row,column;

    cout<<"Enter the row :";
    cin>>row;
    cout<<"Enter the column :";
    cin>>column;

    for(int i = 1 ; i<=row;i++){
        for(int j = 1 ; j<=column;j++){
            cout<<"["<<i<<"]\t"<<"["<<j<<"]";
        }
        cout<<endl;
    }



    return 0;
}
*/


// #include<iostream>
// using namespace  std;
// int main()
// {
//     int start,end;
//     cout<<"Enter the number for start : ";
//     cin >>start;
//     cout<<"Enter the number for end : ";
//     cin >> end;

//     for (int i = start;i<= end;i++){
//         for(int j = 1 ; j<=10;j++){
//             cout<<i<<" * "<<j<<" = "<<i*j<<endl;
//         }
//         cout<<endl;
        
//     }
// } 



// calculate exercise with loop :
/*
#include <iostream>
using namespace std;

int main()
{
    int op;
    float num1, num2;
    do
    {

        cout << "===============================[Choose Options]======================================" << endl;
        cout << "1. Addition [+]" << endl;
        cout << "2. Subtraction [-]" << endl;
        cout << "3. Multiplication [*]" << endl;
        cout << "4. Division [/]" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> op;
        switch (op)
        {
            case 1:
            {
                cout << "===============================[Addition]======================================" << endl;
                cout << "Enter number 1 : ";
                cin >> num1;
                cout << "Enter number 2 : ";
                cin >> num2;
                cout << "Addition Result : " << num1 + num2 << endl;
                break;
            }
            case 2:
            {
                cout << "===============================[Subtraction]======================================" << endl;
                cout << "Enter number 1 : ";
                cin >> num1;
                cout << "Enter number 2 : ";
                cin >> num2;
                cout << "Subtraction Result : " << num1 - num2 << endl;
                break;
            }
            case 3:
            {
                cout << "===============================[Multiplication]======================================" << endl;
                cout << "Enter number 1 : ";
                cin >> num1;
                cout << "Enter number 2 : ";
                cin >> num2;
                cout << "Multiplication Result : " << num1 * num2 << endl;
                break;
            }
            case 4:
            {
                cout << "===============================[Division]======================================" << endl;
                cout << "Enter number 1 : ";
                cin >> num1;
                cout << "Enter number 2 : ";
                cin >> num2;
                if (num2 != 0)
                {
                    cout << "Division Result : " << num1 / num2 << endl;
                }
                else
                {
                    cout << "Error! Division by zero is not allowed." << endl;
                }
                break;
            }
            default:
            {
                cout << "===============================[Invalid Option]======================================" << endl;
                cout << "Invalid choice. Please try again." << endl;
                break;
            }
        }
    } while (op != 0);
}

*/
// exercise exchange amount dollar to ...
/*
#include<iostream>
using namespace std;
int main(){
    system("cls");
    int options;
    float dollar,riel,baht,won,yuan,yen,rupee,euro,peso,exchange;
    do{
        cout<<"=============================[Menu For Exchange]============================="<<endl;
        cout<<"1. Exchange Dollar to Riel."<<endl;
        cout<<"2. Exchange Dollar to Baht."<<endl;
        cout<<"3. Exchange Dollar to Won."<<endl;
        cout<<"4. Exchange Dollar to Yen."<<endl;
        cout<<"5. Exchange Dollar to Yuan."<<endl;
        cout<<"6. Exchange Dollar to Euro."<<endl;
        cout<<"7. Exchange Dollar to Rupee."<<endl;
        cout<<"8. Exchange Dollar to Peso."<<endl;
        cout<<"9. Exit ( 0 )"<<endl;
        cout<<"Please choosing an option : ";
        cin>>options;

        switch(options){
            case 0 : {
                cout<<"=============================[Exiting the program]============================="<<endl;
                break;
            }
            case 1 : {
                riel = 4000.00;
                cout<<"===============================[ You are select Dollar to Riel ]=============================="<<endl;
                cout<<"Please enter cost Dollar for exchange :";
                cin>>dollar;
                exchange = dollar * riel;
                cout<<"Cost Riel after exchange : "<<exchange<<endl;
                break;
            }
            case 2 : {
                baht = 35.06;
                cout<<"===============================[ You are select Dollar to Baht ]=============================="<<endl;
                cout<<"Please enter cost Dollar for exchange :";
                cin>>dollar;
                exchange = dollar * baht;
                cout<<"Cost Baht after exchange : "<<exchange<<endl;
                break;
            }
            case 3 : {
                won = 1404.54;
                cout<<"===============================[ You are select Dollar to Won ]=============================="<<endl;
                cout<<"Please enter cost Dollar for exchange :";
                cin>>dollar;
                exchange = dollar * won;
                cout<<"Cost Won after exchange : "<<exchange<<endl;
                break;
            }
            case 4 :{
                yen = 150.18;
                cout<<"===============================[ You are select Dollar to Yen ]=============================="<<endl;
                cout<<"Please enter cost Dollar for exchange :";
                cin>>dollar;
                exchange = dollar * yen;
                cout<<"Cost Yen after exchange : "<<exchange<<endl;
                break;
            }
            case 5 :{
                yuan = 7.15;
                cout<<"===============================[ You are select Dollar to Yuan ]=============================="<<endl;
                cout<<"Please enter cost Dollar for exchange :";
                cin>>dollar;
                exchange = dollar * yuan;
                cout<<"Cost Yuan after exchange : "<<exchange<<endl;
                break;
            }
            case 6 : {
                euro = 0.94;
                cout<<"===============================[ You are select Dollar to Euro ]=============================="<<endl;
                cout<<"Please enter cost Dollar for exchange :";
                cin>>dollar;
                exchange = dollar * euro;
                cout<<"Cost Euro after exchange : "<<exchange<<endl;
                break;

            }
            case 7 : {
                rupee = 278.20;
                cout<<"===============================[ You are select Dollar to Rupee ]=============================="<<endl;
                cout<<"Please enter cost Dollar for exchange :";
                cin>>dollar;
                exchange = dollar * rupee;
                cout<<"Cost Rupee after exchange : "<<exchange<<endl;
                break;
            }
            case 8 : {
                peso = 57.79;
                cout<<"===============================[ You are select Dollar to Peso ]=============================="<<endl;
                cout<<"Please enter cost Dollar for exchange :";
                cin>>dollar;
                exchange = dollar * peso;
                cout<<"Cost Peso after exchange : "<<exchange<<endl;
                break;
            }
            default : {
                cout<<"=============================[Invalid Option]=============================="<<endl;
                cout<<"Invalid choice. Please try again."<<endl;
                break;
            }
        }
        

    }while (options != 0);

    return 0;
}

*/
// creat a program for the user choosing 
// 1. YouTube
//    - song
//    - movie
//    - funny
// 2. Facebook
//    - video
//    - photo
//    - story
// 3. Instagram
// 4. TikTok
// 5. Exit

// system("start link"); // open link in browser

#include <iostream>
using namespace std;
int main(){
    system("cls");
    int menu,yt_content;
    // start do-while loop
    do{
        cout<<"=====================[Choose an option]======================="<<endl;
        cout<<"1. YouTube"<<endl;
        cout<<"2. Facebook"<<endl;
        cout<<"3. Instagram"<<endl;
        cout<<"4. TikTok"<<endl;
        cout<<"5. Exit [0]"<<endl;
        cout<<"Choose an option: ";
        cin>>menu;
        // start switch
        switch(menu){
            case 0 : {
                cout<<"=====================[Exiting the program]======================="<<endl;
                break;
            }// end case 0
            case 1 :{
                do{
                    cout<<"===========================[YouTube]=============================="<<endl;
                    cout<<"1. Song"<<endl;
                    cout<<"2. Movie"<<endl;
                    cout<<"3. Funny"<<endl;
                    cout<<"0. Go Back"<<endl;
                    cout<<"Choose a content: ";
                    cin>>yt_content;
                    switch(yt_content){
                        case 0 : {
                            cout<<"===========================[Back to main menu]=============================="<<endl;
                            break;
                        }// end case 0
                        case 1 : {
                            system("start https://www.youtube.com/watch?v=cvaIgq5j2Q8&list=RDcvaIgq5j2Q8&start_radio=1");
                            break;
                        }// end case 1
                        case 2 :{
                            system("start https://www.youtube.com/watch?v=WEJcUm6fkC8");
                            break;
                        }// end case 2
                        case 3 : {
                            system("start https://www.youtube.com/watch?v=1kRtTAEhJD0");
                            break;
                        }// end case 3
                        default : {
                            cout<<"===========================[Invalid option]=============================="<<endl;
                        } // end default
                    }// end switch
                }while(yt_content != 0);// end loop content yt
                break;
            }// end case 1
            case 2 :{
                int fb_content;
                do{
                    cout<<"===========================[Facebook]=============================="<<endl;
                    cout<<"1. Video"<<endl;
                    cout<<"2. Photo"<<endl;
                    cout<<"3. Story"<<endl;
                    cout<<"0. Go Back"<<endl;
                    cout<<"Choose a content: ";
                    cin>>fb_content;
                    switch(fb_content){
                        case 0 : {
                            cout<<"===========================[Back to main menu]=============================="<<endl;
                            break;
                        }// end case 0
                        case 1 : {
                            system("start https://web.facebook.com/watch");
                            break;
                        }// end case 1
                        case 2 :{
                            system("start https://web.facebook.com/watch/search/?q=photo");
                            break;
                        }// end case 2
                        case 3 : {
                            system("start https://web.facebook.com/stories/105782524968133/UzpfSVNDOjEwMzIyMDQ0MjU0MzU5MTg=/?view_single=1");
                            break;
                        }// end case 3
                        default : {
                            cout<<"===========================[Invalid option]=============================="<<endl;
                        } // end default
                    }// end switch
                }while(fb_content != 0);// end loop content fb
                break;
            }
            case 3 : {
                system("start https://www.instagram.com/");
                break;
            }
            case 4 : {
                system("start https://www.tiktok.com/");
                break;
            }
            default : {
                cout<<"===========================[Invalid option]=============================="<<endl;
            }// end default
            




        }// end switch 


    }while(menu != 0);// end loop menu





    return 0;
}// end int main


