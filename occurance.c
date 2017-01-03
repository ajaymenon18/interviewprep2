#include<stdio.h>
#include<stdlib.h>
//using the exclusive or operation.
int cmpfunc(const void*a,const void*b)
{
  return(*(int*)a-*(int*)b);
}

int getoddocc(int *arr,int size)
{
  int index,result=0;
 for(index=0;index<size;index++)
 {
   result=result^arr[index];
  
 }
return result;
}


int main()
{
 int index,*arr;
 int size;
printf("Enter the size  of the array");
scanf("%d",&size);
arr=(int*)malloc(sizeof(int)*size);
printf("Enter the elements of the array");
for(index=0;index<size;index++)
{
 scanf("%d",&arr[index]);
}
   qsort(arr,size,sizeof(int),cmpfunc);

printf("The sorted array is");
for(index=0;index<size;index++)
{
  printf("%d\n",arr[index]);
}

  int result=getoddocc(arr,size);
 result?printf("The odd occurance number is=%d\n",result):printf("The result not found");

  return 0;
 }
