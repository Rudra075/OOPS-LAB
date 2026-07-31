#include <stdio.h>

int main()
{
    int n,i,sum=0;
    int arr[100];
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");

    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);

    ptr=arr;

    for(i=0;i<n;i++)
        sum+=*(ptr+i);

    printf("Sum = %d",sum);

    return 0;
}