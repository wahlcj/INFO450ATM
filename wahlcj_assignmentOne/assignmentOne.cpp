
#include <iostream>
using namespace std;

int main()
{
    char answer;
    int valueEntered;
    do
    {
       
        cout<<"Please enter withdrawal ammount-->";
        cin>> valueEntered;
        
        if ((valueEntered < 1) || (valueEntered > 300))
        {
            cout<<"Please enter a valid ammount between $1.00 (min) and $300.00 (max)"<<endl;
        }
        else
        {
        int fifties = valueEntered / 50;
        if(fifties > 0)
        {
            cout<<"you have "<<fifties<<" $50.00 bills"<<endl;
        }
    
        int remainderFifties = valueEntered % 50;
        int twenties = remainderFifties / 20;
        if(twenties > 0)
        {
            cout<<"you have "<<twenties<<" $20.00 bills"<<endl;
        }
    
        int remainderTwenties = valueEntered % 20;
        int fives = remainderTwenties / 5;
        if(fives > 0)
        {
            cout<<"you have "<<fives<<" $5.00 bills"<<endl;
        }
    
        int ones = valueEntered % 5;
        if(ones > 0)
        {
            cout<<"you have "<<ones<<" $1.00 bills"<<endl;
        }
        }
        cout<<"\nAnother withdrawal? enter Y to continue"<<endl;
        cin>> answer;
        cout<< "\n";
                
    }while((answer == 'Y') || (answer == 'y'));
    
    return 0;
}
