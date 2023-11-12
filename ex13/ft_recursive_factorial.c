/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 16:47:51 by dekulow            #+#    #+#             */
/*   Updated: 2023/10/31 17:02:17 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb <= 1)
		return (nb);
	return (nb * ft_recursive_factorial(nb - 1));
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(int argc, char const *argv[])
// {
// 	if (argc > 1)
// 	{
// 		int arg = atoi(argv[1]);
// 		printf("Result: %d", ft_recursive_factorial(arg));
// 	}
// 	return 0;
// }
