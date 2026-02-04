#include <stdio.h>

int main() {
int rows,cols;
printf("enter no of rows:");
scanf("%d",&rows);
printf("enter no of cols:");
scanf("%d",&cols);
for(int i =1;i<=rows;i++)
{
    for(int j=1;j<=cols;j++)
    {
        if(j==cols||i==rows||(i+j)>=(rows+1))
        {
        printf("* ");
    }
    else
    {
        printf("  ");
    }
    }
    printf("\n");
}
}
