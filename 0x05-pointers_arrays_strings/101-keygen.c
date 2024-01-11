#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
/**
 * generate_password - Generate a random password with a random length.
 *
 * Return: A dynamically allocated string containing the password.
 */
char *generate_password(void)
{
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()_-+=<>?/[]{}";

    int length;
    char *password;

    srand(time(NULL));

    length = rand() % 25 + 1;
 
    password = malloc((length + 1) * sizeof(char));

    if (password == NULL)
    {
        perror("Memory allocation error");
        exit(EXIT_FAILURE);
    }

    {
        int i;
        for (i = 0; i < length; i++)
        {
            int index = rand() % (sizeof(charset) - 1);
            password[i] = charset[index];
        }
    }

    password[length] = '\0';

    return password;
}

int main(void)
{
    char *password = generate_password();

    printf("Generated Password: %s\n", password);

    free(password);

    return 0;
}

