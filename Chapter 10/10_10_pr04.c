#include <stdio.h>

int main()
{
    FILE *ptr;
    int n;
    char name[10]; 
    int sal;

    printf("How many No.of Employee's Data do you want?: \n");
    scanf("%d", &n);
    
    ptr = fopen("salary.txt", "w");

    for (int i=0; i<n; i++)
    {
        printf("Enter the Name of Employee %d: \n", i+1);
        scanf("%s", name);

        printf("Enter the Salary of employee %d: \n", i+1);
        scanf("%d", &sal);
        fprintf(ptr, "Name of Employee %d: %c ,Salary: %d \n", i+1, name, sal);
    }

    fclose(ptr);
    printf("Successfully generated table of Data of %d employees to salary.txt\n", n);
    return 0;
}