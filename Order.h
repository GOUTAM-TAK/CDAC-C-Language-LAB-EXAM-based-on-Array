#include<string>
using namespace std;
class Order
{
    private:
    static int cnt;
    int order_id;
    string customer_name;
    string address;
    double total_amount;
    public:
    Order();
    Order(string customer_name, string address);
    Order(string,string,double);
    int get_order_id() const;
    double get_total_amount() const;
    void display() const;
    void set_total_amount(double);
    void set_customer_name(string);
    void set_address(string);
    string get_customer_name() const;
    string get_address() const;
};
int Order::cnt=0;