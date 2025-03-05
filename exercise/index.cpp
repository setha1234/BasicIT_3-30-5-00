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
    do{
        cout<<"=====================[Choose an option]======================="<<endl;
        cout<<"1. YouTube"<<endl;
        cout<<"2. Facebook"<<endl;
        cout<<"3. Instagram"<<endl;
        cout<<"4. TikTok"<<endl;
        cout<<"5. Exit [0]"<<endl;
        cout<<"Choose an option: ";
        cin>>menu;

        switch(menu){
            case 0 : {
                cout<<"=====================[Exiting the program]======================="<<endl;
                break;
            }
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
                        }
                        case 1 : {
                            system("start https://www.youtube.com/watch?v=cvaIgq5j2Q8&list=RDcvaIgq5j2Q8&start_radio=1");
                            break;
                        }
                        case 2 :{
                            system("start https://www.youtube.com/watch?v=WEJcUm6fkC8");
                            break;
                        }
                        case 3 : {
                            system("start https://www.youtube.com/watch?v=1kRtTAEhJD0");
                            break;
                        }
                        default : {
                            cout<<"===========================[Invalid option]=============================="<<endl;
                        }
                    }
                }while(yt_content != 0);
                break;
            }




        }


    }while(menu != 0);





    return 0;
}