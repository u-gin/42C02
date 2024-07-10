#include <stdio.h>
#include <ctype.h>

char *ft_strcapitalize(char *str){

    int new_word;
    char *start;

    new_word = 1;
    start = str;

    if (str == NULL)
    {
        return NULL;
    }
    
    while (*str && *str != '\0')
    {
        if (new_word && ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122) || (*str >= '0' || *str >= '9')))
        {
            if (*str >= 97 && *str <= 122)
            {
                *str = *str - 32;
            }
            new_word = 0;
        }
        else if (new_word && !((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122) || (*str >= '0' || *str >= '9')))
        {
            new_word = 0;
        }
        else if (!new_word && ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122) || (*str >= '0' || *str >= '9')))
        {
            if (*str >= 65 && *str <= 90)
            {
                *str = *str + 32;
            }
        }
        else{
            new_word = 1;
        }

        
        str++;
    }
    return start;
}

int main()
{
    char test_string_1[] = "Hello ? 42mots ? 123World";
    char test_string_2[] = "hElLo w, rLd";
    char test_string_3[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
    char test_string_4[] = "h e l l o w o r l d";
    char test_string_5[] = "";

    ft_strcapitalize(test_string_1);
    ft_strcapitalize(test_string_2);
    ft_strcapitalize(test_string_3);
    ft_strcapitalize(test_string_4);
    ft_strcapitalize(test_string_5);

    printf("Test 1 = %s\n", test_string_1);
    printf("Test 2 = %s\n", test_string_2);
    printf("Test 3 = %s\n", test_string_3);
    printf("Test 4 = %s\n", test_string_4);
    printf("Test 5 = %s\n", test_string_5);
    return 0;
}