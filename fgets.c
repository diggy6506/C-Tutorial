#include <stdio.h>
#include <stdlib.h>

int main()
{




 /* specify character amount in []. No need to add '&' when using char */
    char name[20];
    printf("What is your name?: ");
    fgets(name, 20, stdin);
    printf("Your name is: %s", name);




    return 0;
}
