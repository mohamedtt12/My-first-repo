/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed404 <mohamed404@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 20:06:47 by mohamed404        #+#    #+#             */
/*   Updated: 2024/06/18 20:07:04 by mohamed404       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putstr(char	*str)
{
	int	n;
	char	c;

	n = 0;
	while (str[n] != '\0')
	{
		c = str[n];
		write(1, &c, 1);
		n++;
	}
}

void	main(void)
{
	ft_putstr("hello world");
}
