#include <stdio.h>
int get_max(int arr[],int n)
{
 int max=0,i;
  for (i=0;i<n;i++)
  {
   if (arr[i]>max) {max=arr[i];}
  }return max;
}
int get_min(int arr[], int n)
{
 int min=0,i;
 for(i=0,i<n;i++)
  {
   if (min>arr[i] || min==0) {min=arr[i];}
  }return min;

}
int get_sum(int arr[],int n)
{
    int sum=0,i;
  for(i=0;i<n;i++)
   {
    if ((arr[i] % 2) ==0 ) {sum+=arr[i];}
   }return sum;
}
int get_count_first_el(int arr[], int n)
{
   int i,count=0;  
  for(i=1;i<n;i++)
  {
    if (arr[i]==arr[0]) {count++;}
  }return count;
}
  void menu(int index,int arr[],int n)
{
   switch(index)
   case 0: printf("%d",get_max(arr[],n));
   case 1: printf("%d",get_min(arr[],n));
   case 2: printf("%d",get_sum(arr[],n));
   case 3: printf("%d",get_count_first(arr[],n));
   default: printf("");
}

