/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utlimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed404 <mohamed404@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 19:36:59 by mohamed404        #+#    #+#             */
/*   Updated: 2024/06/18 19:37:02 by mohamed404       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_ultimate_div_mod(int	*a, int	*b)
{
	int	tmp;

	tmp = *a;
	if (b > 0)
	{
		*a = *a / *b;
		*b = tmp % *b;
	}
}

void	main(void)
{
	int	a;
	int	b;

	a = 12;
	b = 7;
	ft_ultimate_div_mod(&a, &b);
	printf("12 / 7 = %d et le reste est %d\n", a, b);
}
