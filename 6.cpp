//Write a function in C++ to swap two integer values by using call by reference
// NOte: In C++ call by reference and call by address are different things

#include<iostream>

using namespace std;
 
void Swap(int &, int &);

int main()
{
 int a,b;
 cout<<endl<<"Enter two numbers to swap: ";
 cin>>a>>b;
 Swap(a,b);
 cout<<endl<<"a= "<<a<<" b= "<<b;
 return 0;
}

void Swap(int &a, int &b)
{
 int t;
 t=a;
 a=b;
 b=t;
}
