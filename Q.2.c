//Write a program to print the first N natural numbers.
#include<stdio.h>
int main()
{
    int x,i=1;
    printf("enter a number  print first  nature number:-");
    scanf("%d",&x);
    do
    {
        printf("\n %d",i);
        i++;

    }while(i<=x);
    getch();
    return 0;
}
