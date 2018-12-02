#include <stdio.h>
#include <stdlib.h>

int bubble_sort(int arr[], int n)
{
    int i, j, temp, swapped;
    for(i=0; i<n-1; i++)
    {
        swapped= 0;
        for(j=0; j<n-i-1; j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp= arr[j];
                arr[j]= arr[j+1];
                arr[j+1]= temp;

                swapped = 1;  //swapping occurred
            }
        }
        /* if no swapping has been done over the full iteration then array is already sorted, hence no need to check
        for further passes*/
        if(swapped == 0)
            break;
    }
    return arr;
}
int main()
{
    int *arr;
    int n, i;
    printf("\nEnter the size of the array:- ");
    scanf("%d",&n);
    arr=(int *)malloc(n*sizeof(int));
    printf("\nEnter the array to be sorted:- \n");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    arr = bubble_sort(arr, n);
    printf("\nAfter sorting :-\n ");
    for(i=0; i<n; i++)
        printf("%d\t", arr[i]);

        printf("\n");
}
