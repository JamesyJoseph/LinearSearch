#include<stdio.h>
int main()
  { 
    int i,n,a[20],item,flag=0;
    printf("Enter the size of array\t");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
    printf("Enter the element to be search \n :");
    scanf("%d",&item);
    for(i=0;i<n;i++)
      {
        if(a[i]==item)
         {
           flag=1;
           printf("\n item founded in %d position",i+1);
           break;
         }
       }
    if(flag==0)
     { 
       printf("Element is not found");
     }
    return 0;
  } 
