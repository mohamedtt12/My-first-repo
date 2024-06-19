/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   my_version.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohamed404 <mohamed404@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/16 21:13:42 by mohamed404        #+#    #+#             */
/*   Updated: 2024/06/16 22:26:28 by mohamed404       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void    ft_write(int   n)
{
    char    c;

    c = n / 10 + 48;
    write (1, &c, 1);
    c = n % 10 + 48 ;
    write (1, &c, 1);

}

void    ft_print_comb2(void)
{
    int a;
    int b;

    a = 0;
    while (a < 99)
    {
        b = a + 1;
        while (b < 100)
        {
            ft_write(a);
            write(1, " ", 1);
            ft_write(b);
            write(1, ", ", 2);
            b++;
        }
        a++;
    }
}
int main (void)
{
    ft_print_comb2();
    return 0;
}