/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed404 <mohamed404@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 18:30:34 by mohamed404        #+#    #+#             */
/*   Updated: 2024/06/18 18:35:29 by mohamed404       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

void    ft_swap(int *a, int *b)
{
    int tmp;

    tmp = *a;
    *a = *b;
    *b = tmp;
}
void    main(void)
{
    int a;
    int b;

    a = 5;
    b = 10;
    ft_swap(&a, &b);
    printf("a = %d  and  b = %d\n", a, b);
}
