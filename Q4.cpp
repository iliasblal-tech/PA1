#include <iostream>
#include <cstdlib>
using namespace std;


int main(){
    int player, bot;
    player = 4;
    while((player != 0)&& (player != 1) && (player != 2)){
        cout << "Choose Fire (0), Water(1), or Grass (2)"<< endl;
        cin >> player;
        if ((player != 0)&& (player != 1) && (player != 2))cout << "Choose among the otpions 0, 1, or 2!"<< endl;
    }
    bot = rand() % 3;
    cout << "Computer chooses:";
    if (bot==0) cout<<"Fire"<< endl;
    else if (bot==1) cout << "Water" << endl;
    else if (bot==2) cout << "Grass" << endl;
    if(player==bot)cout << "You tie!" <<endl;
    else if (((player==0)&&(bot==1))||((player==1)&&(bot==2))||((player==2)&&(bot==0)))cout << "You lose!" <<endl;
    else cout << "You win!" <<endl;






    return 0;
}