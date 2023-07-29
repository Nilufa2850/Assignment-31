/*7. Write class declarations and member function definitions for a C++ base
class to represent an Employee (emp-code, name).
Derive two classes as Fulltime (daily rate, number of days, salary) and
Parttime (number of working hours, hourly rate, salary).
Write a menu driven program to:
1. Accept the details of ‘n’ employees.
2. Display the details of ‘n’ employees.
3. Search a given Employee by emp-code.*/

#include<iostream>
#include<cstring>
using namespace std ;

class Employee
{
    public :
        int emp_code ;
        char name[20] ;
} ;
class Fulltime : public Employee
{
    protected :
        float daily_rate ;
        int num_of_days ;
        float salary  ;
    public :
        int Salary_Fulltime()
        {
            salary = num_of_days*daily_rate ;
        }
        void accept_fulltime()
        {
            cout<<endl ;
            cout<<"------------------------------"<<endl ;

            cout<<"Employee Number   :  ";
            cin>>emp_code;
            cout<<endl ;

            cout<<"Employee Name     :  "; 
            cin.ignore() ;
            cin.getline(name , 20) ;
            cout<<endl ;

            cout<<"Daily Rate : ";
            cin>>daily_rate ;
            cout<<endl ; 

            cout<<"Num of days : ";
            cin>>num_of_days ;
            cout<<endl ;

            cout<<"Salary  : "<<Salary_Fulltime() ;

        }

        void show_fulltime()
        {
            
            cout<<"\n ----------------------------------\n";
            cout<<"\n Employee No     :  "<< emp_code;
            cout<<"\n Employee Name   :  "<< name ;
            cout<<"\n Salary          :  "<<salary ;
            cout<<"\n Status          :  Full time";
            cout<<"\n ----------------------------------\n";
                
        }
};
class Parttime : public Employee
{
    protected :
        int num_of_working_hrs ;
        float hrly_rate ;
        float salary ;

    public :
        int salary_parttime ()
        {
            salary = num_of_working_hrs*hrly_rate ;
        }
        void accept_parttime()
        {
            cout<<endl ;
            cout<<"------------------------------"<<endl ;

            cout<<"Employee Number   :  ";
            cin>>emp_code;
            cout<<endl ;

            cout<<"Employee Name     :  "; 
            cin.ignore() ;
            cin.getline(name , 20) ;
            cout<<endl ;

            cout<<"Num of Working Hours      :  ";
            cin>>num_of_working_hrs ;
            cout<<endl ;

            cout<<"Hourly rate      :  ";
            cin>>hrly_rate ;
            cout<<endl ;

            cout<<"Salary  : "<<salary_parttime() ;

        }
        void show_parttime()
        {
            
            cout<<"\n ----------------------------------\n";
            cout<<"\n Employee No     :  "<<emp_code;
            cout<<"\n Employee Name   :  "<<name;
            cout<<"\n Salary          :  "<<salary;
            cout<<"\n Status          :  Part time";
            cout<<"\n ----------------------------------\n";
                
        }
};
        
int main ()
{

    int x , a=0 , b=0 , i ;
    Fulltime A[10] ;

    Parttime B[10] ;


    do
    {
        cout<<"1.Enter Record"<<endl ;
        cout<<"2.Display Record"<<endl ;
        cout<<"3.Search Record"<<endl ;
        cout<<"4.Quit"<<endl ;

        cout<<endl<<"Enter Your Choice : ";
        cin>>x ;
        cout<<endl ;

        switch(x)
        {
            case 1 : 
                int y ;
                cout<<"1.FullTime Employee"<<endl ;
                cout<<"2.Parttime Employee"<<endl ;
                cout<<"Enter : ";
                cin>>y ;

                switch(y)
                {
                    case 1 :
                        A[a].accept_fulltime() ;
                        a++ ;
                        break ;

                    case 2 :
                        B[b].accept_parttime() ;
                        b++ ;
                        break ;
                }
                break ;

            case 2 :
                 for(i=0; i<a ; i++)
                        A[i].show_fulltime();
                
                for(i=0; i<b ; i++)
                    B[i].show_parttime() ;
                
                break ;

            case 3 :
                int m;
                cout<<"\n Enter Employee No. : ";
                cin>>m;
                for (int i=0; i<a ; i++)
                {
                        if (A[i].emp_code == m)
                            A[i].show_fulltime() ;
                        
                        if(B[i].emp_code == m)
                            B[i].show_parttime() ;
                        
                }
        }

    } while(x != 4) ;

    return 0 ;
}
