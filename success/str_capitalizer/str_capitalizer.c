/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvdelga <alvdelga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 14:25:27 by alvdelga          #+#    #+#             */
/*   Updated: 2025/02/26 15:32:28 by alvdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int main(int argc, char **argv)
{
	int i;
	int j;
	char c;

	j = 1;

	if (argc == 1)
	{
		write(1, "\n", 1);
		return (0);
	}

	while(argv[j])
	{
		i = 0;
		while(argv[j][i])
		{
			if((i == 0) && (argv[j][i] >= 'a' && argv[j][i] <= 'z'))
				c = (argv[j][i] - 32);
			else if ((argv[j][i - 1] == ' ') && (argv[j][i] >= 'a' && argv[j][i] <= 'z'))
				c = (argv[j][i] - 32);
			else if ((argv[j][i] >= 'A' && argv[j][i] <= 'Z') && ( i > 0 && argv[j][i - 1] != ' '))
				c = (argv[j][i]) + 32;
			else
				c = (argv[j][i]);
			write(1, &c, 1);
			i++;
		}
		write(1, "\n", 1);
		j++;
	}
	return (0);
}