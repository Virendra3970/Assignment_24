//Write a function in C++ to find the highest value digit in a given number
#include<iostream>
using namespace std;
int highestValueDigit(int);
int main()
{
 int n;
 cout<<endl<<"Enter a number: ";
 cin>>n;
 cout<<endl<<highestValueDigit(n)<<" is the highest value digit in "<<n<<endl;
 return 0;
 
}

int highestValueDigit(int n)
{
 int temp, max=0;
 while(n>0)
 {
  temp= n%10;
  if(temp>max)
    max=temp;
  n=n/10;
 }
 return max;
}
