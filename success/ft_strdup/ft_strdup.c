
char	*ft_strdup(char *src)
{
	int		length;
	char	*result;

	length = 0;
	while (src[length])
		length++;
	result = malloc(sizeof(char) * length + 1);
	length = 0;
	while (src[length])
	{
		result[length] = src[length];
		length++;
	}
	return (result);
}
