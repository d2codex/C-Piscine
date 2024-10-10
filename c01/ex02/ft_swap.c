/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 13:44:54 by diade-so          #+#    #+#             */
/*   Updated: 2024/10/08 14:32:33 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(void)
{
	int	n1;
	int	n2;

	n1 = 5;
	n2 = 3;
	printf("n1: %d\nn2: %d\n", n1, n2);
	ft_swap(&n1, &n2);
	printf("n1: %d\nn2: %d\n", n1, n2);
	printf("\n");
}
