#include <iostream>
#include <string>
#include <sstream>  
using namespace std;


int reverse(int x)
{
 int tmp=x;
 if(x<0)
 {x=x*(-1);}
 int n;
 string rev;
    while(x>10)
     {
      n=x%10;
      stringstream InttoStr;
      InttoStr << n;
      rev=rev+InttoStr.str();
      x=(x-n)/10;
      if(x<10)
        {
          stringstream InttoStr1;
          InttoStr1 << x;
          rev=rev+InttoStr1.str();
        }
     }

  istringstream ( rev ) >> n;
  if(tmp<0)
  return (-n);
  else 
  return n;
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
