#include <stdio.h>
#include <math.h>
#include <string.h>

int main(){
	char str1[1001];
//	char str2[100];
	int dem[300] = {0};
	gets(str1);
//	scanf("%s", str2);

	
	for (int i = 0; i < strlen(str1); i++){
		if (str1[i] >= 65 &&  str1[i] <= 90)
			dem[str1[i] + 32]++;
		dem[str1[i]]++;
	}	
//	for (int i = 0; i < strlen(str2); i++){
//		dem[str2[i]]++;
//	}
//	for (int i = 97; i<123; i++){
//		if (dem[i] != 0){
//			printf("%c", i);
//		}
//	}
//	printf("\n");
	for (int i = 97 ; i<=122; i++){
		if (dem[i] != 0) 
			printf("%c %d\n",i, dem[i]);
	}
	for (int i = 35 ; i<=47; i++){
		if (dem[i] != 0) 
			printf("%c %d\n",i, dem[i]);
	}
return 0;
}




