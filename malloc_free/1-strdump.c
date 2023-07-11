#include "main.h"
/**
 * 
*/

char *_strdup(char *str);
{
    char *duplicate = NULL:
    size_t length;

    if (str == NULL)
    return (NULL);

    lenght = strlen(str);
    duplicate = malloc((length + 1) * sizeof(char));

    if (duplicate != NULL)
        strcpy(duplicate, str);

        return duplicate;
}