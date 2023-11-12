/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_foreach.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 14:17:02 by dekulow            #+#    #+#             */
/*   Updated: 2023/11/02 14:29:22 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// void	count(int x)
// {
// 	printf("Item: %d \n", x);
// }

void	ft_foreach(int *tab, int length, void (*f)(int))
{
	int	i;

	i = 0;
	while (i < length)
		f(tab[i++]);
}

// int main(void)
// {
// 	int tab[] = {1, 2, 3, 4, 5};
// 	ft_foreach(tab, 5, count);
// 	return (0);
// }
