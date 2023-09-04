// Lab 1: Account.h
// Definition of Account class.

class Account
{
public:
   Account( int ); // constructor initializes balance
   void credit( int ); // add an amount to the account balance
   /* write code to declare member function debit. */
   void debit(int);//withdraw amount to account balance
   int getBalance(); // return the account balance
private:
   int balance; // data member that stores the balance
}; // end class Account

