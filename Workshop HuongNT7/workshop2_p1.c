#include<stdlib.h>
#include<stdio.h>

int main(){
	double price, gst, pst, total;
	
	printf("Enter the price : "); 
	scanf("%lf", &price);
	
	gst = (double) 0.08 * price;
	pst = (double) 0.07 * price;
	total =(double) price + gst + pst;
	
	printf("Price : $%7.2lf\n", price);
	printf("GST   : $%7.2lf\n", gst);
	printf("PST   : $%7.2lf\n", pst);	
	printf("Total : $%7.2lf\n", total);
	system("pause"); 
	return 0;
}




