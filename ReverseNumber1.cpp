#include <iostream>
#include <cmath> 
using namespace std;


int reverse(int x)
{ 
 int tmp=x;
 if(x<0)  
 {x=x*(-1);}
 int count=0;
 while(x>10)
   {x/=10;
    count++;
   }
 x=tmp;
 if(x<0)
 {x=x*(-1);}
 int n,result=0;
    while(x>10)
     {
      n=x%10;
      result=result+(n*pow(10,count));
      count--;
      x=(x-n)/10;
      if(x<10)
        {
         result=result+x;
        }
     }

  if(tmp<0)
  return (-result);
  else 
  return result;
}
int main()
{
 int number;
 cout<<"please enter the number: ";
 cin>>number;
 int reverse_num=reverse(number);
 cout<<"Revesred number is: ";
 cout<<reverse_num;
 
}
