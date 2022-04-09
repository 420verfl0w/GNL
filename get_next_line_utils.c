/* ************************************************************************** */
/*      */
/*:::      ::::::::   */
/*   get_next_line_utils.c  :+:      :+:    :+:   */
/*          +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr> +#+  +:+       +#+        */
/*      +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:50:38 by stales            #+#    #+#             */
/*   Updated: 2022/04/09 16:04:13 by stales           ###   ########.fr       */
/*      */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>
#include <stdlib.h>

char	*ft_memchr(const char *s, int c)
{
	char	*tmp;

	tmp = (char *)s;
	while (*tmp && *tmp != (unsigned char)c)
		tmp++;
	if (*tmp == (unsigned char)c)
		return (tmp);
	return (NULL);
}

char	*ft_memread(int fd, char **ptr)
{
	char	buf[BUFFER_SIZE + 1];
	int 	bytes;

	if (fd < 0)
		return (NULL);
	bytes = 0;
	while (bytes < BUFFER_SIZE + 1)
		buf[bytes++] = 0;
	while (bytes && !ft_memchr(buf, '\n'))
	{
		bytes = read(fd, buf, BUFFER_SIZE);
		if (bytes < 0)
			break ;
		*ptr = ft_memjoin(*ptr, buf);
	}
	return (*ptr);
}

char	*ft_memjoin(char *s1, char *s2)
{
	char 	*new;
	char 	*tmp;
	char	*s;

	new = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!new)
		return (NULL);
	tmp = new;
	s = s1;
	while (s1 && *s1)
		*tmp++ = *s1++;
	if (s)
		free(s);
	while (s2 && *s2)
		*tmp++ = *s2++;
	if (new)
		*tmp = 0;
	return (new);
}

int	ft_strlen(char *str)
{
	char	*tmp;
	if (!str)
		return (0);
	tmp = str;
	while (*tmp)
		tmp++;
	return (tmp - str);
}