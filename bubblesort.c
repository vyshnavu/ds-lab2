#include<stdio.h>
void main()
{
int i,j,a[50],s,temp;
printf("Enter the limit");
scanf("%d",&s);
printf("Enter the elements:");
for(i=0;i<s;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<s-1;i++)
for(j=0;j<s-i-1;j++)
if(a[j]>a[j+1])
{
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
}

for(i=0;i<s;i++)
printf("%d\t",a[i]);
}
