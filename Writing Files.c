#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer = fopen("employees.txt", "a");

    fprintf(fpointer, "\nCraig");




    fclose(fpointer);








    return 0;
}
