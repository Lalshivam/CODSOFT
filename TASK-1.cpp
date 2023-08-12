                        //TASK-1
                //NUMBER GUESSING GAME
#include <iostream>
#include <cstdlib>
using namespace std;
  
int main()
{
char ch;
ch='y';
while(ch=='y'){
int random_int=rand();    //this line will generate and store a random integer.
int guess;
while(guess!=random_int){

  cout<<"Make Your Guess:";
  cin>> guess;

  if(guess>random_int){
    cout<<"Your guess is too high!!\n";
  }
   else if(guess<random_int){
    cout<<"your guess is too Low!!\n";
  }
   
   else{
    cout<<"Correct Guess\n";
   }
}
cout<<"Want to play again(y/n): ";
cin>>ch;
}
    return 0;
}