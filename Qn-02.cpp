/*2. Write a C++ program to add two numbers using single inheritance. Accept these two
numbers from the user in base class and display the sum of these two numbers in
derived class.*/

#include<iostream>
using namespace std ;

class Base
{
    private :
        int a , b ;
    public :
        void setA (int x) { a = x ; }
        void setB (int x) { b = x ; }
        int getA() { return a ; }
        int getB() { return b ; }   
} ;

class Derivied : public Base
{
    protected: 
        int sum ()
        {
            int temp ;
            temp = getA() + getB() ;
            //temp = a+b ;
            return temp ;
        }
    public :
        void showSum()
        {
            cout<<"A="<<getA()<<" B="<<getB()<<" Sum="<<sum()<<endl ;
        }
} ;

int main ()
{
    Derivied d1 ;    

    int x , y ;
    cout<<"Enter value of a : ";
    cin>>x ;
    d1.setA(x) ;

    cout<<"Enter value of b : ";
    cin>>y ;
    d1.setB(y) ;

    d1.showSum() ;
    return 0 ;
}
