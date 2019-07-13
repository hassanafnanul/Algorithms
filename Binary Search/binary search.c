#include<stdio.h>

binary_search(int ar[], int l,int h,int z)
{
    if(l<=h)
    {
        int mid = (l + h)/2;
        if(ar[mid]<z)
            binary_search(ar, mid+1, h, z);
        else if(ar[mid]>z)
            binary_search(ar, l, mid-1, z);
        else if(ar[mid] == z)
            printf("\nFound.\n");
    }
    else
        printf("\nNot Found.\n");
}

main()
{
    int size;
    printf("Size Of Array:  ");
    scanf("%d", &size);

    int ar[size], i, z;

    printf("Enter The Array:\n");
    for(i = 0; i<size; i++)
        scanf("%d", &ar[i]);

    printf("\n\nYour Array:  ");
    for(i = 0; i<size; i++)
        printf("%d    ", ar[i]);

    printf("\nNumber to search:  ");
    scanf("%d", &z);

    binary_search(ar, 0, size-1, z);
}
