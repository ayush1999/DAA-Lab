#include <stdio.h>
 
int binarySearch(int a[], int i, int f, int x)
{
   if (r >= l)
   {
        int m = l + (r - l)/2;
        if (a[m] == x)  
            return mid;

        if (a[m] > x) 
          return binarySearch(a, i, m-1, x);
        else  
          return binarySearch(a, m+1, f, x);
   }
 
 
   return -1;
}
 
int main(void)
{
   int a[] = {20, 30, 40, 50, 80};
   int s = sizeof(a)/ sizeof(a[0]);
   int x = 10;
   int r = binarySearch(arr, 0, s-1, x);
   if(r==-1)
    cout<<"\n Not Found ";
   else
    cout<<"\n Found At "<<r;
   return 0;
}