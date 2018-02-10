
#include <iostream>
using namespace std;

int main()
{
    char answer;
    // used to restart loop
    int valueEntered;
    //the value that the user enters
    do
    {
       
        cout<<"Please enter withdrawal ammount-->";
        cin>> valueEntered;
        //takes user's entry as "valueEntered"
        
        if ((valueEntered < 1) || (valueEntered > 300)) //throws an error and restarts if invalid amount is entered
        {
            cout<<"Please enter a valid ammount between $1.00 (min) and $300.00 (max)"<<endl;
        }
        else //continues if not
        {
        int fifties = valueEntered / 50; //determines ammount of $50 bills
        if(fifties > 0) //ensures no message will read "0 $50's"
        {
            cout<<"you have "<<fifties<<" $50.00 bills"<<endl;
        }
    
        int remainderFifties = valueEntered % 50; //finds the remainder after all $50s have been dispensed
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
        } //end of else statement
        cout<<"\nAnother withdrawal? enter Y to continue"<<endl;
        cin>> answer;
        cout<< "\n";
        //asks user if they would wish to enter another value. after the if-else statement to ensure that whether or not the user enters a valid ammount, the loop will restart
        
    }while((answer == 'Y') || (answer == 'y'));
    //while answer is 'Y' or 'y', the program restarts
    
    return 0; //closes with exit code '0'
}
