//5. Write a program to print the first 10 even natural numbers in reverse order.
#include<stdio.h>
#include<conio.h>
int main()
{
    int num,count =10;
    num = count*2;
    while(count>=1)
    {
        if(num%2==0)
        {
            printf("%d\t",num);
            count--;
        }
        num--;
    }
    getch();
    return 0;
}