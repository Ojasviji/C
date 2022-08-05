#include<stdio.h>
#include<conio.h>
int main()
{
int no1,no2,i;
printf("enter no1\nno2");
scanf("%d%d",&no1,&no2);
printf("Before Swaping\n");
printf("no1 is: %d\nno2 is: %d",no1,no2);
i=no1;
no1=no2;
no2=i;
printf("\n\nAfter Swaping\n");
printf("no1 is: %d\nno2 is: %d",no1,no2);
return 0;
}