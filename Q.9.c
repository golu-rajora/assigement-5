//Write a program to print cubes of the first N natural numbers
#include<stdio.h>
int main()
{
    int x,i=1;
    printf("enter a number how many time cubes:-");
    scanf("%d",&x);
    do
    {

        printf("%d\n",i*i*i);
        i++;
    }while(i<=x);
    getch();
    return 0;
}
