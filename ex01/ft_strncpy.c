#include <stdio.h>

char *ft_strncpy(char *dest, char *src, unsigned int n){
    char *start  = dest;

    int i = 0;
    if (src == NULL)
    {
        return "";
    }

    while (*src && i < n)
    {
        *dest = *src;
        src++;
        dest++;
        i++;
    }

    while (*dest)
    {
        *dest = '\0';
        dest++;
    }
    
    
    return start;

}

int main(int argc, char const *argv[])
{
    char *src = "Hello word, my name is Eugene";
    char dest[10];

    ft_strncpy(dest, src, 7);

    printf("%s\n", dest);
    return 0;
}
