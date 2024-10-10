/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 15:23:06 by diade-so          #+#    #+#             */
/*   Updated: 2024/10/09 15:36:01 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp1;
	int	temp2;

	temp1 = *a / *b;
	temp2 = *a % *b;
	*a = temp1;
	*b = temp2;
}

int	main(void)
{
	int	n1;
	int	n2;

	n1 = 100;
	n2 = 50;
	ft_ultimate_div_mod(&n1, &n2);
	printf("div: %d\nmod: %d\n", n1, n2);
}
