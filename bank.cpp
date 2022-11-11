#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int pin, amt, d, avai_balance, total=0;
    char l, a;
    int p,e;
   //p=to set pin,e=to exit,l=to take language,a=to take nature of account,d=withdraw amt,amt=deposit amt,total=after deposit,
    cout<<"Set PIN: ";
    cin>>p;
    int pin1 = p;
    cout << "\nLanguage: ";
    cin >> l;
    if (l == 'e' || l == 'E')
    {
        cout << "\nEnglish";
        cout << "\n\nNature of Account: ";
        cin >> a;
        if (a == 'c' || a == 'C')
        {
            cout << "\nCurrent A/C";
            cout << "\n\nEnter PIN: ";
            cin >> pin;

            if (pin == pin1)
            {
                 cout << "\nEnter amount to be Deposit: ";
                cin >> amt;
                total = total + amt;
                cout << "\nTotal amount: " << total;
                if (total > 99)
                {
                    cout << "\n\nEnter amount to withdraw: ";
                    cin >> d;
                    if (d > 99)
                    {
                        avai_balance = total - d;
                        if (avai_balance > 0)
                        {
                            cout << "\n\nAvailable Balance is:" << avai_balance;
                        }
                        
                        else
                        {
                            cout << "\nNot sufficient balance";
                        }
                    }
                    else
                    {
                        cout << "\nMinimum withdraw 100rs";
                    }
                }
                else
                {
                    cout<<"\nAmount insufficient!!";
                   
                }
            }
            else
            {
                cout << "Incorrect PIN!";
            }
        }
        else if (a == 's' || a == 'S')
        {
            cout << "Saving A/C" << a;
            cout << "\n\nEnter PIN: ";
            cin >> pin;

            if (pin == pin1)
            {
                 cout << "\nEnter amount to be Deposit: ";
                cin >> amt;
                total = total + amt;
                cout << "\nTotal amount: " << total;
                if (total > 99)
                {
                    cout << "\n\nEnter amount to withdraw: ";
                    cin >> d;
                    if (d > 99)
                    {
                        avai_balance = total - d;
                        if (avai_balance > 0)
                        {
                            cout << "\n\nAvailable Balance is:" << avai_balance;
                        }
                        else
                        {
                            cout << "\nNot sufficient balance";
                        }
                    }
                    else
                    {
                        cout << "\nMinimum withdraw 100rs";
                    }
                }
                else
                {
                    cout<<"\nAmount insufficient!!";
                   
                }
            }
            else
            {
                cout << "\nIncorrect PIN!";
            }
        }
        else
        {
            cout << "\nInvalid Input!";
        }
    }
    else if (l == 'h' || l == 'H')
    {
        cout << "\nHindi";
        cout << "\n\nNature of Account: ";
        cin >> a;
        if (a == 'c' || a == 'C')
        {
            cout << "\nCurrent A/C";
            cout << "\n\nEnter PIN: ";
            cin >> pin;

            if (pin == pin1)
            {
                cout << "\nEnter amount to be Deposit: ";
                cin >> amt;
                total = total + amt;
                cout << "\nTotal amount: "<<total;
                if (total > 99)
                {
                    cout << "\n\nEnter amount to withdraw: ";
                    cin >> d;
                    if (d > 99)
                    {
                        avai_balance = total - d;
                        if (avai_balance > 0)
                        {
                            cout << "\n\nAvailable Balance is: "<<avai_balance;
                        }
                        else
                        {
                            cout << "\nNot sufficient balance";
                        }
                    }
                    else
                    {
                        cout << "\n\nMinimum withdraw 100rs";
                    }
                }
                else
                {
                    cout<<"\nAmount insufficient!!";
                   
                }
            }
            else
            {
                cout << "Incorrect PIN!";
            }
        }
        else if (a == 's' || a == 'S')
        {
            cout << "Saving A/C" << a;
            cout << "\n\nEnter PIN: ";
            cin >> pin;

            if (pin == pin1)
            {
                cout << "\nEnter amount to be Deposit: ";
                cin >> amt;
                total = total + amt;
                cout << "\nTotal amount: " << total;
                if (total > 99)
                {
                    cout << "\n\nEnter amount to withdraw: ";
                    cin >> d;
                    if (d > 99)
                    {
                        avai_balance = total - d;
                        if (avai_balance > 0)
                        {
                            cout << "\n\nAvailable Balance is: "<< avai_balance;
                        }
                        else
                        {
                            cout << "\nNot sufficient balance";
                        }
                    }
                    else
                    {
                        cout << "\n\nMinimum withdraw 100rs";
                    }
                }
                else
                {
                    cout<<"\nAmount insufficient!!";
                   
                }
            }
            else
            {
                cout << "\nIncorrect PIN!";
            }
        }
        else
        {
            cout << "\nInvalid Input!";
        }
    }
    else
    {
        cout << "\nInvalid Input!";
    }
    cout<<"\n\nTO EXIT PRESS ZERO..   ";
    cin>>e;
    if(e==0){
        cout<<"\nTHANK YOU!\n";
    }

    return 0;
}