\* Program to input Student information and print using struct *\

#include<stdio.h>
#include<string.h>
struct Student
{
  char name[20];
  int age;
  int rollno;
  float marks;    
};
int main()
{
  struct Student obj;
  strcpy(obj.name,"Noel V");
  obj.age=20;
  obj.rollno=200;
  obj.marks=80.0;
  printf("Name=%s\n",obj.name);
  printf("Age=%d\n",obj.age);
  printf("Rollno=%d\n",obj.rollno);
  printf("Marks=%f\n",obj.marks);    
}
