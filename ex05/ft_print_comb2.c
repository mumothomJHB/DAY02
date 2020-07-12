/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 13:51:04 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/12 13:53:59 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int putchar( int);
{
	write(1,&c,1);
}
void ft_print_comb2(void)
{
	char r;
	char s;
	char t;

	r = '0';
		while( r<= 99)
		{
			s = r + 1;
			while( s<= 99)
			{
				t = s + 1;
				while( t<= 99)
				{
					ft_putchar(r);
						ft_putchar(s);
						ft_putchar(t);

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
}

