/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_min.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rbaran <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/03/15 15:24:05 by rbaran            #+#    #+#             */
/*   Updated: 2016/03/15 15:34:41 by rbaran           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

int		ft_min(int *tab)
{
	int		min;

	min = 2147483647;
	if (!tab)
		return (min);
	while (tab)
	{
		if (*tab < min)
			min = *tab;
		tab++;
	}
	return (min);
}
