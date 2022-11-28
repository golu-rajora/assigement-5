// Write a program to print a table of N.
#include<stdio.h>
int main()
{
    int x,i=1;
    printf("enter a number which table print:-");
    scanf("%d",&x);
    do
    {

        printf("%d\n",x*i);
        i++;
    }while(i<=10);
    getch();
    return 0;
}
