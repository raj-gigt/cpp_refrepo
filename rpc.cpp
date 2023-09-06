#include<iostream>
#include<time.h>
using namespace std;

int main(){
    int a = rand() % 3;
    cout<<"welcome to rock paper scissors"<<endl;
    cout<<"enter number of games u want to play best of with computer"<<endl;
    int games;
    cin>>games;
    int choice;
    float user_score, comp_score;
   for(int i=1;i<=games;i++){
    cout<<"enter 0 for rock 1 for paper 2 for scissors"<<endl;
    cin>>choice;
    switch(a){
        case 0:
         if(choice==0){
            cout<<"It was rock"<<endl;
            cout<<"u have drawn 0.5 points to both"<<endl;
            user_score=(user_score+0.5);
            comp_score=(comp_score+0.5);
         }
         else if(choice==1){
            cout<<"It was rock"<<endl;
            cout<<"congrats u won 1 point to you!!"<<endl;
            user_score=(user_score+1);
         }
         else if(choice==2){
            cout<<"It was rock"<<endl;
            cout<<"sorry u have lost 1 point to comp"<<endl;
            comp_score=(comp_score+1);
            }
         break;
        case 1:
         if(choice==0){
            cout<<"It was paper"<<endl;
            cout<<"sorry u have lost 1 point to comp"<<endl;
            comp_score=(comp_score+1);
         }
         else if(choice==1){
            cout<<"It was paper"<<endl;
            cout<<"u have drawn 0.5 points to both"<<endl;
            user_score=(user_score+0.5);
            comp_score=(comp_score+0.5);
         }
         else if(choice==2){
            cout<<"It was paper"<<endl;
            cout<<"congrats u won 1 point to you"<<endl;
            user_score=(user_score+1);
         }
         break;
         case 2:
         if(choice==0){
            cout<<"It was scissors"<<endl;
            cout<<"congrats u won 1 point to you"<<endl;
            user_score=(user_score+1);
         }
         else if(choice==1){
            cout<<"It was scissors"<<endl;
            cout<<"sorry u have lost 1 point to comp"<<endl;
            comp_score=(comp_score+1);
            
         }
         else if(choice==2){
            cout<<"It was scissors"<<endl;
            cout<<"u have drawn 0.5 points to both"<<endl;
            user_score=(user_score+0.5);
            comp_score=(comp_score+0.5);
         }
         break;
    }
    }
    cout<<"your score: "<<user_score<<" comp score: "<<comp_score<<endl;
    if(user_score<comp_score){
        cout<<"sorry u lost the game"<<endl;
    }
    else if(user_score==comp_score){
        cout<<"the game is drawn"<<endl;
    }
    else if(user_score>comp_score){
        cout<<"congrats u have won the game"<<endl;
    }
    return 0;
}