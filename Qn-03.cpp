/*3. Write a C++ program to calculate the percentage of a student using multi-level
inheritance. Accept the marks of three subjects in base class. A class will be derived
from the above mentioned class which includes a function to find the total marks
obtained and another class derived from this class which calculates and displays the
percentage of students.*/

#include<iostream>
using namespace std ;

class Base
{
    private :
        int sub1 , sub2 , sub3 ;
    public :
        void setMark()
        {
            cout<<"Enter marks of three subject out of 100 : ";
            cin>>sub1>>sub2>>sub3 ;
        }
    protected :
        int getSub1() { return sub1 ; }
        int getSub2() { return sub2 ; }
        int getSub3() { return sub3 ; }   
} ;

class Derived1 : public Base
{
    protected :
        int TotalMarks()
        {
            return (getSub1() + getSub2() + getSub3()) ;
        }
} ;

class Derived2 : public Derived1
{
    protected :
        float Cal_Per()
        {
            float temp ;
            temp = ( TotalMarks() / 300.0 ) * 100 ;
            return temp ;
        }
    public : 
        void ShowMarks()
        {
            cout<<"Sub1 = "<<getSub1()<<" Sub2 = "<<getSub2()<<" Sub3 = "<<getSub3()<<endl;
            cout<<"Total Marks = "<<TotalMarks()<<" Percentage = "<<Cal_Per()<<endl ;
        }
} ;

int main ()
{
    Derived2 student1 ;

    student1.setMark() ;
    student1.ShowMarks() ;
    return 0 ;
}
