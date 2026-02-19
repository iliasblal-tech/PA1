#include <iostream>
#include <cmath>
using namespace std;

int main(){


    double x1 , y1, x2, y2, x0, y0, d; // initializing the variables
    cin >> x1 >> y1 >> x2 >> y2 >> x0 >> y0; // puting the input the values into our variables
    
    double a, b, c, e;
    a = x2 - x1;
    b = y0 - y1;
    c = y2 - y1;
    e = x0 - x1;
    d = abs((a * b) - (c * e))/sqrt((a*a) + (c*c)); // computing the distance d
    cout << "The shortest distance for ("<< x1 <<","<< y1 <<") to the line composed of ("<<x2<<","<<y2<<") and ("<<x0<<","<<y0<<") is "<< d << endl;
    


    return 0;
}