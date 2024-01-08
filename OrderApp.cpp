#include "../Q1/Order.cpp"
#include<iostream>

using namespace std;

int main()
{   // Initialize the order Array with size 10
    Order order_array[10] = {
        {"Arjun", "pune"},  ////order id auto genrated
        {"Yudhister", "mumbai"},
        {"Bhim", "Kolkata"},
        {"Nakul", "delhi"},
        {"Sahdev", "hastinapur"},
        {"Ram", "Ayodhya"},
        {"Krishna", "dwarika"},
        {"Varuna", "pune"},
        {"Jagganath", "puri"},
        {"Vasudev","mathura"}
    };

    //Accept amount from user according to given question
    double amount;
    for(int i=0; i<10; i++) 
    {
        cout<<"order id : "<<order_array[i].get_order_id()<<endl;
        cout<<"enter amount for above order : "<<endl;
        cin>>amount;
        order_array[i].set_total_amount(amount);
    }
    
    //find all order with total amount using user given amount and count of order items (which has total amount is equal to given amount)
    static int order_count = 0;
    double finding_amount;
    cout<<endl;
    cout<<"enter order amount which will be found : ";
    cin>>finding_amount;
    cout<<endl;
    cout<<"Orders with given amounts are found : "<<endl;
    for(int i=0; i<10; i++)
    {
        if(order_array[i].get_total_amount() == finding_amount)
        {
            cout<<"order id : "<<order_array[i].get_order_id()<<endl;
            cout<<"customer name : "<<order_array[i].get_customer_name()<<endl;
            cout<<"customer address : "<<order_array[i].get_address()<<endl;
            cout<<"total amount : "<<order_array[i].get_total_amount()<<endl;
            cout<<"--------------------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<endl;
            order_count++;
        }
        
    }
    //Display count of orders found by given amount
    if(order_count==0){
            cout<<"given amount not present in Orders details"<<endl;
    }
  else{
   cout<<"total count of orders : "<<order_count<<"  of given amount : "<<finding_amount<<endl;
  }
 return 0; 
}