	int a[50];
    int i,n,tg,max,j,s=0; 
    printf("nhap vao so phan tu: "); 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {        
        scanf("%d", &a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max =a[i];
        }
    }
    printf("\nSo lon nhat =%d",max);
