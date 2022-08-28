//Write a overloading funtion to check maximum of two numbersand both the numbers can be integers or real

#include<iostream>
using namespace std;
int Max(int, int);       //This funtion is used find the maximum b/w two integer numbers
float MAx(float,float);  //This funtion is used find the maximum b/w two real numbers
int main()
{
 int a,b;
 cout<<endl<<"Enter two integer numbers to find max: ";
 cin>>a>>b;
 cout<<endl<<"\nMaximum number is "<<Max(a,b);
 float x,y;
 cout<<endl<<"Enter two real numbers to find max: ";
 cin>>x>>y;
 cout<<endl<<"\nMaximum number is "<<Max(x,y);
 cout<<endl<<"\n";
 return 0;
}

int Max(int a, int b)
{
 if(a>b)
   return a;
 else
   return b;
}

float Max(float x, float y)
{
 if(x>y)
   return x;
 else
   return y;
}
