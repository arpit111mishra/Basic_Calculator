/*As a client, I would like to request a basic calculator application that can perform the following operations:

* Addition
* Subtraction
* Multiplication
* Division

The calculator should be able to handle both integer and floating-point numbers. It should also be able to display the result of the calculation in a clear and easy-to-read format.

Here are some additional requirements for the calculator:

* The calculator should be easy to use and understand.
* The calculator should be able to handle user input errors, such as entering an invalid operator or operand.
* The calculator should be able to perform calculations with large numbers.

I would also like the calculator to have the following features:

* A clear and concise user interface
* The ability to save and load calculations
* The ability to customize the calculator's appearance
*/
#include<iostream>
#include<ctime>
#include<string>
using namespace std;
class cal{
    int size;
    float sum=0;
 public:
 cal()
 {  cout<<endl<<endl;
    cout<<"HELLO USER"<<" ";
    time_t now=time(0);
    struct tm *c_t=localtime(&now);
    int hour =c_t->tm_hour;
    string greeting;
    if(hour<12)
    {
        greeting="VERY GOOD MORNING";
    }
    else if(hour<18)
    {
        greeting="VERY GOOD AFTERNOON";
    }
    else{
        greeting="VERY GOOD EVENING";
    }
    cout<<greeting<<endl<<endl;
 }
 void add();
 void sub();
 void mul();
 void divi();
};
void cal::add()
{  
   cout<<"HOW MANY NUMBERS YOU WANT TO ADD"<<endl;
   cin>>size;
   float *ptr=new float[size];
   cout<<"ENTER "<<size<<" NUMBERS TO ADD :"<<endl;
   for(int i=0;i<size;i++)
   {
    cin>>ptr[i];
   }
   for(int i=0;i<size;i++)
   {
    sum +=ptr[i];
   }
   cout<<"YOUR SUM IS = "<<sum<<endl<<endl;
   }

int main()
{   cal obj;
    int n;
    do{
    cout<<"-----------MENU-----------"<<endl<<endl;
    cout<<"ENTER 1 : FOR ADDITION"<<endl;
    cout<<"ENTER 2 : FOR SUBSTRACTION"<<endl;
    cout<<"ENTER 3 : FOR MULTIPLICATION"<<endl;
    cout<<"ENTER 4 : FOR QUIT"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
          obj.add();
        break;
        /*
    case 2:
         sub();
         break;
     case 3:
         mul();
         break;
     case 4:
         divi();
         break;           
    default:
     cout<<"ENTERED INVALID CHOICE";
     break;
     */
    }
    }while(n!=4);
    return 0;
}