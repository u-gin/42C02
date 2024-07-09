#include <stdio.h>

char *ft_strcpy(char *dest, char *src);

char *ft_strcpy(char *dest, char *src){

    char *start = dest;

    if (src == NULL)
    {
        return "";
    }
    

    while (*src)
    {
        *dest = *src;
        src++;
        dest++;
    }

    *dest = '\0';
    
    return start;

}

int main(int argc, char const *argv[])
{

    char *src = "Hello word, my name is Eugene";
    char dest[100];

    ft_strcpy(dest, src);

    printf("%s\n", dest);
    
    return 0;
}
