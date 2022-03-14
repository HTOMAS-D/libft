/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:02:18 by htomas-d          #+#    #+#             */
/*   Updated: 2022/03/04 16:55:18 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*buffer;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
		i++;
	buffer = (char *)malloc(i + 1);
	if (!buffer)
		return (NULL);
	i = 0;
	while (s[i])
	{
		buffer[i] = (*f)(i, s[i]);
		i++;
	}
	buffer[i] = 0;
	return (buffer);
}
