/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jarumuga <jarumuga@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/16 14:00:51 by jarumuga          #+#    #+#             */
/*   Updated: 2024/05/16 14:43:56 by jarumuga         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>

void	display_file(int fd)
{
	char	buf;

	while (read(fd, &buf, 1) != 0)
	{
		write(1, &buf, 1);
	}
}

int	main(int argc, char**argv)
{
	int	fd;

	if (argc != 2)
	{
		if (argc < 2)
			write(2, "File name missing.\n", 19);
		else
			write(2, "Too many arguments.\n", 20);
		return (1);
	}
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	display_file(fd);
	close(fd);
	return (0);
}
