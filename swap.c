#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[20],b;
int i;
clrscr();
printf("enter the string");
scanf("%s",a);
for(i=0;i<strlen(a);i=i+2)
{
b=a[i];
a[i]=a[i+1];
a[i+1]=b;
}
printf("After swap the string is:%s",a);
getch();
}
