#include <iostream>
using namespace std;
int length(char ch[])
{
    int count=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        count++;
    }
    return count;
}
void copy(char ch[], char hc[])
{
    int i;
    for(i=0; ch[i]!='\0';i++)
    {
        hc[i]=ch[i];
    }
    hc[i]='\0';
}
void cat(char ch[], char hc[])
{
    int i=0;
    while(hc[i]!='\0')
    {
        i++;
    }
    int j=0;
    while(ch[j]!='\0')
    {
        hc[i]=ch[j];
        i++;
        j++;
    }
    hc[i]='\0';
}
int main()
{
    cout<<"enter string: "<<endl;
    char ch[100];
    cin>>ch;
    char hc[100];
    int result;
    result=length(ch);
    cout<<"length of the array is "<<result<<endl;
    copy(ch, hc);
    cout<<"copied string is: "<<hc<<endl;
    cat(ch, hc);
    cout<<"after catenation: "<<hc;

}