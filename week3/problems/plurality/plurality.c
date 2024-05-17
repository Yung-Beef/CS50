#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
#define MAX 9

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
} candidate;

// Array of candidates
candidate candidates[MAX];

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
    }

    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            printf("Invalid vote.\n");
        }
    }

    // Display winner of election
    print_winner();
}

// Update vote totals given a new vote
bool vote(string name)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            candidates[i].votes += 1;
            return true;
        }
    }
    return false;
}

//Print the winner (or winners) of the election
void print_winner(void)
{
    // TODO
    // find the highest number of votes via one search, then use a 2nd search to find the winner(s)
    int highvote = candidates[0].votes;
    for (int i = 0; i < (candidate_count); i++)
    {
        if (candidates[i + 1].votes > highvote)
        {
            highvote = candidates[i+1].votes;
        }
    }
    printf("Highest vote: %i\n", highvote);


    // set winner variable, iterate through the list, set winner equal to the highest one so far
    // string winner = candidates[0].name;
    // for (int i = 0; i < (candidate_count); i++)
    // {
    //     if (candidates[i + 1].votes > //the vote count of winner)
    //     {
    //         winner = candidates[i + 1].name;
    //     }
    // }


    // printf("The winner is: %s\n", winner);
    // return;
}
