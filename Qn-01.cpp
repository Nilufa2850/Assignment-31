/*1. Define a class Person with instance members name and age. Also define member
functions setName(), setAge(), getName(), getAge(). Now define class Employee by
inheriting Person class. In the Employee class define empid and salary as instance
members. Also define setEmpid, setSalary, getEmpid, getSalary.*/

#include<iostream>
#include<cstring>
using namespace std ;

class Person
{
    private :
        int age ;
        char name[20] ;
    public :
        void setName (char ary1[])
        {
            strcpy(name,ary1) ;
        }
        char* getName()
        {
            return name ;
        }
        void setAge(int a)
        {
            age = a ;
        }
        int getAge()
        {
            return age ;
        }
        void showPersonData()
        {
            cout<<"Name-"<<name<<endl ;
            cout<<"Age-"<<age <<endl ;
        }
} ;
class Employee : public Person
{
    private:
        int empid ;
        int salary ;

    public:
        void setEmpid(int id)
        {
            empid = id ;
        }
        int getEmpid()
        {
            return empid ;
        }
        void setSlary(int s)
        {
            salary = s ;
        }
        int getSalary()
        {
            return salary ;
        }
        void showEmpData()
        {
            cout<<"Name-"<<getName()<<endl ;
            cout<<"Age-"<<getAge() <<endl ;
            cout<<"Empid-"<<empid<<endl ;
            cout<<"Salary-"<<salary<<endl ;
        }
} ;

int main ()
{
    Employee e1 ;

    char ary[20] ;
    cout<<"Enter your name : ";
    cin.getline(ary,20) ;
    e1.setName(ary) ;

    e1.setAge(20) ;
    e1.setEmpid(14) ;
    e1.setSlary(100000) ;

    //e1.showPersonData() ;
    e1.showEmpData() ;
    return 0 ;
}
