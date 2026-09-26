#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
    srand(time(0));
    int secret=rand() % 50+1;

    int guess;

    for (int i=0;i<5;i++){
        cout<<"Enter your Guess:";
        cin>>guess;

        if(guess>secret){
            cout<<"Hint: Your guess is too high \n";
        }
        else if(guess<secret){
            cout<<"Hint: Your guess is too low \n";
        }
        else if(guess==secret){
            cout<<"Congratulations youwon the game....!";
            return 0;
        }
        else{
            cout<<"Invalid output";
        }
    }
    cout<<"Game over, the number was "<<secret<<endl;

}