#include<stdio.h>

linearSearch(int ar[],int size, int z)
{
    int i = 0;

    while(i<size && z != ar[i])
        i++;

    if(i<size)
        printf("Found.\n");
    else
        printf("Not Found.\n");
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

    linearSearch(ar, size, z);
}
