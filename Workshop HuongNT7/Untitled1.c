#include<stdio.h>

int main(){
	FILE *fp = NULL;
	char phrase[61];
	char phrase1[] = "fputs work";
	fp = fopen("alpha.txt", "r");
	if (fp != NULL){
		//fprintf(fp , "%s \n", phrase);
		fscanf(fp, "%60[^\n]", phrase);
		printf("You read : %s\n", phrase);
		fclose(fp);
		rewind;
	} else 
		printf("Failed to open the file\n");

return 0;
}




