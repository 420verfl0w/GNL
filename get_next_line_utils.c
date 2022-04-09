/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:50:38 by stales            #+#    #+#             */
/*   Updated: 2022/04/09 02:47:41 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int		ft_smem(char *buf, char c)
{
	char	*tmp;

	tmp = buf;
	while (*tmp && *tmp != c)
		tmp++;
	return (tmp - buf == BUFFER_SIZE);
}