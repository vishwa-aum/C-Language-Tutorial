#include<stdio.h>
void printTable(int *mulTable, int num, int t){
    printf("The multiplication table of %d is :", num);
    for(int i=0; i<t; i++){
        mulTable[i] = num*(i+1);
    }

    for(int i=0; i<t; i++){
        printf("%dX%d = %d\n", num, i+1, mulTable[i]);
    }
    printf("******************************************************\n\n");
}

int main(){

    int n,m ;
    printf("Enter how many no. of Table do you want: ");
    scanf("%d",&n);
    
    printf("Enter upto how many times of Tables do you want: ");
    scanf("%d",&m);
    
    int mulTable[n][m];

    for(int i=0;i<n;i++){
    printf("Enter the number %d: \n",i+1);
    scanf("%d",&mulTable[i][m]);
    }
     
    for(int i=0;i<n;i++){
         printTable(mulTable[i],mulTable[i][m] , m);
    }
        
    return 0;
}