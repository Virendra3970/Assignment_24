//Define a function in C++ to check a given number is a term of a fibonacci or not

#include<iostream>

using namespace std;

void checkFiboNumber(int n)
{
  int a=-1,b=1,c=0,flag=0;
  while(c<n)
  {
   c=a+b;
   a=b;
   b=c;
   if(c==n)
   {
     flag=1;
     break;
   }
  }
  if(flag==0)
   cout<<endl<<"No";
 else
   cout<<endl<<"Yes";

}
 
int main()
{
 int n;
 cout<<endl<<"Enter a number: ";
 cin>>n;
 checkFiboNumber(n);
  return 0;
}
 

