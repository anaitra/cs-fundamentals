#include <iostream> 
using namespace std;
int maxx(int arr[], int n)
{
    int max=arr[0];
    for(int i=1;i<n;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
    return max;
}
    int factorial(int n)
    {
        int result=1;
        if(n==0||n==1)
        {
            return 1;
        }
        else
        {
            for(int i=n;i>=1;i--)
            {
                result=result*i;
            }
        }
        return result;
    }
    int power(int n, int e)
    {
        int result=1;
        for(int i=1;i<=e;i++)
        {
           result=result*n;
        }
        return result;
    }
int main()
{
    int a;
    cout<<"enter size: ";
    cin>>a;
    int arr[a];
    cout<<"input the elements: ";
    for(int i=0;i<a;i++)
    {
        cin>>arr[i];
    }
    int result=maxx(arr, a);
        cout<<"max element: "<<result<<endl;
    int fact=factorial (a);
    cout<<"factorial: "<<fact<<endl;
    int b;
    cout<<"enter base: "<<endl;
    cin>>b;
    int exp;
    cout<<"Enter exponenent: "<<endl;
    cin>>exp;
    int powerr=power(b, exp);
    cout<<"power is: "<<powerr<<endl;


}

