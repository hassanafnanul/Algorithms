#include<stdio.h>

quickSort(int a[],int pivot,int i,int j)
{
    int swap;int o = 1;
    if(i <= j)
    {
        while(a[i] <= a[pivot])
        {
            i++;
        }

        while(a[j] > a[pivot])
        {
            j--;
        }

        if(i<=j)
        {
            swap = a[i];
            a[i] = a[j];
            a[j] = swap;
        }
        if(i>j)
        {
            swap = a[pivot];
            a[pivot] = a[j];
            a[j] = swap;
        }
        quickSort(a, pivot, i, j);
    }
 ///   printf("\n           %d            k = %d            ALLAH            i = %d        j = %d\n",o, k, i, j);
}

main()
{
    int i, j, r, pivot = 1, p = 1, k;
    printf("Size Of Array:  ");
    scanf("%d", &r);

    int a[r+2], q = r;

    printf("\nEnter You array:  \n");

    for(i=1; i<=r; i++)
        scanf("%d", &a[i]);      a[r+1] = 9999;


    printf("\n\nYour array:  ");
    for(i=1; i<=r; i++)
        printf("%d    ", a[i]);

  ///  printf("\n\ni = %d\nj = %d\npivot = %d\nr = %d\n\n\n", p, q, pivot, r);

    for(k=0;k<r;k++)
    {
        quickSort(a, pivot, p, q);


        printf("\n\nYour ssssorted array:  ");
    for(i=1; i<=r; i++)
        printf("%d    ", a[i]);
    }


    printf("\n\nYour sorted array:  ");
    for(i=1; i<=r; i++)
        printf("%d    ", a[i]);


}
