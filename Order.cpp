#include "./Order.h"
#include <iostream>

using namespace std;

Order::Order()
{

}

Order::Order(string name, string address,double amount  ): customer_name(name), address(address), total_amount(amount)
{
    order_id=++cnt;
}
Order::Order(string name, string address): customer_name(name), address(address){
    order_id=++cnt;
}

int Order::get_order_id() const
{
    return order_id;
}

double Order::get_total_amount() const
{
    return total_amount;
}

string Order::get_customer_name() const
{
    return customer_name;
}

string Order::get_address() const
{
    return address;
}

void Order::display() const
{
    cout<<"Order ID: "<<order_id<<endl;
    cout<<"Customer Name: "<<customer_name<<endl;
    cout<<"Address: "<<address<<endl;
    cout<<"Total Amount: "<<total_amount<<endl;
}

void Order::set_address(string adr)
{
    address=adr;
}

void Order::set_customer_name(string name)
{
    customer_name=name;
}

void Order::set_total_amount(double amt)
{
    total_amount=amt;
}