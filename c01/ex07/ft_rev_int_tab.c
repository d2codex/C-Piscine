/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diade-so <diade-so@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 17:28:36 by diade-so          #+#    #+#             */
/*   Updated: 2024/10/09 19:12:45 by diade-so         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp1;
	int	temp2;

	i = 0;
	while (i < size)
	{
		temp1 = tab[i];
		temp2 = tab[size];
		tab[size] = temp1;
		tab[i] = temp2;
		i++;
		size--;
	}
}

int	main(void)
{
	int	tab[] = {1, 2, 3, 4, 5, 6};
	int	size;
	int	i;	

	size = 5;
	i = 0;
	ft_rev_int_tab(tab, size);
	while (i <= size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}
