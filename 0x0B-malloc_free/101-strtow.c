
#include <stdlib.h>

int is_space(char c) {
    return c == ' ' || c == '\t' || c == '\n';  // You can add more space characters if needed
}

int count_words(char *str) {
    int count = 0;
    int in_word = 0;

    while (*str) {
        if (is_space(*str)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }

    return count;
}

char **strtow(char *str) {
    if (str == NULL || *str == '\0') {
        return NULL;
    }

    int num_words = count_words(str);
    if (num_words == 0) {
        return NULL;
    }

    char **words = (char **)malloc((num_words + 1) * sizeof(char *));
    if (words == NULL) {
        return NULL;
    }

    int word_index = 0;
    int word_length = 0;
    int in_word = 0;

    while (*str) {
        if (is_space(*str)) {
            if (in_word) {
                words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
                if (words[word_index] == NULL) {
                    // Free the allocated memory on failure
                    for (int i = 0; i < word_index; i++) {
                        free(words[i]);
                    }
                    free(words);
                    return NULL;
                }

                // Copy the word to the array
                for (int i = 0; i < word_length; i++) {
                    words[word_index][i] = *(str - word_length + i);
                }
                words[word_index][word_length] = '\0';

                word_index++;
                word_length = 0;
                in_word = 0;
            }
        } else {
            word_length++;
            in_word = 1;
        }
        str++;
    }

    if (in_word) {
        // Process the last word
        words[word_index] = (char *)malloc((word_length + 1) * sizeof(char));
        if (words[word_index] == NULL) {
            // Free the allocated memory on failure
            for (int i = 0; i <= word_index; i++) {
                free(words[i]);
            }
            free(words);
            return NULL;
        }

        // Copy the last word to the array
        for (int i = 0; i < word_length; i++) {
            words[word_index][i] = *(str - word_length + i);
        }
        words[word_index][word_length] = '\0';

        word_index++;
    }

    words[word_index] = NULL;  // Set the last element to NULL

    return words;
}



