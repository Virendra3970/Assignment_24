//Write a function to inplement the default argument concept in C++

#include<iostream>
#include<stdlib.h>
using namespace std;
int add(int,int,int=0);
int main()
{
 int a,b,c,key;
 while(1)
 {
 cout<<endl<<"1. Sum of three numbers";
 cout<<endl<<"2. Sum of two numbers";
 cout<<endl<<"3. Exit";
 cout<<endl<<"Enter your choice: ";
 cin>>key;
 switch(key)
 {
 case 1:
   cout<<endl<<"Enter three numbers to add: ";
   cin>>a>>b>>c;
   cout<<endl<<"Sum is "<<add(a,b,c);
   break;
 case 2:
   cout<<endl<<"Enter two numbers to add: ";
   cin>>a>>b;
   cout<<endl<<"Sum is "<<add(a,b);
   break;
 case 3:
   exit(0);
 default:
   cout<<endl<<"\nPlease, Enter a valid choice:";
}
}
cout<<endl<<endl;
 return 0;
}

int add(int a, int b, int c)
{
 int sum=0;
 sum=a+b+c;
 return sum;
}


