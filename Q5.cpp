#include <iostream>
using namespace std;

int main(){
    char cryp;
    cout<<"Enter a letter:";
    cin>> cryp;
    if (!((cryp <= 122) && (cryp >= 97)) && !((cryp <= 90) && (cryp >= 65))){
        cout<<"YOU DID NOT ENTER A LETTER";
        return 0;
    }
    int offset = 'a' - 'A';
    if ((cryp <= 122) && (cryp >= 97))cryp = cryp - offset;
    if (cryp == 'Z') cryp = cryp - 26;
    cryp++;
    cout<<"CRYPTO:"<< cryp;
    return 0;
}