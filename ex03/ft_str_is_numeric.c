#include <stdio.h>
#include <ctype.h>

int ft_str_is_numeric(char *str);

int ft_str_is_numeric(char *str){
    if (str == NULL)
    {
        return -1;
    }

    while (*str)
    {
        if (!isdigit(*str))
        {
            return 0;
        }
        str++;
    }

    return 1;
}

int main(int argc, char const *argv[])
{
    char *test_string_1 = "123 w4";
    char *test_string_2 = "12309";
    char *test_string_3 = "";
    int result1 = ft_str_is_numeric(test_string_1);
    int result2 = ft_str_is_numeric(test_string_2);
    int result3 = ft_str_is_numeric(test_string_3);

    printf("Test 1 = %d\n", result1);
    printf("Test 2 = %d\n", result2);
    printf("Test 3 = %d\n", result3);
    
    return 0;
}
