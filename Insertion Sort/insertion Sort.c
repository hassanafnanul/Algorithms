#include<stdio.h>

insertion_sort(int ar[],int size)
{
    int i, j, key;
    for(j = 1; j<size; j++)
    {
        key = ar[j];
        i = j-1;
        while(i>=0 && ar[i] > key)
        {
            ar[i+1] = ar[i];
            i--;
        }
        ar[i+1] = key;
    }
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

///    printf("\nNumber to search:  ");
///    scanf("%d", &z);

    insertion_sort(ar, size);

    printf("\n\nYour Sorted Array:  ");
    for(i = 0; i<size; i++)
        printf("%d    ", ar[i]);
}
