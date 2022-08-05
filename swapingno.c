#include<stdio.h>
#include<conio.h>
int main()
{
int no1,no2;
printf("enter no1\nno2");
scanf("%d%d",&no1,&no2);
printf("number before swaping\n");
printf("no1 is %d\nno2 is %d",no1,no2);
no1=no1+no2;
no2=no1-no2;
no1=no1-no2;
printf("\nnumber after swaping\n");
printf("no1 is %d\nno2 is %d",no1,no2); 
return 0;  
}