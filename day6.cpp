#include <iostream> 
#include <cstring>
using namespace std;
struct Student{
    char name[50];
    int id;
    float gpa;
};
void print_student(Student s)
{
    cout<<s.name<<endl;
    cout<<s.id<<endl;
    cout<<s.gpa<<endl;
}
void print_student_ptr(Student* s)
{
    cout<<s->name<<endl;
    cout<<s->id<<endl;
    cout<<s->gpa<<endl;
}
Student max(Student s[], int n)
{
    Student max=s[0];
    for(int i=1;i<n;i++)
    {
        if(s[i].gpa>max.gpa)
        {
            max=s[i];
        }
    }
    return max;
}
int main()
{
    Student s;
    s.id=1;
    s.gpa=8.68;
    strcpy(s.name, "Anaitra");
    print_student(s);
    print_student_ptr(&s);
    Student students[100];
    students[0].gpa=8.79;
    students[0].id=2;
    strcpy(students[0].name, "Divesh");
    students[1].gpa=4.5;
    students[1].id=3;
    strcpy(students[1].name, "Bheem");
    students[2].gpa=8.2;
    students[2].id=3;
    strcpy(students[2].name, "gooman");
    Student result;
    result=max(students, 3);
    cout<<"max gpa is: "<<endl;
    cout<<result.name<<endl;
    cout<<result.gpa<<endl;
}