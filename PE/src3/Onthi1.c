#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    char s[100];
    gets(s);
    
    int i, dem = 0;
    for (i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z') dem++;
        else dem--;
    }
    
    if (dem > 0)
    {
        for (i = 0; i < strlen(s); i++)
        if (s[i] >= 'A' && s[i] <= 'Z') s[i] += 32;
    }
    else
    {
        for (i = 0; i < strlen(s); i++)
        if (s[i] >= 'a' && s[i] <= 'z') s[i] -= 32;
    }
    
    printf("%s", s);
    
    return 0;
}
