/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed404 <mohamed404@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:58:42 by mohamed404        #+#    #+#             */
/*   Updated: 2024/06/18 19:30:35 by mohamed404       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void	ft_div_mod(int  a, int  b, int  *div, int   *mod)
{
	if (b > 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}

void	main(void)
{
    int a;
    int b;
    int c;
    int d;   

    a = 12;
    b = 7;
    ft_div_mod(a, b , &c, &d);
    printf("%d / %d = %d et le reste est %d\n", a, b, c, d);
}
