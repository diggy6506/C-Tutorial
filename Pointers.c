#include <stdio.h>
#include <stdlib.h>

int main()
{

    int age = 30;
    int * pAge = &age;
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * aGrade = &grade;

    printf("%p", &gpa);










    return 0;
}
