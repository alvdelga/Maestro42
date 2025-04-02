int		max(int* tab, unsigned int len)
{
	int		i;
	int		highest_number;

	if (!len)
		return (0);
	i = 0;
	highest_number = tab[0];
	while (i < len)
	{
		if (tab[i] > highest_number)
			highest_number = tab[i];
		i++;
	}
	return (highest_number);
}
