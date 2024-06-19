/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed404 <mohamed404@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 22:17:28 by mohamed404        #+#    #+#             */
/*   Updated: 2024/06/18 22:17:31 by mohamed404       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	m;
	int	n;

	if (!tab)
		return ;
	n = size - 1;
	m = 0;
	while (m < n)
	{
		ft_swap(&tab[m], &tab[n]);
		m++;
		n--;
	}
}

void	main(void)
{
	int	c[]={1,2,3,4,5};


	ft_rev_int_tab(c, 5);
	for (int i=0;i<5;i++)
		printf("%d \n",c[i]);
}
