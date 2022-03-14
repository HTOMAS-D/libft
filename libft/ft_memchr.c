/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:58:55 by htomas-d          #+#    #+#             */
/*   Updated: 2022/03/04 17:00:12 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// looks for c starting in void *, looks n bytes in front of it

void	*ft_memchr(const void *str, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(str + i) == (unsigned char) c)
		{
			return ((void *)(str + i));
		}
		i++;
	}
	return (NULL);
}
/*int main()
{
    char str[] = "henrique";
    char *pos = ft_memchr(str, 'r', 8);
    printf("%c", pos[0]);//se meter pos[1] vai dar a letra a seguir
    return (0);
}*/
