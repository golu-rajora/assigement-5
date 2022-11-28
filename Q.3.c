//Write a program to print the first N natural numbers in reverse order
#include<stdio.h>
int main()
{
    int x,i=1;
    printf("enter a number  print first  nature number IN reverse order:-");
    scanf("%d",&x);
    do
    {
        printf("\n %d",x);
        x--;

    }while(i<=x);
    getch();
    return 0;
}
