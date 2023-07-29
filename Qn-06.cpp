/*6. Write a C++ program to demonstrate how a common friend function can
be used to exchange the private values of two classes. (Use call by
reference method).*/

#include<iostream>
using namespace std ;

class Second ;      // becoz we use of Second class inside First class
class First
{
    private : 
        int a , b ;
    public : 
        void setData(int A , int B)
        {
            a = A ;
            b = B ;
        }
        void showData()
        {
            cout<<"a = "<<a<<" b = "<<b<<endl ;
        }
        friend void exchange (First & , Second & )  ;
} ;
class Second
{
    private : 
        int x , y ;
    public :
        void setData_sec(int X, int Y)
        {
            x = X ;
            y = Y ;
        }
        void showData_sec()
        {
            cout<<"x = "<<x<<" y = "<<y<<endl ;
        }
    
        friend void exchange (First & , Second & )  ;
} ;

void exchange (First &m, Second &n ) 
{
    First temp ;
    temp.a = m.a ;
    m.a = n.x ;
    n.x = temp.a ;

    //cout<<"after swapping : "<<endl ;
    //cout<<"a = "<<m.a<<" x = "<<n.x<<endl ;
}

int main ()
{
    First f ;
    f.setData(5,6) ;
    f.showData();

    Second s ;
    s.setData_sec(9,10) ;
    s.showData_sec() ;

    exchange(f , s) ;
    cout<<"After Swapping"<<endl ;
    f.showData() ;
    s.showData_sec() ;

    return 0 ;
}
