include<stdio.h>
void main()
{
 int a[50],s,i,j,x;
 printf("Enter the limit:");
 scanf("%d",&s);
 printf("Enter the elements:");
 for(i=0;i<s;i++)
 {
  scanf("%d",&a[i]);
 }
 for(i=1;i<s;i++)
  {
    x=a[i];
    for(j=i-1;j>=0,a[j]>x;j--)
    
    a[j+1]=a[j];
    a[j+1]=x;
  }
 for(i=0;i<s;i++)
  printf("%d\t",a[i]);
}
