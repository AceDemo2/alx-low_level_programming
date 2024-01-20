#include <stdlib.h>

/**
 * is_space - Checks if a character is a space.
 * @c: The character to check.
 *
 * Return: 1 if @c is a space, 0 otherwise.
 */
int is_space(char c)
{
    return (c == ' ');
}

/**
 * count_words - Counts the number of words in a string.
 * @str: The input string.
 *
 * Return: The number of words.
 */
int count_words(char *str)
{
    int count = 0;
    int in_word = 0;

    while (*str)
    {
        if (is_space(*str))
        {
            in_word = 0;
        }
        else if (!in_word)
        {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

/**
 * strtow - Splits a string into words.
 * @str: The input string.
 *
 * Return: A pointer to an array of strings (words).
 */
char **strtow(char *str)
{
    char **words;
    int num_words;
    int word_index;
    int word_length;
    int in_word;
    int i;

    num_words = count_words(str);

    if (str == NULL || num_words == 0)
        return NULL;

    words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL)
        return NULL;

    word_index = 0;
    word_length = 0;
    in_word = 0;

    while (*str)
    {
        if (is_space(*str))
        {
            if (in_word)
            {
                words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
                if (words[word_index] == NULL)
                {
                    for (i = 0; i < word_index; i++)
                        free(words[i]);
                    free(words);
                    return NULL;
                }

                for (i = 0; i < word_length; i++)
                    words[word_index][i] = *(str - word_length + i);

                words[word_index][word_length] = '\0';

                word_index++;
                word_length = 0;
                in_word = 0;
            }
        }
        else
        {
            word_length++;
            in_word = 1;
        }
        str++;
    }

    if (in_word)
    {
        words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL)
        {
            for (i = 0; i <= word_index; i++)
                free(words[i]);
            free(words);
            return NULL;
        }

        for (i = 0; i < word_length; i++)
            words[word_index][i] = *(str - word_length + i);

        words[word_index][word_length] = '\0';

        word_index++;
    }

    words[word_index] = NULL;

    return words;
}

