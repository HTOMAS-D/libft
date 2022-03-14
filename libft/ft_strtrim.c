/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:01:16 by htomas-d          #+#    #+#             */
/*   Updated: 2022/03/04 16:46:11 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Allocates with malloc and returns a copy of ’s1’ with the characters 
//specified in ’set’ removed from the beginning and the end of the string.
static int	ft_char_is_set(char c, char const *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	i;
	size_t	start;
	size_t	end;

	if (!set || !s1)
		return (NULL);
	start = 0;
	while (s1[start] && ft_char_is_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_char_is_set(s1[end - 1], set))
		end--;
	str = (char *) malloc (sizeof(*s1) * (end - start + 1));
	if (!str)
		return (NULL);
	i = 0;
	while (start < end)
		str[i++] = s1[start++];
	str[i] = 0;
	return (str);
}
