/*4. Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary*/

#include<iostream>
#include<cstring>
using namespace std ;

class Person
{
    protected :
        char address[30] ;
        int ph_no ;
    public :
        char name[30] ; // for access
        void setName()
        {
            cout<<"Enter Name : " ;
            cin.ignore() ;
            cin.getline(name,30) ;
            cout<<endl ;
        }
        void setAddress()
        {
            cout<<"Enter Address : ";
            cin.ignore() ;
            cin.getline(address,30) ;
            cout<<endl ;
        }
        void setPhNo()
        {
            cout<<"Enter Phone No : ";
            cin>>ph_no;
            cout<<endl ;
        }
} ;
class Employee : public Person
{
    protected :
        int eno ;
        char ename[20] ;
    public:
        void setENo()
        {
            cout<<"Enter Employee No. : ";
            cin>>eno ;
            cout<<endl ;
        } 
} ;
class Manager : public Employee
{
    protected :
        char designation[30] ;
        char deptName[30] ;
    public:
        float basic_salary ;
    public:
        void setDesignation()
        {
            cout<<"Enter Designation : ";
            cin.ignore() ;
            cin.getline(designation, 30) ;
            cout<<endl ;
        }
        void setDept()
        {
            cout<<"Enter Department Name : ";
            cin.ignore() ;
            cin.getline(deptName, 30) ;
            cout<<endl ;
        }
        void setSalary()
        {
            cout<<"Enter Basic Salary : ";
            cin>>basic_salary ;
            cout<<endl ;
        }

        void accept_all_details()
        {
            cout<<"Enter Details of Manager"<<endl ;
            cout<<"----------------------------"<<endl ;
            setENo() ;
            setName();
            setAddress() ;
            setPhNo() ;
            setDesignation() ;
            setDept() ;
            setSalary() ;
        }

} ;


int main ()
{
    cout<<"How Many Managers You want to Enter ? : ";
    int n , i ,temp ;
    cin>>n ;

    Manager m[n] ;

    for(i=0 ; i<n ; i++)
    {
        m[i].accept_all_details() ;
    }

    temp = 0 ;
    for(i=1 ; i<n ; i++)
    {
        if (m[temp].basic_salary < m[i].basic_salary)
            temp = i ;
    }

    cout<<endl<<"Manager with Highest Salary is : "<<m[temp].basic_salary ;
    cout<<endl<<"Manager name is "<<m[temp].name ;

    

    return 0 ;
}
