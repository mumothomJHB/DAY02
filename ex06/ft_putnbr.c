/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mumothom <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 10:57:34 by mumothom          #+#    #+#             */
/*   Updated: 2020/07/12 11:33:11 by mumothom         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>

void putchar( char c )
{ 
	write(1, &c,1);
}

void ft_putnbr(int nb);
{
	char r;
	
	r = '0';
		while( r<= 42)
		{ 
			ft putchar(r);
				r++;
		}
}
int main()
{
	ft_putnbr(42);
		return(0);
}
