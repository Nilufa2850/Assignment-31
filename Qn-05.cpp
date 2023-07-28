/*5. Write a C++ program to define a base class Item (item-no, name, price).
Derive a class Discounted-Item (discount-percent). A customer purchases
'n' items. Display the item-wise bill and total amount using appropriate
format.*/

#include<iostream>
#include<cstring>
using namespace std ;

class Item
{
    protected :
        int item_no ;
        char name[20] ;
    public :
        float price ;
} ;
class Discounted_Item : public Item
{
    public:
        float discount_percent ;

        void accept_all()
        {
            cout<<"Enter Item Name : ";
            cin.ignore() ;
            cin.getline(name,20) ;
            cout<<endl ;

            cout<<"Enter Item No : ";
            cin>>item_no;
            cout<<endl ;

            cout<<"Enter Item Price : ";
            cin>>price;
            cout<<endl ;

            cout<<"Enter Discount Percent : ";
            cin>>discount_percent ;
            cout<<endl ;
            cout<<"-----------------------------------"<<endl ; 
            cout<<endl ;
        }
        float total_discount()  // for calculate total discount
        {
            return (discount_percent / 100 * price) ;
        }

        float Dis_Price()
        {
            return (price - (discount_percent / 100 * price)) ;
        }

        void show_all()
        {
            cout<<"Item Name : "<<name<<endl<<"Item No : "<<item_no<<endl ;
            cout<<"Item Prices : "<<price<<endl <<"Discount Percent : "<<discount_percent<<endl ;
            cout<<"Discounted Price : "<<Dis_Price()<<endl;
            cout<<"------------------------"<<endl;
        }
};
        


int main ()
{
    cout<<"How Many Items You want to Enter ? : ";
    int n ;
    cin>>n ;
    cout<<endl ;

    Discounted_Item ary[n] ;
    int i ;
    for(i=0 ; i<n ; i++)
        ary[i].accept_all() ;

    for(i=0 ; i<n ; i++)
        ary[i].show_all() ;

    float Total_price = 0 , Total_dcount = 0 ;
    for(i=0 ; i<n ; i++)
    {
        Total_price = Total_price + ary[i].price ;
        Total_dcount = Total_dcount + ary[i].total_discount() ;
    }

    cout<<"Total Price : "<<Total_price<<endl ;
    cout<<"Total Discount : "<<Total_dcount<<endl ;

    return 0 ;
}
