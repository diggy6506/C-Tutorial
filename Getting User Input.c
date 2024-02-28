#include <stdio.h>
#include <stdlib.h>

int main()
{

    char grade;
    printf("What is your grade?: ");
    scanf("%c", &grade);
    printf("your grade is: %c\n", grade);

    int age;
    printf("What is your age?: ");
    scanf("%d", &age);
    printf("Your age is: %d\n", age);
/* Note the difference below */
    double gpa;
    printf("What is your GPA?: ");
    scanf("%lf", &gpa);
    printf("Your GPA is: %f\n", gpa);












    return 0;
}
