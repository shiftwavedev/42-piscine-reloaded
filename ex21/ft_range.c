/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 14:03:29 by dekulow            #+#    #+#             */
/*   Updated: 2023/11/01 22:18:59 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	len;
	int	i;

	if (min >= max)
		return (NULL);
	len = max - min;
	i = 0;
	result = (int *)malloc(len * sizeof(int));
	if (result == NULL)
		return (NULL);
	while (i != len)
	{
		result[i] = min++;
		i++;
	}
	return (result);
}

// #include <stdio.h>

// int	main(int ac, char *av[])
// {
// 	int	*test;
// 	int firstValue, secondValue;

// 	if (ac > 1)
// 	{
// 		firstValue = atoi(av[1]);
// 		secondValue = atoi(av[2]);
// 		test = ft_range(firstValue, secondValue);
// 		for (int i = 0; i < secondValue - firstValue; i++)
// 			printf("Item n°%d => Value %d\n", i, test[i]);
// 	}
// }
