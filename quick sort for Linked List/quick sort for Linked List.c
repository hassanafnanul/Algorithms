#include<stdio.h>

///  ab  ac  ad ae af


/*
12345


*/

struct node
{
    char word[20];
    int location;
    struct node *next;
};

int size = 0;
struct node *head;

insert_after(char a[])
{
    struct node *temp, *var = head;
    temp = (struct node*)malloc(sizeof(struct node));
    strcpy(temp->word, a);
    temp->location = size;
    temp->next = NULL;

    if(head == NULL)
    {
        head = temp;
        ///  temp->location = 0;
    }
    else
    {
        while(var->next != NULL)
            var = var->next;
        var->next = temp;
    }

    size++;
}

display()
{
    struct node *i = head;
    while(i != NULL)
    {
        printf("\n%s", i->word);
    ///  puts(i->word);
        i = i->next;
    }
 ///   printf("\n\nSize of each Node = %d\n\n", 2*sizeof(struct node));
}




int check(char a[], char b[])
{
    int i = 0;

    while(a[i] != '\0' || b[i] != '\0')
    {
        if(a[i]<b[i])
            return 1;
        else if(a[i]>b[i])
            return 2;
        else
            i++;
    }

    if(a[i] == '\0')
        return 1;
}



swap(struct node *w1, struct node *w2)
{
  ///  printf("\n\nswap start.\n\n w1->word = %s    w2->word = %s", w1->word, w2->word);
  ///  struct node * w3;
  ///  w3->word = "One";
   /// w3->location = 999;
  ///  w3->next = NULL;

    char w3word[20];


    strcpy(w3word, w1->word);
  ///  printf("\n\nswap cpy 1 w1->word = %s    w3word = %s", w1->word, w3word);
    strcpy(w1->word, w2->word);
    strcpy(w2->word, w3word);
}




quicksort(int l, int r)
{

    int q;
    if(l<r)
    {

        q = partision(l, r);
        quicksort(l, q-1);
        quicksort(q+1, r);
    }
}

int partision(int l, int r)
{

    struct node *var = head, *var1 = head, *var2 = head;


    while(var2->location != r)
        var2 = var2->next;

  ///      printf("\n\nVar2->word = %s\n\n", var2->word);


    while(var1->location != l)
        var1 = var1->next;

    struct node *pivot = var1;

///   var = head;


    int i = l, j = r;
    while(i<j)
    {

        while(i<=r && check(var1->word,pivot->word) == 1)
        {
            var1 = var1->next;
            i++;
        }
     ///   printf("\n\n\ni   after the loop = %d\n\n", i);

   ///  printf("var2->word  = %s[%d][%d]   ", var2->word, var2->location, var2);


        while(j>=l && check(var2->word,pivot->word) == 2)
        {
        ///    printf("\n\nwork done. j = %d    i = %d   l = %d, check(var2->word,pivot->word) = %d   var2->word = %s[%d], pivot->word = %s\n\n", j, i, l, check(var2->word,pivot->word), var2->word, var2, pivot->word);

      ///      printf("\n\nbefor calculation    %s[%d]       size of each node = %d\n\n", var2->word, var2, sizeof(var2));
            int v = var2;

            var2 = v - 40;

       ///     printf("\n\nafter calculation    %s[%d]\n\n", var2->word, var2);


        ///    printf("\n\n\n                 j = %d   var2->word = %s    var = %d   var2->location = %d\n\n", j, var2->word, var2, var2->location);
            j--;
        }
   ///     printf("\n\n\nj = %d   var2->word = %s   var2->location = %d\n\n", j, var2->word, var2->location);



   ///     printf("\n\nDone  i = %d    j = %d\n\n", i, j);

        if(i<j)
            swap(var1, var2);
    }


  ///  printf("\n\nbefor swap    pivot->word = %s    var2->word = %s", pivot->word, var2->word);
    swap(pivot, var2);
  ///  printf("\n\nafter swap    pivot->word = %s    var2->word = %s", pivot->word, var2->word);


    return j;
}




main()
{
 ///   head = NULL;
    int n, i;
    char word[20];


    printf("Number Of words:  ");
    scanf("%d", &n);
    printf("Type your words.\n");
    for(i=0; i<n; i++)
    {
        printf("%d. ", i+1);
        scanf("%s", &word);
     ///  gets(word);
        insert_after(word);
    }
    printf("\nYour words:  ");
    display();

    quicksort(0, size-1);

    /// swap(struct node *w1, struct node *w2)

    printf("\n\n\n\nYour words(After sorting):  ");
    display();
    printf("\n\n");

}
