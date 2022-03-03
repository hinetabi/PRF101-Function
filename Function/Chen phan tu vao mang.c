void chen(int a[],int n,int k)
{
 	int x;
 	printf("nhap so can chen:");
 	scanf("%d",&x);
 	for(int i=n;i>=k;i--)
	{
 		a[i]=a[i-1];
 	}
 	a[k]=x;
 	n++;
}
