/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:48:08 by diade-so          #+#    #+#             */
/*   Updated: 2024/09/25 14:19:45 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0';
	while (n1 <= '9')
	{
		n2 = n1 + 1;
		while (n2 <= '9')
		{
			n3 = n2 + 1;
			while (n3 <= '9')
			{
				write (1, &n1, 1);
				write (1, &n2, 1);
				write (1, &n3, 1);
				if (n1 != '7')
					write (1, ", ", 2);
				n3++;
			}
			n2++;
		}
		n1++;
	}
	write (1, "\n", 1);
}

int	main(void)
{
	ft_print_comb();
}
