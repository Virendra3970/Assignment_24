//Write a function in C++ to check whether a given number is a prime or not
#include<iostream>
using namespace std;
int checkPrime(int);
int main()
{
 int n;
 std:: cout<<"Enter a number to check: ";
 std::cin>>n;
 if(checkPrime(n))
    std::cout<<endl<<"Yes, "<<n<<" is a prime number.";
 else
    std:: cout<<endl<<"No, "<<n<<" is not a prime number.";
 return 0;
 
}

int checkPrime(int n)
{
 int i,flag=0;
 for(i=2;i<=n/2;i++)
 {
  if(n%i==0)
  {
   flag=1;
   break;
  }
 }
 if(flag==0)
   return 1;
 else
   return 0;
}
