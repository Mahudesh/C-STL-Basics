#include<stdio.h>
void main()
{
char name[15];
int mark[5],i,tot=0;
float avg;
printf("Enter the students name : ");
scanf("%s",name);
printf("Enter the mark : ");
for(i=0;i<5;i++)
{
    scanf("%d",&mark[i]);
}
for(i=0;i<5;i++)
{
    tot=tot+mark[i];
}
avg=tot/5.0;
printf("%sYour average is %f",name,avg);
}