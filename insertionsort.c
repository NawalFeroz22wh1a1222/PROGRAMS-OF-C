#include<stdio.h>
#include<conio.h>
void insertion(int [], int );
int main()
{
 int arr[30];
 int i,size;
 printf("Enter total no. of elements : ");
 scanf("%d",&size);
printf("\n Enter the elements to sort:");
 for(i=0; i<size; i++)
    scanf("%d",&arr[i]);
 insertion(arr,size);
 printf("\nAfter sorting\n");
 for(i=0; i<size; i++)
    printf(" %d",arr[i]);
 return 0;
}
void insertion(int arr[], int size)
{
 int i,j,tmp;
 for(i=0; i<size; i++)
 {
   for(j=i-1; j>=0; j--) 
   {
    if(arr[j]>arr[j+1])
    {
      tmp=arr[j];
      arr[j]=arr[j+1];
      arr[j+1]=tmp;
    }
    else
      break;
   }
 }
}
