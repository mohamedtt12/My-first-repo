/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed404 <mohamed404@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/19 01:01:28 by mohamed404        #+#    #+#             */
/*   Updated: 2024/06/19 01:01:47 by mohamed404       ###   ########.fr       */
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

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	n;

	i = 0;
	if (!tab)
		return ;
	while (i < size)
	{
		j = i;
		n = i;
		while (j < size)
		{
			if(tab[j] < tab[n])
				n = j;
			j++;
		}
		ft_swap(&tab[i], &tab[n]);
		i++;	
	}
}

void	main(void)
{
	int	c[6]={12,18,1,4,9,7};

	ft_sort_int_tab(c,6);
	for (int i=0;i< 6;i++)
		printf("%d ",c[i]);
	printf("\n");
}
