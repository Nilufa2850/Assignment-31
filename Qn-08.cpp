/*8 - In a bank, different customers have savings account. Some customers may
have taken a loan from the bank. So bank always maintain information about
bank depositors and borrowers.
Design a Base class Customer (name, phone-number). Derive a class
Depositor(accno, balance) from Customer.
Again, derive a class Borrower (loan-no, loan-amt) from Depositor.
Write necessary member functions to read and display the details of ‘n’
customers.*/

#include<iostream>
using namespace std ;
#include<cstring>

class Customer
{
    protected :
        char name[20] ;
        int ph_no ;
} ;
class Depositor : public Customer
{
    protected :
        int acc_no ;
        float balance ;
};
class Borrower : public Depositor
{
    protected :
        int loan_no ;
        float loan_amnt ;
    public:
        void acceptAll()
        {
            cout<<"Enter Customer Name    :  ";
            cin.ignore();
            cin.getline(name,20) ;
            cout<<endl ;

            cout<<"Enter Customer Ph No.  :  ";
            cin>>ph_no ;
            cout<<endl ;

            cout<<"Enter Customer A/C No. :  ";
            cin>>acc_no ;
            cout<<endl ;

            cout<<"Enter Balance          :  ";
            cin>>balance ;
            cout<<endl ;

            cout<<"Enter Loan No.         :  ";
            cin>>loan_no ;
            cout<<endl ;

            cout<<"Enter Loan Amount      :  ";
            cin>>loan_amnt ;
            cout<<endl ;

            cout<<"-----------------------------------------------------"<<endl ;
            cout<<endl ;
        }

        void showAll()
        {
            cout<<"Details of Customer"<<endl ;
            cout<<endl<<"---------------------------------------------------"<<endl ;
            cout<<endl ;

            cout<<"Customer Name     :  "<<name<<endl ;
            cout<<"Customer Ph no.   :  "<<ph_no<<endl ;
            cout<<"Customer A/C no.  :  "<<acc_no<<endl ;
            cout<<"Balance           :  "<<balance<<endl ;
            cout<<"--------------------------------------------------"<<endl ;
            cout<<endl ;

            cout<<"Loan No           :  "<<loan_no<<endl ;
            cout<<"Loan Amount       :  "<<loan_amnt<<endl ;
            cout<<"--------------------------------------------------"<<endl ;
            cout<<endl ;
        }
};
        
int main ()
{
    int n ;
    cout<<"Enter No. of Customer Details You Want : ";
    cin>>n ;
    cout<<endl ;

    Borrower ary[n] ;

    int i ;
    for(i=0 ; i<n ; i++)
        ary[i].acceptAll() ;
    
    for(i=0 ; i<n ; i++)
        ary[i].showAll() ;

    return 0 ;
}
