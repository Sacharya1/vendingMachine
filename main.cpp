#include <iostream>
#include <iomanip>
#include <bits/stdc++.h>

//Coin input
//data.out sends email if the stock drops down by 10%

using namespace std;
ifstream f("data.in");
int main()
{
int num=0;
int decision;
int stockA,stockB,stockC,stockD,stockE,stockF;
int stock;
string A,B,C,D,E,F;
string currencyType;
string aCurrencyType, bCurrencyType, cCurrencyType, dCurrencyType, eCurrencyType, fCurrencyType;
int aCurrencyTypeVal, bCurrencyTypeVal, cCurrencyTypeVal, dCurrencyTypeVal, eCurrencyTypeVal, fCurrencyTypeVal;


float Ac,Bc,Cc,Dc,Ec,Fc;

float pay;
float cost;
char item;
bool validItem;
f>>stockA>>stockB>>stockC>>stockD>>stockE>>stockF;
f>>A>>B>>C>>D>>E>>F;
f>>Ac>>Bc>>Cc>>Dc>>Ec>>Fc;
f>>currencyType;
f>>aCurrencyType>>bCurrencyType>>cCurrencyType>>dCurrencyType>>eCurrencyType>>fCurrencyType;
f>>aCurrencyTypeVal>>bCurrencyTypeVal>>cCurrencyTypeVal>>dCurrencyTypeVal>>eCurrencyTypeVal>>fCurrencyTypeVal;

cout<<fixed<<showpoint<<setprecision(2);

do{

    cout<<endl<<endl;
    cout<<"Food Menu"<<endl<<endl;
    cout<<"1:"<<A<<" "<<currencyType<<Ac<<endl;
    cout<<"2:"<<B<<" "<<currencyType<<Bc<<endl;
    cout<<"3:"<<C<<" "<<currencyType<<Cc<<endl;
    cout<<"4:"<<D<<" "<<currencyType<<Dc<<endl;
    cout<<"5:"<<E<<" "<<currencyType<<Ec<<endl;
    cout<<"6:"<<F<<" "<<currencyType<<Fc<<endl;

    cout<<"\n";
    cout<<"Enter 1-6 "<<endl;
    cout<<"\n";
    cout<<"Enter 7 to stop the machine"<<endl<<endl;
    cin>>item;
    switch(item)
    {
        case'1':
        case'2':
        case'3':
        case'4':
        case'5':
        case'6': validItem= true;
        break;
        default: validItem= false;
    }
    if(validItem==true){
        cout<<"How many items do you want?"<<endl;
        cin>>num;
    }

    switch(item)
    {

        case'1': cost=(float)num*Ac;
           cout<<"Total cost is: "<<currencyType<<cost<<endl;
           stock=stockA;
           break;

        case'2': cost=(float)num*Bc;
        cout<<"Total cost is: "<<currencyType<<cost<<endl;
           stock=stockB;

           break;

        case'3': cost=(float)num*Cc;
           cout<<"Total cost is: "<<currencyType<<cost<<endl;
            stock=stockC;

           break;

        case'4': cost=(float)num*Dc;
           cout<<"Total cost is: "<<currencyType<<cost<<endl;
            stock=stockD;

           break;
        case'5': cost=(float)num*Ec;
           cout<<"Total cost is: "<<currencyType<<cost<<endl;
            stock=stockE;

           break;
        case'6': cost=(float)num*Fc;
           cout<<"Total cost is: "<<currencyType<<cost<<endl;
            stock=stockF;

           break;

        case'7':
           cout<<"Good Bye!"<<endl;
           break;
        default: cout<<"Invalid";
        cout<< "Try again"<<endl;


    }
if(validItem==true){
        cout<<"\n";
        //cout<<"Accept""<<pennies, nickels, dimes, and quarters as well as 1 and 2 dollar bills."<<endl;
        cout<<"\n";
        cout<<"Enter the total payment"<<endl;
        cin>>pay;
        float x= pay-cost;
        int diff= stock-num;
        if(validItem==true){
        cout<<"If you want to proceed then press 1 and to cancel press any other number"<<endl;
        cin>>decision;


        if(decision==1){


        if(x<0){

            cout<<"Invalid money entry, try again"<<endl;
        }
        else if(x>0 && diff>=0)

        {   cout<<"\n";
            cout<<"Collect your food item from below"<<endl;
            cout<<"\n";
            cout<<"Return Change: "<<currencyType<<x<<endl;
            int change=x*100;
            int typeSix= change/fCurrencyTypeVal;
            int typeFive= change%fCurrencyTypeVal/eCurrencyTypeVal;
            int typeFour= change%fCurrencyTypeVal%eCurrencyTypeVal/dCurrencyTypeVal;
            int typeThree= change%fCurrencyTypeVal%eCurrencyTypeVal%dCurrencyTypeVal/cCurrencyTypeVal;
            int typeTwo= change%fCurrencyTypeVal%eCurrencyTypeVal%dCurrencyTypeVal%cCurrencyTypeVal/bCurrencyTypeVal;
            int typeOne= change%fCurrencyTypeVal%eCurrencyTypeVal%dCurrencyTypeVal%cCurrencyTypeVal%bCurrencyTypeVal/aCurrencyTypeVal;
            cout<<"Returning "<<typeSix<<" "<<fCurrencyType<<endl;
            cout<<"Returning "<<typeFive<<" "<<eCurrencyType<<endl;
            cout<<"Returning "<<typeFour<<" "<<dCurrencyType<<endl;
            cout<<"Returning "<<typeThree<<" "<<cCurrencyType<<endl;
            cout<<"Returning "<<typeTwo<<" "<<bCurrencyType<<endl;
            cout<<"Returning "<<typeOne<<" "<<aCurrencyType<<endl;}
            else {cout<<"Oops! we ran out of the product you are looking for, please try a different product"<<endl;
            num=0;}

        }
        else

        {   cout<<"\n";
            cout<<"Thank you"<<endl;
            cout<<"\n";
            cout<<"Return Change: "<<currencyType<<pay<<endl;
            int change=pay*100;
            int typeSix= change/fCurrencyTypeVal;
            int typeFive= change%fCurrencyTypeVal/eCurrencyTypeVal;
            int typeFour= change%fCurrencyTypeVal%eCurrencyTypeVal/dCurrencyTypeVal;
            int typeThree= change%fCurrencyTypeVal%eCurrencyTypeVal%dCurrencyTypeVal/cCurrencyTypeVal;
            int typeTwo= change%fCurrencyTypeVal%eCurrencyTypeVal%dCurrencyTypeVal%cCurrencyTypeVal/bCurrencyTypeVal;
            int typeOne= change%fCurrencyTypeVal%eCurrencyTypeVal%dCurrencyTypeVal%cCurrencyTypeVal%bCurrencyTypeVal/aCurrencyTypeVal;
            cout<<"Returning "<<typeSix<<" "<<fCurrencyType<<endl;
            cout<<"Returning "<<typeFive<<" "<<eCurrencyType<<endl;
            cout<<"Returning "<<typeFour<<" "<<dCurrencyType<<endl;
            cout<<"Returning "<<typeThree<<" "<<cCurrencyType<<endl;
            cout<<"Returning "<<typeTwo<<" "<<bCurrencyType<<endl;
            cout<<"Returning "<<typeOne<<" "<<aCurrencyType<<endl;





            }
    }


    }
int intItem= item- '0';
if (intItem==1) stockA=stockA-num;
else if (intItem==2) stockB=stockB-num;
else if (intItem==3) stockC=stockC-num;
else if (intItem==4) stockD=stockD-num;
else if (intItem==5) stockE=stockE-num;
else  stockF=stockF-num;



} while (item!='7');


    return 0;
}

