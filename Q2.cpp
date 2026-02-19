#include <iostream>
using namespace std;

int main(){
    double bill, tax_rate, tip_opt, tippt_opt;
    tip_opt = 0;
    tippt_opt = 0;
    cout << "Enter the original bill amount:";
    cin >> bill; 
    cout << endl;
    cout << "Enter the tax rate %:";
    cin >> tax_rate; 
    cout << endl;
    while ((tip_opt != 1) && (tip_opt != 2) && (tip_opt != 3) && (tip_opt != 4)){
        cout << "Enter tip level (1=10%, 2=15%, 3=20%, 4=25%):";
        cin >> tip_opt; 
        cout << endl;
        if ((tip_opt != 1) && (tip_opt != 2) && (tip_opt != 3) && (tip_opt != 4)){
            cout << "Enter option 1, 2, 3, or 4!";
        }
    }
    while ((tippt_opt != 1) && (tippt_opt != 2)){
        cout << "Tip on post-tax amount? (1=yes, 2=no):";
        cin >> tippt_opt; 
        cout << endl;
        if ((tippt_opt != 1) && (tippt_opt != 2)){
            cout << "Enter option 1, or 2!";
        }
    }


    double pretip_bill, tt_tip, bil_tip, bill_tt;
    pretip_bill = bill *  ((tax_rate/100)+1);
    if(tip_opt == 1) tip_opt = 1.1;
    else if(tip_opt == 1) tip_opt = 1.15;
    else if(tip_opt == 1) tip_opt = 1.20;
    else tip_opt = 1.25;

    if(tippt_opt==1)  bil_tip=  (pretip_bill*tip_opt);
    else bil_tip=  (bill*tip_opt);


    bill_tt = bil_tip + pretip_bill;


    cout << "The total bill pre-tip is: $" << pretip_bill << endl;
    cout << "The total tip is: $" << bil_tip << endl;
    cout << "The total bill post-tip is: $" << bill_tt << endl;
    

    
    
    
    




    return 0;
}