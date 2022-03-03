#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

#define STR_LEN 80
#define WORD_LEN 20
#define NWORDS 20
int string_words(char s[], char words[][WORD_LEN + 1]);
int main()
{
	char s[STR_LEN + 1] = "    How    are   you", words[NWORDS][WORD_LEN + 1];
	
	int nWords = 0, i;
	nWords = string_words(s, words);
	
	for(i = 0; i < nWords; i++)
		printf("words[%d] = %s\n", i, words[i]);
	
	system("pause");
}
int string_words(char s[], char words[][WORD_LEN + 1])
{
	int i, j, count = 0;
	bool inWord = false;
	for(i = 0; i <= strlen(s); i++)
	{
		// the first character of a new word
		if(!inWord && !isblank(s[i]))
		{
			inWord = true;
			j = 0;
			words[count][j++] = s[i];
		}
		else if(inWord && !isblank(s[i]) && s[i] != '\0')
		{
			words[count][j++] = s[i];
		}
		else if(inWord && (isblank(s[i]) || s[i] == '\0'))
		{
			inWord = false;
			words[count++][j] = '\0';			
		}
		
	}
	return count;
}
