#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int number;
    struct node *next;
} node;

int main(int argc, char *argv[])
{
    node *list = NULL;

    for (int i = 1; i < argc; i++)
    {
        int number = atoi(argv[i]);

        node *n = malloc(sizeof(node));
        if (n == NULL)
        {
            //free memory thus far
            return 1;
        }
        n->number = number;
        n->next = NULL;

        // if list is empty
        if (list == NULL)
        {
            // this node is the whole list
            list = n
        }

        // if list has numbers already
        else
        {
            for (node *ptr = list; ptr != NULL; ptr = ptr->next)
            {
                // if at the end of list
                if (ptr->next = NULL)
                {
                    
                }
            }
        }



        list = n;

    }

    // print whole list
    node *ptr = list;
    while (ptr != NULL)
    {
        printf("%i\n", ptr->number);
        ptr = ptr->next;
    }
}
