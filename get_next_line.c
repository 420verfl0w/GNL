/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:50:32 by stales            #+#    #+#             */
/*   Updated: 2022/04/09 03:14:23 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>

char	*get_next_line(int fd)
{
	static	char buf[BUFFER_SIZE];
	char	*tmp;
	char	*str;

	if (ft_smem(buf, 0xA))
		read(fd, buf, BUFFER_SIZE);
	tmp = buf;
	while (*tmp && *tmp != 0xA)
		tmp++;
}