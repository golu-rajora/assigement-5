//Write a program to print the first N even natural numbers in reverse order
#include<stdio.h>
int main()
{
    int x;
    printf("enter a number how many time even nature number in reverse order:-");
    scanf("%d",&x);
    x=x*2;
    do
    {
        printf("%d\n",x);
         x=x-2;
    }while(2<=x);
    getch();
    return 0;
}
