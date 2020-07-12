/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 14:00:34 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/12 14:00:42 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void ft_putchar (char c)
{
	write (1, &c, 1);

}

void ft_print_reverse_alphabet(void)
{
	char c;
	char m;	
	
	m = 'z';
	c = 'a';


	while ( m >= c )
	{
		ft_putchar(m);
		m--;
	}
	
}


