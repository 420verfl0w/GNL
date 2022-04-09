/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: stales <stales@student42.fr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/09 01:50:26 by stales            #+#    #+#             */
/*   Updated: 2022/04/09 22:02:12 by stales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 0x100
# endif

# include <stddef.h>

char			*ft_memchr(const char *s, int c);
char			*ft_memread(int fd, char **ptr);
char			*ft_memjoin(char *s1, char *s2);
int				ft_strlen(char *str);

// Get next line functions
char			*get_next_line(int fd);

#endif