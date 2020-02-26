/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sclea <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/01 20:17:05 by sclea             #+#    #+#             */
/*   Updated: 2020/02/01 20:20:14 by sclea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int f;

	f = nb;
	if (power == 0)
		return (1);
	if (power <0)
		return (0);
	if (power == 1)
		return nb;
	else
	{
		nb = f * ft_recursive_power(nb, power - 1);
		return (nb);
	}
}
