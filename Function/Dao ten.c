#include <stdio.h>
#include <string.h>

int main()
{
	char s1[100];
	gets(s1);
	char reverse[100] = "";
	char temp[50];
	int i, j, n;
	 
	n = strlen(s1);
	 
	for(i = n-1; i >= 0; --i)
	{
		for(j = 0; i >= 0 && s1[i] != ' '; --i, ++j)
		{
			temp[j] = s1[i];
			printf("%c", temp[j]);
		}
	 	
	    temp[j] = '\0';
	    printf("__");
	    strcat(reverse, strrev(temp));
	    strcat(reverse, " ");
	}
	
   	printf("\nChuoi ban dau:\n %s", s1);
   	printf("\nChuoi sau khi da duoc dao nguoc:\n %s", reverse);
 
   	return 0;
}
