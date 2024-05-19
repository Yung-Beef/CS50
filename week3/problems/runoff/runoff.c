#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max voters and candidates
#define MAX_VOTERS 100
#define MAX_CANDIDATES 9

// preferences[i][j] is jth preference for voter i
int preferences[MAX_VOTERS][MAX_CANDIDATES];

// Candidates have name, vote count, eliminated status
typedef struct
{
    string name;
    int votes;
    bool eliminated;
} candidate;

// Array of candidates
candidate candidates[MAX_CANDIDATES];

// Numbers of voters and candidates
int voter_count;
int candidate_count;

// Function prototypes
bool vote(int voter, int rank, string name);
void tabulate(void);
bool print_winner(void);
int find_min(void);
bool is_tie(int min);
void eliminate(int min);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: runoff [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    candidate_count = argc - 1;
    if (candidate_count > MAX_CANDIDATES)
    {
        printf("Maximum number of candidates is %i\n", MAX_CANDIDATES);
        return 2;
    }
    for (int i = 0; i < candidate_count; i++)
    {
        candidates[i].name = argv[i + 1];
        candidates[i].votes = 0;
        candidates[i].eliminated = false;
    }

    voter_count = get_int("Number of voters: ");
    if (voter_count > MAX_VOTERS)
    {
        printf("Maximum number of voters is %i\n", MAX_VOTERS);
        return 3;
    }

    // Keep querying for votes
    for (int i = 0; i < voter_count; i++)
    {

        // Query for each rank
        for (int j = 0; j < candidate_count; j++)
        {
            string name = get_string("Rank %i: ", j + 1);

            // Record vote, unless it's invalid
            if (!vote(i, j, name))
            {
                printf("Invalid vote.\n");
                return 4;
            }
        }

        printf("\n");
    }

    // Keep holding runoffs until winner exists
    while (true)
    {
        // Calculate votes given remaining candidates
        tabulate();

        // Check if election has been won
        bool won = print_winner();
        if (won)
        {
            break;
        }

        // Eliminate last-place candidates
        int min = find_min();
        bool tie = is_tie(min);

        // If tie, everyone wins
        if (tie)
        {
            for (int i = 0; i < candidate_count; i++)
            {
                if (!candidates[i].eliminated)
                {
                    printf("%s\n", candidates[i].name);
                }
            }
            break;
        }

        // Eliminate anyone with minimum number of votes
        eliminate(min);

        // Reset vote counts back to zero
        for (int i = 0; i < candidate_count; i++)
        {
            candidates[i].votes = 0;
        }
    }
    return 0;
}

// Record preference if vote is valid
bool vote(int voter, int rank, string name)
{
    // record the voter's vote or return false if that candidate doesn't exist
    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            preferences[voter][rank] = i;
            return true;
        }
    }
    return false;
}

// Tabulate (total) the votes for non-eliminated candidates
void tabulate(void)
{
    // iterate through each voter
    for (int i = 0; i < voter_count; i++)
    {
        for (int c = 0; c < candidate_count; c++)
        {
            for (int j = 0; j < candidate_count; j++)
            {
                // 
            }
        }


        // iterate through voter i's ranked votes
        for (int j = 0; j < candidate_count; j++)
        {
            // compare voter i's jth vote against each candidate name
            // if vote 0 is for a valid candidate, count it
            // else if for j + 1 is for a valid candidate, count it
            // else do nothing



            for (int c = 0; c < candidate_count; c++)
            {
                // if vote is for an eliminated candidate, break
                if (strcmp(candidates[preferences[i][j]].name, candidates[c].name) && candidates[c].eliminated == true)
                {
                    break;
                }
                // otherwise increase their tally
                else if (strcmp(candidates[preferences[i][j]].name, candidates[c].name))
                {
                    candidates[c].votes += 1;
                    break;
                }
            }
        }
    }
    return;
}

// Print the winner of the election, if there is one
bool print_winner(void)
{
    // get the highest number of votes
    string contender = "";
    int votes = 0;
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes > votes)
        {
            contender = candidates[i].name;
            votes = candidates[i].votes;
        }
    }

    // if there is one winner with more than half of the votes
    if (votes > ((float) (voter_count / 2)))
    {
        printf("%s wins!\n", contender);
        return true;
    }
    // if there is no winner
    else
    {
        return false;
    }
}

// Return the minimum number of votes any remaining candidate has
int find_min(void)
{
    int votes = candidates[0].votes;
    for (int i = 1; i < candidate_count; i++)
    {
        // if both candidates are remaining, check which is lower and save their number of votes as the lowest
        if ((candidates[i].votes < candidates[i - 1].votes) && (candidates[i].eliminated == false) && (candidates[i - 1].eliminated == false))
        {
            votes = candidates[i].votes;
        }
    }
    return votes;
}

// Return true if the election is tied between all candidates, false otherwise
bool is_tie(int min)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes != min)
        {
            return false;
        }
    }
    return true;
}

// Eliminate the candidate (or candidates) in last place
void eliminate(int min)
{
    for (int i = 0; i < candidate_count; i++)
    {
        if (candidates[i].votes == min && candidates[i].eliminated == false)
        {
            candidates[i].eliminated = true;
        }
    }
    return;
}
