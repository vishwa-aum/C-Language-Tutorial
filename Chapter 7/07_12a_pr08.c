#include<stdio.h>
void printTable(int *mulTable, int num, int n){
    printf("The multiplication table of %d is :\n", num);
    for(int i=0; i<n; i++){
        mulTable[i] = num*(i+1);
    }

    for(int i=0; i<n; i++){
        printf("%dX%d = %d\n", num, i+1, mulTable[i]);
    }
    printf("******************************************************\n\n");
}

int main(){

    int n;
    printf("Enter which no. of Table do you want: ");
    scanf("%d",&n);
    int mulTable[0][10];
    printTable(mulTable[0], n, 10);
    // printTable(mulTable[1], 7, 10);
    // printTable(mulTable[2], 9, 10);

    return 0;
}