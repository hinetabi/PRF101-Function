#include <stdio.h>
#include <string.h>

int main()
{
	char a[20] = "ccbadefgba";
	char b[20] = "ba", temp;
	int i, j, count = 1;
	while (i < strlen(b))
	{
		if (a[i] == b[i])
		{
			for (j = 1; j < strlen(b); j++)
			{
				if (a[i+j] != b[i+j]) break;
				else count++;
			}
			if (count == strlen(b)) 
			{
				for (j = 0; j < strlen(b); j++)
				{
					a[i+j] = b[strlen(b)-1-j];
				}
				i = i + strlen(b);
			}
			else i++;
		}
		else i++;
	}
	printf("%s", a);
}
