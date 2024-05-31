// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "dictionary.h"

// Represents a node in a hash table
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
} node;

// TODO: Choose number of buckets in hash table
const unsigned int N = 26;

// Hash table
node *table[N];

// Returns true if word is in dictionary, else false
bool check(const char *word)
{
    // TODO
    return false;
}

// Hashes word to a number
unsigned int hash(const char *word)
{
    // TODO: Improve this hash function
    return toupper(word[0]) - 'A';
}

// Loads dictionary into memory, returning true if successful, else false
bool load(const char *dictionary)
{
    // TODO: load it as a hash table
    FILE *dict = fopen(dictionary, "r");

    // TODO: did it open correctly?

    node *bank[26];
    for (int i = 0; i < 25; i++)
    {
        bank[i] = NULL;
    }

    char *word[LENGTH + 1];
    int charcounter = 0;

    while (fread(word, sizeof(char), 1, dict) == 1)
    {
        // copy a line of the dictionary into the word hash table
        if (strcmp(word[charcounter], "\n") == 0)
        {
            // store word in bank, character-by-character, based on charcounter
            node *temp = malloc(charcounter * sizeof(char));
            for (int i = 0; i < (charcounter + 1); i++)
            {
                temp->word[i] = *word[i];
            }
            temp->next = NULL;

            // find where it goes first
            // figure out which letter bucket
            int b = (*word[0] - 'a');

            // if that bucket is empty, just add the word
            if (bank[b] == NULL)
            {
                bank[b]->next = temp;
            }
            else
            {
                // else, search through everything linked in that bucket
                // for loop based on wordcounter, i < wordcounter
                for (int i = 0; i < charcounter; i++)
                {
                    // if ith letter is smaller than THE NEXT NODE'S ith letter, store it here
                    if (word[i] < *bank[b]->word[i])
                    {
                        temp->next = bank[b];
                        bank[b] = temp;
                        break;
                    }

                    // if ith letter is bigger than THE NEXT NODE'S ith letter, go to the next node
                    else if (word[i] > bank[b]->word[i])
                    {
                        bank[b]->next = temp;
                        break;
                    }

                    // else if ith letter is equal to THE NEXT NODE's ith letter, switch to the next letter
                }
            }

            charcounter = 0;
        }
        else
        {
            charcounter++;
        }
    }







    // TODO: close the file

    return false;
}

// Returns number of words in dictionary if loaded, else 0 if not yet loaded
unsigned int size(void)
{
    // TODO
    return 0;
}

// Unloads dictionary from memory, returning true if successful, else false
bool unload(void)
{
    // TODO
    return false;
}
