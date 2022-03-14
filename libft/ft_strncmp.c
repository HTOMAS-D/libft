/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akergoat <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/25 15:48:18 by akergoat          #+#    #+#             */
/*   Updated: 2022/03/04 13:54:49 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int	c;
	int				i;

	i = 0;
	c = 0;
	while ((c < n) && !i && (s1[c] != '\0') && (s2[c] != '\0'))
	{
		i = (unsigned char)s1[c] - (unsigned char)s2[c];
		c++;
	}
	if (c < n && !i && (s1[c] == '\0' || s2[c] == '\0'))
			i = (unsigned char)s1[c] - (unsigned char)s2[c];
	return (i);
}
/*
int main()
{
	char s1[] = "olaaaaa";
	char s2[] = "olaaazz";

	int x = ft_strncmp(s1, s2, 6);
	printf("%d\n", x);
}
*/
