#include <stdio.h>
#include <string.h>

#define MAX_WORDS 10
#define MAX_LENGTH 20

int main() 
{
  // Define the list of words to autocomplete.
  char* words[MAX_WORDS] = {"property", "probability", "program", "process", "progress", "problem", "propagation", "performance", "perfect", "perfume"};

  // Ask the user for the first letter of their word.
  char input[MAX_LENGTH];
  printf("Enter the first letter of your word: ");
  scanf("%s", &input);

  // Find all words in the list that start with the input letter.
  char* matches[MAX_WORDS];
  int num_matches = 0;
  for (int i = 0; i < MAX_WORDS; i++) 
  {
    if (words[i][0] == input[0]) 
	{
      matches[num_matches] = words[i];
      num_matches++;
    }
  }

  // If there are no matches, inform the user and exit.
  if (num_matches == 0)
	  
 {
    printf("No words found starting with '%c'.\n", input[0]);
    return 0;
  }

  // Loop until the user inputs the correct word.
  char* word = NULL;
  while (word == NULL) 
  {
    // Print out the matches so far.
    printf("Matches: ");
    for (int i = 0; i < num_matches; i++) 
	{
      printf("%s ", matches[i]);
    }
    printf("\n");

    // Ask the user for the next letter of their word.
    char next_char;
    printf("Enter the next character (or '#' to quit): ");
    scanf(" %c", &next_char);

    // If the user enters '#', exit the loop.
    if (next_char == '#')
	{
      break;
    }

    // Remove any matches that don't match the next character.
    for (int i = 0; i < num_matches; i++) 
  {
      if (matches[i][strlen(input)] != next_char) 
	  {
        matches[i] = NULL;
      }
    }

    // Remove any NULL entries from the matches array.
    int j = 0;
    for (int i = 0; i < num_matches; i++) 
	{
      if (matches[i] != NULL) 
	  {
        matches[j] = matches[i];
        j++;
      }
    }
    num_matches = j;

    // If there are no matches left, inform the user and exit.
    if (num_matches == 0) 
	{
      printf("No words found starting with %s%c\n", input, next_char);
      return 0;
    }

    // If there is only one match left, it is the correct word.
    if (num_matches == 1) 
	{
      word = matches[0];
      break;
    }

    // Otherwise, continue the loop and ask for the next character.
    input[strlen(input)] = next_char;
 }

  // Compute the percentage of input letters out of the whole word.
  float percent_input = (float) strlen(input) / strlen(word) * 100;

  // Print out the final word and percentage.
  printf("The word is '%s'.\n", word);
  printf("You entered %.2f%% of the word.\n", percent_input);

  return 0;
}



