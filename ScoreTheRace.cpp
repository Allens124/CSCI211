#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

// Create a boolean function that determines whether the input is valid
bool goodInput(int teamArray[])
{
    // Create a temp variable will that store the number of racers in each team
    int temp = 0;

    // Use a for loop to search for the first non-zero number of racers in the array
    for (int i = 0; i < 26; i++)
    {
        if (teamArray[i] != 0)
        {
            temp = teamArray[i];
            break;
        }
    }

    // If it happens that the array contains only zeroes, return false
    if (temp == 0)
    {
        return false;
    }

    // Use a for loop to make sure that every element of the array is equal to either temp or 0
    for (int i = 0; i < 26; i++)
    {
        if (teamArray[i] != temp && teamArray[i] != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    // Create an outcome string that will store the race outcome
    string outcome = "";
    
    // Use a while true loop so that the program will repeat indefinitely
    while (true)
    {
        // Prompt the user for an input, and store it in outcome
        cout << "Enter the outcome of a race or \"done\" if you are finished: ";
        cin >> outcome;
        
        // Allow the user to break out of the loop by entering "done"
        if (outcome == "done")
        {
            break;
        }

        // Create a teams array that will represent each team, based on a letter in the alphabet
        int teams[26] = {0};

        // Create a score array that will represent the score of each time, corresponding to each index
        double score[26] = {0};
        
        // Using a for loop, fill each array with the number of each letter that appears and their respective score
        for (int i = 0; i < outcome.size(); i++)
        {
            teams[outcome[i]-'A'] += 1;
            score[outcome[i]-'A'] += i+1;
        }

        // Verify whether outcome is valid, based on whether each team has the same number of racers
        if (!goodInput(teams))
        {
            // If outcome is not valid, print an error message, and proceed to the next iteration of the loop
            cout << "Invalid input! ";
            continue;
        }

        // Create a lowestIndex variable that stores the lowest index whose score is not zero
        int lowestIndex = 0;

        // Create a lowestScore variable that stores the lowest score that is not zero
        double lowestScore = 0;
        
        // Using a for loop, compute the score of each team, and store it in score
        for (int i = 0; i < 26; i++)
        {
            if (teams[i] != 0)
            {
                score[i] /= 1.0*teams[i];
            }
            if (score[i] != 0)
            {
                lowestIndex = i;
                lowestScore = score[i];
            }
        }

        // Create a teamCount variable that stores the total number of teams
        int teamCount = 0;

        // Create a teamSize variable that stores the number of runners on each team
        int teamSize = 0;

        // Using a for loop, store values in the necessary variables
        for (int i = 0; i < 26; i++)
        {
            if (score[i] < lowestScore && score[i] != 0)
            {
                lowestIndex = i;
                lowestScore = score[i];
            }
            if (teams[i] != 0)
            {
                teamSize = teams[i];
                teamCount++;
            }
        }
        
        // Print every team and their respective score, provided that it is greater than 0
        cout << "There are " << teamCount << " teams.\n";
        cout << "Each team has " << teamSize << " runners.\n";
        cout << "Team \t Score" << endl;
        for (int i = 0; i < 26; i++)
        {
            if (teams[i] != 0)
            {
                cout << char('A'+i) << "\t " << setprecision(3) << score[i] << endl;
            }
        }
        cout << "The winning team is " << char('A'+lowestIndex) << " with a score of " << lowestScore << ".\n";
    }
    return 0;
}