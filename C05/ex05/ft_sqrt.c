/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddou <mhaddou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/13 16:51:48 by mhaddou           #+#    #+#             */
/*   Updated: 2024/07/13 16:56:21 by mhaddou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 0;
	while (sqrt * sqrt < nb)
	{
		++sqrt;
	}
	if (sqrt * sqrt == nb)
	{
		return (sqrt);
	}
	return (0);
}
