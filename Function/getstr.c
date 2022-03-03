#include<stdio.h>
#include<string.h>
#define MAX 9

void getstr(char s[], int max);
int main(){
	char s[MAX + 1] = "?";
	
	getstr(s, MAX);
	printf("s = %s", s);
return 0;
}
void getstr(char s[], int max) {
     int i, c;

     i = 0;
     while((c = getchar()) != '\n' && c != EOF)
         if (i < max)
             s[i++] = (char) c;
     s[i] = '\0';
 }



