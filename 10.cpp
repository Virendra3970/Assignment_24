//Writer a funtion overloading program to add two different data tyoe numbers 

#include<iostream>
using namespace std;
int add(int,int,int=0);
float add(float,float,float=0);
int main()
{
 int a,b,c;
 cout<<endl<<"Enter two integers: ";
 cin>>a>>b;
 cout<<endl<<"\nAddition of two integer values: "<<add(a,b);
 cout<<endl<<"Enter three integers: ";
 cin>>a>>b>>c;
 cout<<endl<<"\nAddition of three integer values: "<<add(a,b,c);
 float x,y,z;
 cout<<endl<<"Enter two float numbers: ";
 cin>>x>>y;
 cout<<endl<<"\nAddition of two float values: "<<add(x,y);
 cout<<endl<<"Enter three float numbers: ";
 cin>>x>>y>>z;
 cout<<endl<<"\nAddition of two float values: "<<add(x,y,z);
 cout<<endl<<endl;
 return 0;
}

int add(int a,int b,int c)
{
 return (a+b+c);
}

float add(float x,float y,float z)
{
 return (x+y+z);
}
