/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dekulow <dekulow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 17:08:30 by dekulow            #+#    #+#             */
/*   Updated: 2023/11/02 21:06:54 by dekulow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	ft_display_file(int file_id)
{
	char	buffer;

	while (read(file_id, &buffer, 1) != 0)
		write(1, &buffer, 1);
}

int	main(int ac, char **av)
{
	int	file_id;

	if (ac < 2)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	else if (ac > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	file_id = open(av[1], O_RDONLY);
	if (file_id == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	ft_display_file(file_id);
	close(file_id);
	return (0);
}
