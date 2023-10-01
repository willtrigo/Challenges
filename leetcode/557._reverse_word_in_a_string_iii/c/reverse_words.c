#include <unistd.h>
#include <string.h>
#include <stdlib.h>

#include <stdio.h>

void getWords(char *s, char *new_word, size_t *i)
{
    size_t word_start;
    size_t word_end;

    word_start = *i;
    word_end = *i;
	printf("foi");
    while (s[*i] != ' ' || s[*i])
    {
        i++;
        word_end++;
    }
	i++;
	word_end++;
	printf("%zu\n", word_end);
    while (word_end > word_start)
        *(new_word++) = s[word_end--];
}

char *reverseWords(char *s)
{
    size_t  len;
    size_t  i;
    char    *new_word;
    
    len = strlen(s);
    i = 0;
    new_word = malloc(sizeof(char) * (len + 1));
    while (*s)
    {
        getWords(s, new_word, &i);
    }
    new_word[i] = '\0';
    return (new_word);
}
