#include<bits/stdc++.h>

using namespace std;

class BankAccount{
    public:
      string accountHolder;
      int balance;

      BankAccount(string name , int amount){
        accountHolder = name;
        balance = amount;
      }
        
      void deposit(int amount){
          balance += amount;
          cout<<"Balance : "<<balance<<endl;
      }

      void withdraw(int amount){
        if(amount>balance){
            cout<< "Low on balance : " << endl;
            return;
        }else{
            balance -= amount;
        }
        
        cout<< "Balance after withdraw : " <<balance << endl;

      }

      void displayBalance(){
        cout<<"Balance : "<<balance;
      }

};

int main(){
    BankAccount Cust1("Himanshu" , 5000);
    Cust1.deposit(2000);
    Cust1.withdraw(1500);
    Cust1.displayBalance();
    return 0;
}