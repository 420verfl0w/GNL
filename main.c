/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:54:39 by stales            #+#    #+#             */
/*   Updated: 2022/04/09 02:39:57 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <fcntl.h>
#include <unistd.h>

int	main(int ac, char **av)
{
	int	fd;

	fd = open(av[1], O_RDONLY);
	if (fd < 0)
		return (1);
	close(fd);
	return (0);
}