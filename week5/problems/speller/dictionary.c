// Implements a dictionary's functionality

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
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
    FILE dictionary = fopen(*dictionary, "r");

    // TODO: did it open correctly?

    node bank = node[26];
    char *word[LENGTH + 1];
    int charcounter = 0;

    while (fread(word, sizeof(char), 1, dictionary) == 1)
    {
        // copy a line of the dictionary into the word hash table
        if (word[charcounter] == "\n")
        {
            // store word in bank, character-by-character, based on charcounter
            *temp = malloc(charcounter * sizeof(char));


            // find where it goes first
            // figure out which letter bucket
            int b = (word[0] - 'a')

            // search through everything linked in that bucket

            // for loop based on wordcounter, i < wordcounter
            for (int i = 0; i < wordcounter; i++)
            {
            // if ith letter is smaller than THE NEXT NODE'S ith letter, store it here
            if ()

            // if ith letter is bigger than THE NEXT NODE'S ith letter, go to the next node
            // else if ith letter is equal to THE NEXT NODE's ith letter, switch to the next letter, etc.
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
