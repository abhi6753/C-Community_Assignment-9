//2. Write a program to print the first 10 natural numbers.
#include<stdio.h>
#include<conio.h>
int main()
{
    int i=1;
    while(i<=10)
    {
        printf("%d\t",i++);
    }
    getch();
    return 0;
}