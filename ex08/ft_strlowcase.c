#include <stdio.h>
#include <ctype.h>

char *ft_strlowcase(char *str)
{
    char *start = str;
    if (str == NULL)
    {
        return NULL;
    }

    while (*str)
    {
        *str = tolower(*str);
        str++;
    }
    return start;
}

int main(int argc, char const *argv[])
{
    char test_string_1[] = "HelloWorld123";
    char test_string_2[] = "hello world";
    char test_string_3[] = "HELLOWORlD";
    char test_string_4[] = "helloworld";
    char test_string_5[] = "";

    ft_strlowcase(test_string_1);
    ft_strlowcase(test_string_2);
    ft_strlowcase(test_string_3);
    ft_strlowcase(test_string_4);
    ft_strlowcase(test_string_5);

    printf("Test 1 = %s\n", test_string_1);
    printf("Test 2 = %s\n", test_string_2);
    printf("Test 3 = %s\n", test_string_3);
    printf("Test 4 = %s\n", test_string_4);
    printf("Test 5 = %s\n", test_string_5);
    return 0;
}
