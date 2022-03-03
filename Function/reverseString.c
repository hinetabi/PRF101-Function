
#include<stdio.h>
#include<string.h>

void daoString(char s[]){
	int i;
	for (i = 0; i<strlen(s)/2; i++){
		char tg = s[i];
		s[i] = s[strlen(s) - i-1];
		s[strlen(s) - i -1] = tg;
	}
}
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
		daoString(s1);
		if (strcmp(s[i],s1) == 0)
			printf("%s\n", s[i]); 
	}
}



