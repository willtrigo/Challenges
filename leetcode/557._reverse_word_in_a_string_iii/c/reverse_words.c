#include <string.h>
#include <stdlib.h>

size_t	getWords(char *s, char *new_word, size_t word_init, size_t word_start)
{
	size_t	 	word_end;
	size_t	 	word_stop;

	word_stop = word_start;
	while (s[word_start])
	{
		if (s[word_start] == ' ')
			break ;
		word_start++;
		word_stop++;
	}
	word_end = word_stop + 1;
	word_start = word_init;
	while (word_stop > word_init)
		new_word[word_start++] = s[--word_stop];
	new_word[word_start] = ' ';
	return (word_end);
}

char	*reverseWords(char *s)
{
	size_t	len;
	size_t	i;
	char	*new_word;

	len = strlen(s);
	i = 0;
	new_word = malloc(sizeof(char) * (len + 10));
	while (s[i])
		i = getWords(s, new_word, i, i);
	new_word[len] = '\0';
	return (new_word);
}
