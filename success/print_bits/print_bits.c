/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alvdelga <alvdelga@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/26 16:16:54 by alvdelga          #+#    #+#             */
/*   Updated: 2025/02/26 16:34:31 by alvdelga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	char c;

	i = 7;
	while (i >= 0)
	{
		c = ((octet >> i) &1) + '0';
		write(1, &c, 1);
		i--;
	}
}
