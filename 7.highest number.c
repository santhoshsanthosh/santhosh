#include <stdio.h>

int main()
{
    int i, n;
   int a[6];

    printf("Enter total number of elements(1 to 6): ");
    scanf("%d", &n);
    printf("\n");

 
    for(i = 0; i < n; ++i)
    {
       printf("Enter Number %d: ", i+1);
       scanf("%d", &arr[i]);
    }


    for(i = 1; i < n; ++i)
    {

       if(arr[0] < arr[i])
           a[0] = a[i];
    }
    printf("Largest element = %d", a[0]);
    printf("smallest element = %d",a[4]

    return 0;
}
