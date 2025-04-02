/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvdelga <alvdelga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 13:33:34 by alvdelga          #+#    #+#             */
/*   Updated: 2025/02/26 14:01:15 by alvdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putnbr(int n)
{
	char c;

	if (n > 9)
		ft_putnbr(n/10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

int main(void)
{
	int n;

	n = 1;
	while (n <= 100)
	{
		if (n % 3 == 0 && n%5 == 0)
			write(1, "fizzbuzz\n", 9);
		else if (n % 3 == 0)
			write(1, "fizz\n", 5);
		else if (n%5 == 0)
			write(1, "buzz\n", 5);
		else
		{
			ft_putnbr(n);
			write(1, "\n", 1);
		}
		n++;
	}
	return (0);
}
