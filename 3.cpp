// Write a function to calculate the x raised to power y
#include<iostream>
using namespace std;
int Power(int,int);
int main()
{
 int x,y;
 cout<<endl<<"Enter the base value: ";
 cin>>x;
 cout<<endl<<"Enter the power value: ";
 cin>>y;
 cout<<endl<<x<<" Raised to power "<<y <<" is "<<Power(x,y);
 return 0;
}

int Power(int x, int y)
{
 int p=1;
 while(y>=1)
 {
  p=p*x;
  y--;
 }
 return p;
}
