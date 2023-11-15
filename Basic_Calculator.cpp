 /* A basic calculator application that can perform the following operations:

* Addition
* Subtraction
* Multiplication
* Division

The calculator should be able to handle both integer and floating-point numbers. It should also be able to display the result of the calculation in a clear and easy-to-read format.

Here are some additional requirements for the calculator:
* The calculator should be easy to use and understand.

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
    float subt=0;
    float mult=1;
    float divid=1;
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
   delete [] ptr;
   }
void cal::sub()
   {   
    float *ptr = new float[2];
    cout<<"ENTER TWO NUMBER : "<<endl;
    for(int i=0;i<2;i++)
    {
        cin>>ptr[i];
    }
     subt=ptr[0]-ptr[1];
     cout<<"DIFFERENCE IS "<<subt<<endl<<endl;
     delete [] ptr;
   }
   void cal::mul()
   {
    cout<<"HOW MANY NUMBERS YOU WANT TO MULTIPLY :"<<endl;
    cin>>size;
    float *ptr=new float[size];
    cout<<"ENTER "<<size<<" NUMBERS TO MULTIPLY :"<<endl;
   for(int i=0;i<size;i++)
   {
    cin>>ptr[i];
   }
   for(int i=0;i<size;i++)
   {
   mult *=ptr[i];
   }
   cout<<"MULTIPLICATION IS : "<<mult<<endl<<endl;
    delete [] ptr;
   }
   void cal::divi()
   {
    float *ptr=new float[2];
    cout<<"ENTER THE VALUE OF DIVIDEND : "<<endl;
    cin>>ptr[0];
    cout<<"ENTER THE VALUE OF DIVISIOR : "<<endl;
    cin>>ptr[1];
    divid=ptr[0]/ptr[1];
    cout<<"THE ANSWER IS : "<<divid<<endl<<endl;
    delete [] ptr;
   }
int main()
{   cal obj;
    int n;
    do{
    cout<<"-----------MENU-----------"<<endl<<endl;
    cout<<"ENTER 1 : FOR ADDITION"<<endl;
    cout<<"ENTER 2 : FOR SUBSTRACTION"<<endl;
    cout<<"ENTER 3 : FOR MULTIPLICATION"<<endl;
    cout<<"ENTER 4 : FOR DIVISION"<<endl;
    cout<<"ENTER 5 : FOR EXIT"<<endl;
    cin>>n;
    switch (n)
    {
    case 1:
          obj.add();
        break;
        
    case 2:
         obj.sub();
         break;        
     case 3:
         obj.mul();
         break;
     case 4:
         obj.divi();
         break;           
    default:
     cout<<"ENTERED INVALID CHOICE"<<endl<<endl;
     break;
    }
    }while(n!=5);
    return 0;
}