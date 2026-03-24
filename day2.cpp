#include <iostream>
using namespace std;
void prime(int n)
{
int count=0;
if(n==1)
    {
cout<<"neither prime nor composite";
return;
    }
for(int i=2;i<n-1;i++)
    {
if(n%i==0)
        {
count++;
        }
    }
if(count==0)
    {
cout<<"it is prime.";
    }
else
    {
cout<<"not prime.";
    }
}
int main()
{
int a;
cout<<"enter a number:";
cin>>a;
prime(a);
}