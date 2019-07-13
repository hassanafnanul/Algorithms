#include<stdio.h>

mergeSort(int a[],int p,int r)
{
    int q;

    if(p<r)
    {
        q = (int)((p+r)/2);
        mergeSort(a, p, q);
        mergeSort(a, q+1, r);
        merge(a, p, q, r);
    }
}


merge(int a[], int p, int q, int r)
{
    int n1 = q-p+1, n2 = r-q, l[n1+1], ri[n2+1], i = 0, j = 0, k = p;

    for(i=0;i<n1;i++)
        l[i] = a[p+i];
    for(j=0; j<n2; j++)
        ri[j] = a[q+j+1];

    l[n1] = 9999;
    ri[n2] = 9999;

    i=0;
    j=0;

    for(k=p; k<=r; k++)
        if(l[i] <= ri[j])
            a[k] = l[i++];
        else
            a[k] = ri[j++];
}



main()
{
    int size, i;
    printf("Size Of Array:  ");
    scanf("%d", &size);

    int a[size];

    printf("\nEnter You array:  \n");

    for(i=0; i<size; i++)
        scanf("%d", &a[i]);
    printf("\n\nYour array:  ");
    for(i=0; i<size; i++)
        printf("%d    ", a[i]);


    mergeSort(a, 0, size-1);

    printf("\n\nYour Sorted Array:  ");
    for(i=0; i<size; i++)
        printf("%d    ", a[i]);

    printf("\n");
}
