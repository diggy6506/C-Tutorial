#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};









int main()
{

  struct Student student1;
  struct Student student2;

  student1.age = 22;
  student1.gpa = 3.2;
  strcpy( student1.name, "John");
  strcpy( student1.major, "Business");

  student2.age = 20;
  student2.gpa = 3.8;
  strcpy( student2.name, "Dave");
  strcpy( student2.major, "Art");

  printf("%s\n", student1.name);
  printf("%d\n", student1.age);
  printf("%s\n", student1.major);
  printf("%lf\n", student1.gpa);


  printf("%s\n", student2.name);
  printf("%d\n", student2.age);
  printf("%s\n", student2.major);
  printf("%lf\n", student2.gpa);



















    return 0;
}
