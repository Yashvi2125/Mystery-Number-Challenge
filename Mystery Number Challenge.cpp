#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    srand(time(0)); //we have used 0 as a replacement to nullptr as its was unable to recognize nullptr
    int guess=rand()%100+1;
    int guessed;
    int attempts=0;
    cout<<"You are supposed to guess the number"<<endl<<"Guess any  number between 1 to 100"<<endl;
    do{
        cout<<"Enter any number:"<<endl;
        cin>>guessed;
        attempts++;
        if(guessed<guess){
            cout<<"OOPS! Your entered number is too low than the guessed number."<<endl;
        }
        else if(guessed>guess){
            cout<<"OHO! Your entered number is too high than the guessed number."<<endl;
        }
        else{
            cout<<"Congratulations! You have guessed the right number."<<endl;
        }
    }
    while(guessed!=guess);
    cout<<"You have guessed the right number in "<<attempts<<" attempts."<<endl;
    return 0;
}
