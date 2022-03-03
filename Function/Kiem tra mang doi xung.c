int kiemtramangdoixung(int a[],int n)
{
 	int co=1;
 	for(int i=0;i<n/2;i++)
 	{
 		if(a[i]!=a[n-1-i]) co=0;
 	}
 	return co; 
}
