#include<stdio.h>
#include<conio.h>
int main()
{
int principal,rate,time,SI;
printf("enter principal\nrate\time");
scanf("%d%d%d",&principal,&rate,&time);
SI=(principal*rate*time)/100;
printf("SI : %d",SI); 
return 0;
}