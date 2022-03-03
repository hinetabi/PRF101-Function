void daonguocchieu(int a[],int n)  
{
 	for(int i=0;i<=n/2;i++)
  	{
   		int temp=a[i];
   		a[i]=a[n-1-i];
   		a[n-1-i]=temp;
  	}
 	printf("\n mang dao nguoc la: ");
 	for(int i=0;i<n;i++)
     {
        printf("%d \t",a[i]);
     } 
}
