#include<stdio.h>
#include<conio.h>
void bubble(int a[20],int);
void main()
{
int a[20],n,i;

printf("enter the no. of elements u want to give in an array\n");
scanf("%d",&n);
printf("enter %d elements\n",n);
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("before sorting,the elements are\n");
for(i=0;i<n;i++)
{
printf("%3d",a[i]);
}
bubble(a,n);
printf("\n after sorting,the elements are\n");
for(i=0;i<n;i++)
{
printf("%3d",a[i]);
}
getch();
}
void bubble(int a[20],int n)
{
int i,j,temp;
for(i=0;i<n-1;i++)
{
for(j=i;j<n;j++)
{
if(a[i]>a[j])
{
temp=a[i];
a[i]=a[j];
a[j]=temp;
}
}
}
}
