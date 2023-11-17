 /* A basic calculator application that can perform the following operations:

* Addition
* Subtraction
* Multiplication
* Division
*/
#include<iostream>
#include<ctime>
#include<string>
#include<fstream>
#include<iomanip>
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
   ofstream fout;
   fout.open("basic_cal.txt",ios::app);
   fout<<"USER HAS CHOOSEN ADD THIS TIME : "<<endl;
   fout<<"Result of this time is : "<<sum<<endl;
   fout.close();
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
    ofstream fout;
   fout.open("basic_cal.txt",ios::app);
   fout<<"USER HAS CHOOSEN SUBSTRACTION THIS TIME : "<<endl;
   fout<<"Result of this time is : "<<subt<<endl;
   fout.close();
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
   cout<<"MULTIPLICATION IS : "<<fixed<<setprecision(4)<<mult<<endl<<endl;
    ofstream fout;
   fout.open("basic_cal.txt",ios::app);
   fout<<"USER HAS CHOOSEN MULTIPLICATION THIS TIME :"<<endl;
   fout<<"Result of this time is : "<<fixed<<setprecision(4)<<mult<<endl;
   fout.close();
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
     ofstream fout;
   fout.open("basic_cal.txt",ios::app);
   fout<<"USER HAS CHOOSEN DIVISION THIS TIME :"<<endl;
   fout<<"Result of this time is : "<<divid<<endl;
   fout.close();
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
    int a;
    cout<<endl<<endl<<endl<<"IF YOU WANT TO SEE ALL HISTORY TILL NOW : PRESS 1 OTHERWISE PRESS 2"<<endl;
     cin>>a;
     if(a==1)
     {  char ch;
        cout<<"HISTORY IS ----"<<endl;
        ifstream fin;
        fin.open("basic_cal.txt",ios::in);
        if(!fin)
        {
            cout<<"FILE NOT FOUND";
        }
        else
        {
        ch=fin.get();
        while(!fin.eof())
        {
            cout<<ch;
            ch=fin.get();
        }
        fin.close();
     }
     }
     else
     {
        cout<<endl<<endl<<endl<<endl<<"THANK YOU"<<endl;
     }
    return 0;
}