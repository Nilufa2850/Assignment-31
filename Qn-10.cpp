/*10. Consider two base classes
worker(int code, char name, float salary),
officer(float DA, HRA)
class manager(float TA(is 10% of salary), gross salary) is derived from both base
classes.
Write necessary member functions.*/

#include<iostream>
using namespace std ;

class Worker
{
    protected :
        char name[20] ;
        int code ;
        float salary ;
} ;
class Officer
{
    protected :
        int DA ;
        int HRA ;
};
class Manager : public Worker , public Officer 
{
    protected :
        float TA ;
        float gross_salary ;
    public:

        float TA_cal()
        {
            return TA = 10/100.0*salary ;
        }
        float cal_gr_sal()
        {
            return gross_salary = salary+TA+DA+HRA ;
        }

        void acceptAll()
        {
            cout<<"-----------------------------"<<endl ;
            cout<<"Enter Code         :  ";
            cin>>code ;
            cout<<endl ;

            cout<<"Enter Name         :  ";
            cin.ignore();
            cin.getline(name,20) ;
            cout<<endl ;

            cout<<"Enter Salary       :  ";
            cin>>salary ;
            cout<<endl ;

            cout<<"Enter DA           :  ";
            cin>>DA ;
            cout<<endl ;

            cout<<"Enter HRA          :  ";
            cin>>HRA ;
            cout<<endl ;
            cout<<"--------------------------------"<<endl ;
        }

        void showAll()
        {
            cout<<"Manager Information"<<endl ;
            cout<<"--------------------------------"<<endl ;

            cout<<"Code         :  "<<code<<endl ;
            cout<<"Name         :  "<<name<<endl ;
            cout<<"Salary       :  "<<salary<<endl ;
            cout<<"DA           :  "<<DA<<endl ;
            cout<<"HRA          :  "<<HRA<<endl ;
            cout<<"TA           :  "<<TA_cal()<<endl ;
            cout<<"Gross Salary :  "<<cal_gr_sal()<<endl ;
        }
};
        
int main ()
{
    int n ;
    cout<<"Enter Manager Count : ";
    cin>>n ;
    cout<<endl ;

    int i ;
    Manager ary[n] ;

    for(i=0 ; i<n ; i++)
    {
        cout<<"Enter Worker Information for "<<i+1 <<endl ;
        ary[i].acceptAll() ;
    }

    for(i=0 ; i<n ; i++)
    {
        cout<<"Manager Information "<<endl ;
        ary[i].showAll() ;
    }

    return 0 ;
}
