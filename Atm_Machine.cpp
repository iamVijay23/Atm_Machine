#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

class Bank
{
    //  Private that are used inside the class
private:
    string name;
    int accountNumber;
    char type[10];
    int amount = 0;
    int total = 0;

    //  Public access Spcifiers
public:
    void setValue() //  This Function Will Take the basic Input From the User
    {
        cout << "Enter Your name: ";
        cin.ignore();

        getline(cin, name);

        cout <<"Enter Account number: ";
        cin >> accountNumber;

        cout <<"Enter Account Type: ";
        cin >> type;

        cout <<"Enter Balance: ";
        cin >> total;
    }

    void showdata() // This will give the output
    {
        cout << "Name : " << name << endl;
        cout << "Acccount No :" << accountNumber << endl;

        cout << "Account type : " << type << endl;
        cout << " Balance : " << total << endl;
    }

    void deposit() // This function will take amount as input and it will deposite the Amount
    {
        cout <<"Enter amount To be Deposited \n";
        cin >> amount;
        cout << amount <<" "<< " Deposited Successfully !!";
    }

    void showbalance() // This will Give the Output for total balance
    {
        total += amount;
        cout <<"\n Total Balance is : " << total;
    }

    void withdrawal() //  This Function is used for the Withdrawal Operations
    {
        int a, available_balance;
        cout <<"Enter amount to Withdraw \n";
        cin >> a;
        
        //Condition To Check Whether Account have The Amount to be withdraw or not 
        if(total < a)
        {
            cout<<"Insufficient Balance ";
            return;

        }
        
        available_balance = total - a;
        cout << "Availabel balance is " << available_balance;
        total = available_balance;
    }
}; // Bank Class End Here


//Code Will Start Run From Here 
int main()
{
    Bank b; // Object of Bank Class

    cout << " \n "
             << "******* ____WELCOME ____ ******* \n \n";
    cout <<" Please !! First Login to Your Account \n " <<endl;
    int choice;

    // An Infinite Loop run until User Choose to Cancel
    while (1)
    {

        cout<<"\n";
        cout << "Enter Your Choice " << endl;

        cout << "\t1. Your Name "
             << "Account number "
             << "Account type " << endl;
        cout << "\t2. Balance Enquiry " << endl;
        cout << "\t3. Deposite Money " << endl;
        cout << "\t4. Show Total balance " << endl;
        cout << "\t5. Withdraw Money " << endl;
        cout << "\t6. Cancel " << endl;
        cin >> choice;

        switch (choice)
        {

        case 1:
            b.setValue();
            break;

        case 2:
            b.showdata();
            break;

        case 3:
            b.deposit();
            break;

        case 4:
            b.showbalance();
            break;

        case 5:
            b.withdrawal();
            break;

        case 6:
            exit(1); // This Exit Function Will Shut the Program
            break;

        default:
            cout << " \n Invalid choice \n";
        }
    }
}
