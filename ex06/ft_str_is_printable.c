#include <stdio.h>
#include <ctype.h>

int ft_str_is_printable(char *str){
    if (str == NULL)
    {
        return -1;
    }

    while (*str)
    {
        if (!isprint(*str))
        {
            return 0;
        }
        str++;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    char *test_string_1 = "helloworld\x09";
    char *test_string_2 = "\x09 world";
    char *test_string_3 = "HELLOWORLD";
    char *test_string_4 = "hello\tworld";
    char *test_string_5 = "";

    int result1 = ft_str_is_printable(test_string_1);
    int result2 = ft_str_is_printable(test_string_2);
    int result3 = ft_str_is_printable(test_string_3);
    int result4 = ft_str_is_printable(test_string_4);
    int result5 = ft_str_is_printable(test_string_5);

    printf("Test 1 = %d\n", result1);
    printf("Test 2 = %d\n", result2);
    printf("Test 3 = %d\n", result3);
    printf("Test 4 = %d\n", result4);
    printf("Test 5 = %d\n", result5);
    return 0;
}
