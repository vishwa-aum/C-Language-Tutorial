#include <stdio.h>
#include <string.h>

typedef struct employee
{
    int code;
    float salary;
    char name[10];
}emp;

int main()
{
    emp e[3];
    for (int i = 0; i < 3; i++) // if you want to use for loop, you have to use typedef
    {
        printf("Enter the value for code of e(%d): \n", i+1);
        scanf("%d", &e[i].code);
        printf("Enter the value for salary of e(%d): \n", i+1);
        scanf("%f", &e[i].salary);
        printf("Enter the value for name of e(%d): \n", i+1);
        scanf("%s", e[i].name); 
    }

    return 0;
}