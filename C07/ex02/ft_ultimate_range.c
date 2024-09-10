/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaddou <mhaddou@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/16 00:02:30 by mhaddou           #+#    #+#             */
/*   Updated: 2024/07/16 21:25:26 by mhaddou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*dest;
	int	index;

	index = 0;
	if (max <= min)
	{
		*range = NULL;
		return (0);
	}
	dest = malloc (sizeof (int) * (max - min));
	if (dest == NULL)
	{
		*range = NULL;
		return (-1);
	}
	while (index < (max - min))
	{
		dest[index] = min + index;
		index++;
	}
	*range = dest;
	return (max - min);
}
