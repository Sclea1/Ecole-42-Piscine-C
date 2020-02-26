∂* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/29 19:26:11 by sclea             #+#    #+#             */
/*   Updated: 2020/01/30 16:48:21 by sclea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_print_alphabet(void)
{
	int h;

	h = 48;
	while (h <= 57)
	{
		putchar(h);
		h++;
	}
	putchar('\n');
}

int		main(void)
{
	ft_print_alphabet();
	return (0);
}
