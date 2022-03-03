
#include<stdio.h>
#include<string.h>

int main()
{
	char s[100][100];
	int n,i;
//	strcpy(s1,s);
	//s1 = strrev(s);
	scanf("%d", &n);
	while (getchar() != '\n');
	for (i = 0; i<n; i++){
		
		scanf("%s", &s[i]);
		while (getchar() != '\n');

	}
	for (i = 0; i<n; i++){
		char s1[100];
		strcpy(s1,s[i]);
		strrev(s1);
		if (strcmp(s[i],s1) == 0)
			printf("%s\n", s[i]); 
	}
}



