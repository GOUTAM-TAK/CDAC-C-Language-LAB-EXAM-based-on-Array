#include<iostream>
#include<string>
using namespace std;
//create class
class MyString
{
    string member; //private member variable
    public:
    
    MyString(){       //parameterless constructor
        member = "";
    }
    MyString(string str){
        member = str;
    }
    string getMember() { return member; }  //parameter constructor
    //overload operator *
    void operator*(int n)
    { string result="";
        for(int i=0;i<n;i++)
        {
            result = result+ member;
        }
         cout <<"Display output : "<< result << endl;
}
    };
   

int main()
{
    MyString Ob("test");  //create class instance
    int n;
    do{
    cout<<"enter positive number"<<endl;
     cin >> n;
    }while(n<1); //validate input number
    Ob*n;     // operator overloading
    return 0;
}