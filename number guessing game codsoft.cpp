#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main() {
    cout<< "\n\t\t______________________welcome to the number guessing game______________________________\n"<< endl;"
    cout<< "\n\t\t_________>> you will have to guess a number between 1 to 100.";
    cout<< "\n\t\t_________>> lets start playing and best of luck."<<endl;

    srand(time(0));
    int randnumber = ( rand() %100 + 1;
    
    cout<< "\n^^**you will have total 5 chances to guess the correct number.**^^\n";
    int chancesleft = 5;
    int playerinput;
    
    for (int i = 1; i < 5; i++)
    {
        cout<< "\n___>enter the number: ";
        cin>> playerinput;
        
        if(playerinput == randnumber)
        {
           cout<< "\ncongrats!!. you have successfully guessed the right number\n";
           cout<< "\nthanks for playing. have a nice day";
         break;
         }
         