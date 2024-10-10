/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 14:33:39 by diade-so          #+#    #+#             */
/*   Updated: 2024/10/09 15:19:01 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int	main(void)
{
	int	n1;
	int	n2;
	int	div;
	int	mod;

	n1 = 10;
	n2 = 2;
	ft_div_mod(n1, n2, &div, &mod);
	printf("div: %d\nmod: %d\n", div, mod);
}
