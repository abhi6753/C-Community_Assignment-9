//7. Write a program to print the squares of first 10 natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\t",i*i);
        i++;
    }
    getch();
    return 0;
}