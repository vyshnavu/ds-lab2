#include<stdio.h>
void main()
{
int a[50],s,i,j,temp,min;
printf("Enter the limit:");
scanf("%d",&s);
printf("Enter the elements:");
for(i=0;i<s;i++)
scanf("%d",&a[i]);
for(i=0;i<s-1;i++)
{
 min=i;
 for(j=i+1;j<s;j++)
 if (a[j]<a[min])
  min=j;
 temp=a[i];
 a[i]=a[min];
 a[min]=temp;
}
for(i=0;i<s;i++)
 printf("%d\t",a[i]);
}
