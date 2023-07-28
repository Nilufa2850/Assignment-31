/*9. Write a C++ program to implement the following class hierarchy:
Student: id, name
StudentExam (derived from Student): Marks of 6 subjects
StudentResult (derived from StudentExam) : percentage
Define appropriate functions to accept and display details.
Create 'n' objects of the StudentResult class and display the marklist.*/

#include<iostream>
using namespace std ;

class Student
{
    protected :
        char name[20] ;
        int id ;
} ;
class StudentExam : public Student
{
    protected :
        int marks[6] ;
};
class StudentResult : public StudentExam
{
    protected :
        float percentage ;
    public:
        void acceptAll()
        {
            cout<<"------------------------------------"<<endl ;
            cout<<"Enter Roll No.            :  ";
            cin>>id ;
            cout<<endl ;

            cout<<"Enter Student Name        :  ";
            cin.ignore();
            cin.getline(name,20) ;
            cout<<endl ;

            int i ;
            for(i=0 ; i<6 ; i++)
            {
                cout<<"Enter Marks for Subject"<<i+1<<"  :  ";
                cin>>marks[i] ;
                cout<<endl ;
            }
            cout<<"------------------------------------"<<endl ;
        }

        void showAll()
        {
            cout<<"********* Student Marklist *********"<<endl ;
            cout<<"------------------------------------"<<endl ;

            cout<<"Roll No.             :  "<<id<<endl ;
            cout<<"Student Name         :  "<<name<<endl ;
            cout<<endl ;
            
            int i ;
            for(i=0 ; i<6 ; i++)
            {
                cout<<"Marks of Subject 1   :  " ;
                cout<<marks[i] ;
                cout<<endl ;
            }
            cout<<endl ;

            //calculate percentage

            int total_marks = 0 ;
            for(i=0 ; i<6 ; i++)
            {
                total_marks = total_marks + marks[i] ;
            }
            percentage = total_marks / 600.0* 100 ;

            cout<<"Total Percentage     :  "<<percentage<<endl;
            cout<<"----------------------------------------------------"<<endl ;
        }
};
        
int main ()
{
    int n ;
    cout<<"Enter No. of Students You Want : ";
    cin>>n ;
    cout<<endl ;

    StudentResult s[n] ;

    int i ;
    for(i=0 ; i<n ; i++)
        s[i].acceptAll() ;
    
    for(i=0 ; i<n ; i++)
        s[i].showAll() ;

    return 0 ;
}
