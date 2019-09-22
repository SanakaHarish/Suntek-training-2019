#include<stdio.h>
struct student
{
    char name[20];
    int rno;
};
void display1(char [],int );
void display2(struct student);
void main()
{
    struct student s1={"Raju",101};
    display1(s1.name,s1.rno);
    display2(s1);
}
void display1(char name[20],int rno)
{
    printf("name is %s \n rollno, is %d\n\n",name,rno);
}
void display2(struct student s1)
{
    printf("name is %s \n rollno. is %d",s1.name,s1.rno);
}
