/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/29 16:35:08 by diade-so          #+#    #+#             */
/*   Updated: 2024/09/25 12:33:28 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write (1, "N\n", 2);
	else
		write (1, "P\n", 2);
}
/*
int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if (argc < 2)
		return (1);
	while (i < argc - 1)
	{
		ft_is_negative(atoi(argv[i + 1]));
		i++;
	}
}
*/

int	main(void)
{
	ft_is_negative(-21341234);
	ft_is_negative(28);
	ft_is_negative(-2147483648);
	ft_is_negative(2147483647);
	ft_is_negative(0);
}
