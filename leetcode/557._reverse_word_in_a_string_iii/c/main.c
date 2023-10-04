#include <stdio.h>
#include <stdlib.h>

char *reverseWords(char *s);

int main(void)
{
	char	*result;
	result = reverseWords("Let's take LeetCode contest");
	printf("%s", result);
	free(result);
	return (0);
}
