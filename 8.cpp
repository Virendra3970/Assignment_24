//Define a overloaded function to calculate the area of circle, retangle and trinagle

#include<iostream>
#include<math.h>
using namespace std;
float Area(int);    // Funtion overloaded for Area of Circle
int Area(int,int);  //Function overloade for Area of rectangle
float Area(int,int,int);  //Function overloaded for Area of triangle

int main()
{
 int r,a,b,c;
 cout<<endl<<"Enter the radius of a circle: ";
 cin>>r;
 cout<<endl<<"Area of circle is "<<Area(r);
 cout<<endl<<"\nEnter the side lengths of a triangle: ";
 cin>>a>>b>>c;
 cout<<endl<<"Area of triangle is "<<Area(a,b,c);
 cout<<endl<<"\nEnter the length and bidth of a rectangle: ";
 cin>>a>>b;
 cout<<endl<<"Area of rectangle is "<<Area(a,b);
 cout<<endl;
 return 0;
 
}

float Area(int r)
{
 float ar;
 ar=3.14*r*r;
 return ar;
}

int Area(int l, int b)
{
 return l*b;
}

float Area(int a, int b, int c)
{
 int s,ar;
 s=(a+b+c)/2;
 ar=sqrt(s*(s-a)*(s-b)*(s-c));
 return ar; 
 
}
