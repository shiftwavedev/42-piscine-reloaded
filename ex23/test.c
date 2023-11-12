/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 13:17:02 by dekulow            #+#    #+#             */
/*   Updated: 2023/11/02 13:22:13 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "ft_point.h"

void	set_point(t_point *point)
{
	point->x = 42;
	point->y = 21;
}

// int	main(void)
// {
// 	t_point	point;
// 	set_point(&point);
// 	printf("Result: x=%d & y=%d", point.x, point.y);
// 	return (0);
// }
