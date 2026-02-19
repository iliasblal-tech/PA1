#include <iostream>
using namespace std;


int main(){
    int n1_o, n2_o, r1, r2, count, mod, n1, n2;
    cout << "Enter two numbers between 0-100:"; 
    cin >> n1;
    cout << endl;
    cin >> n2;
    mod = 3;
    n1_o = n1;
    n2_o = n2;


    while((n1 != 0) || (n2 != 0)){
        if((n1 % mod) != (n2 % mod)) count++;
        n1 = n1/3;
        n2 = n2/3;
    }

    cout << "Hamming distance between "<< n1_o << "and " << n2_o << " when numbers are in ternary format is: " << count << endl ;

    





    return 0;
}