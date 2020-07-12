/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 11:50:51 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/12 13:49:54 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int      putchar(int);
{
	write(1,&c,1);
}
void ft_print_combn( int n);
{

	char r;
	char s;

	r = '0';
	s = '1';

	while(r < n-1)
	{
		ft_putchar (',');
			ft_putchar (' ');
	}
	r++;
}
