//Write a function to print a pascal triangle
#include<iostream>
using namespace std;
void Pascal(int);
int Fact(int);
int Comb(int, int);

int main()
{
 int n;
 cout<<endl<<"Enter no. of lines of pascal triangle: ";
 cin>>n;
 Pascal(n);
 return 0;
}

void Pascal(int n)
{
 int i,j;
 for(i=0;i<n;i++)
 {
  for(j=0;j<=i;j++)
  {
   cout<< Comb(i,j)<<"\t";
  }
  cout<<endl;
 }
}

int Comb(int i,int j)
{
 return (Fact(i)/(Fact(j)*Fact(i-j)));
}

int Fact(int n)
{
 int fact=1;
 if(n==1||n==0)
   return 1;
 fact=n*Fact(n-1);
 return fact;
}
