	char a[100]; 
	gets(a);
	int i;
	for (i = 0; i < strlen(a); i++)
	if (a[i-1] == ' ' || i == 0)
	{
		if (a[i] >= 'a' && a[i] <= 'z') a[i] -= 32;
	}
	printf("%s", a);
