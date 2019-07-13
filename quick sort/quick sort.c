#include<stdio.h>

quicksort(int a[], int l, int r)
{
    int q;
    if(l<r)
    {
        q = partision(a, l, r);
        quicksort(a, l, q-1);
        quicksort(a, q+1, r);
    }
}

int partision(int a[], int l, int r)
{
    int pivot = a[l], i = l, j = r, s1, s2;
    while(i<j)
    {
        while(i<=r && a[i]<=pivot)
            i++;

        while(j>=l && a[j]>pivot)
            j--;

        if(i<j)
        {
            s1 = a[i];
            a[i] = a[j];
            a[j] = s1;
        }
    }

    s2 = a[j];
    a[j] = a[l];
    a[l] = s2;

    return j;
}

main()
{
    int n, i;
    printf("Enter The Size:  ");
    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++)
        scanf("%d", &a[i]);

    printf("\n\nYour Array:  ");
    for(i=0; i<n; i++)
        printf("%d    ", a[i]);

    quicksort(a, 0, n-1);

    printf("\n\nYour sorted Array:  ");
    for(i=0; i<n; i++)
        printf("%d    ", a[i]);

    printf("\n");
}
