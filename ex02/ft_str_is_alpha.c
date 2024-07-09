#include <stdio.h>
#include <ctype.h>

int ft_str_is_alpha(char *str);

int ft_str_is_alpha(char *str){
    if(str == NULL){
        return 0;
    }

    while (*str)
    {
        if (!isalpha(*str))
        {
            return 0;
        }
        
        str++;
    }
    return 1;
}

int main(int argc, char const *argv[])
{
    char *test_string_1 = "HelloWorld";
    char *test_string_2 = "Hel1lo w3orld";
    char *test_string_3 = "";
    int result1 = ft_str_is_alpha(test_string_1);
    int result2 = ft_str_is_alpha(test_string_2);
    int result3 = ft_str_is_alpha(test_string_3);

    printf("Test 1 = %d\n", result1);
    printf("Test 2 = %d\n", result2);
    printf("Test 3 = %d\n", result3);
    return 0;
}
