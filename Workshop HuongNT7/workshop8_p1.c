#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(){
	
	char str[120];
	
	printf("Word Counter");
	printf("\n============\n");
	printf("String to be counter: ");
	
	scanf("%[^\n]", &str);
	printf("%s\n", str);
	int count = 0, i;
	int len = strlen(str);
	bool check = false;
	for (i = 0; i < len; i++){
		if (str[i] == ' ') {
			check = false;
		} else {
			if (!check) {
				count++;
			}
			check = true;
		}
	}
	printf("count = %d\n", count);

return 0;
}




