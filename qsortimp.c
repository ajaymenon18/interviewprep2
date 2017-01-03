#include<stdio.h>
#include<stdlib.h>
int cmpfunc(const void* a,const void* b)
{
  return(*(int *)a-*(int *)b);
}
 //This function is  necessary to pass on as the function which is used in the qsort mechanism//
 int main()
 {
   int n;
   printf("enter the size of the array to be sortd");
   scanf("%d",&n);
   printf("enter the array elements");
   int index=0;

//Malloc should be used for the efficient memory management systems
  int* arr=(int*)malloc(sizeof(int)*n);
//Dynamic allocation of memory
   for(index=0;index<n;index++)
   {
    scanf("%d",&arr[index]);
   }
  printf("Sorting the element using the quick sort");
  qsort(arr,n,sizeof(int),cmpfunc);
 printf("The sorted array using the quick sort is");
for(index=0;index<n;index++)
  {
    printf("%d\n",arr[index]);
  }
return 0;
 }

