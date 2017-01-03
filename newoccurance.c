#include<stdlib.h>
#include<stdio.h>
int cmpfunc(const void*a,const void*b)
{
  return(*(int*)a-*(int*)b);
}
# define max 10000
int main()
{
  int hash[max]={0};
  int index,size,*arr;
  printf("Enter the size of the array to be entered");
 scanf("%d",&size);
 arr=(int*)malloc(sizeof(int)*size);
 printf("Enter the array elements");
 for(index=0;index<size;index++)
   {
     scanf("%d",&arr[index]);
   }
  qsort(arr,size,sizeof(int),cmpfunc);
 for(index=0;index<size;index++)
  {
     if(hash[arr[index]]!=1)
      {
        hash[arr[index]]=1;
      }
     else
      {
         hash[arr[index]]++;
      }
  }
      for(index=0;index<size;index++)
       { 
           if(hash[arr[index]]%2!=0)
           {
             printf("The number %d occured odd number of times",arr[index]);
          }
       }
   }
      
