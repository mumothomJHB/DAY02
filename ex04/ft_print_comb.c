{ft} c)a/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 08:33:53 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/12 09:30:48 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void ft_putchar( char c )
{
	write (1,&c,1);
}
void ft_print_comb(void)
{
	char r;
	char s;
	char t;

	r = '0';

		while ( r <= '7' )
		{
			s = r + 1;
			while ( s <='8')
			{
				t = s + 1;
				while ( t <= '9')
				{
					ft_putchar(r);
						ft_putchar(s);
						ft_putchar(t);

						if( r != '7')
						{
							ft_putchar(',');
								ft_putchar(' ');
						}
						t++;

				}
				s++;
			}
			r++;
		}
		ft_putchar('\n');
}
