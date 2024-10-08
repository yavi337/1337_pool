/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddou <mhaddou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 17:05:40 by mhaddou           #+#    #+#             */
/*   Updated: 2024/07/13 17:08:11 by mhaddou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	index;

	index = 2;
	if (nb <= 1)
	{
		return (0);
	}
	while (nb % index != 0)
	{
		index++;
	}
	if (index == nb)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
