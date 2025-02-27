
#include<iostream>
using namespace std;
int main(){
    string answer;

    cout<<"Do you love him?"<<endl;
    cout<<"Enter your answer :";cin>>answer;

    while(answer!="yes" && answer != "Yes" && answer != "okay"){
        cout<<"Please answer 'yes'.Do you love him or not?"<<endl;
        cout<<"Enter your answer :";cin>>answer;
    }
    cout<<"Him not like you!!"<<endl;



    return 0;   
}