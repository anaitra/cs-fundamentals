#include <iostream>
using namespace std;
int length(char ch[])
{
    int count=0;
    int i=0;
    for(int i=0;ch[i]!=0;i++)
    {
        count++;
    }
    return count;
}
int palindrome(char ch[])
{
    int leng=length(ch);
    char rev[100];
    int j=0;
    for(int i=leng-1;i>=0;i--)
    {
        rev[j]=ch[i];
        j++;
    }
    rev[j]='\0';
    for(int i=0;i<=leng-1;i++)
    {
        if(ch[i]!=rev[i])
        {
            return 0;
        }
    }
        return 1;
    }
int vowelcount(char ch[])
{
    int count=0;
    for(int i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a'||ch[i]=='e'||ch[i]=='i'||ch[i]=='o'||ch[i]=='u'||ch[i]=='A'||ch[i]=='E'||ch[i]=='I'||ch[i]=='O'||ch[i]=='U')
        {
            count++;
        }
    }
    return count;
}
    int main()
    {

        cout<<"if palindrome return 1 if not return 0. "<<endl;
        cout<<"enter a string: "<<endl;
        char ch[100];
        cin>>ch;
        int result;
        result=palindrome(ch);
        cout<<result<<endl;
        cout<<"no of vowels: "<<endl;
        int resulty;
        resulty=vowelcount(ch);
        cout<<resulty;
    }
