/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:59:09 by htomas-d          #+#    #+#             */
/*   Updated: 2022/03/04 17:04:54 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *str1, const void *str2, size_t len)
{
	size_t	i;

	i = 0;
	while (i < len)
	{
		if (*(unsigned char *)(str1 + i) != *(unsigned char *)(str2 + i))
		{
			return (*(unsigned char *)(str1 + i) -
					*(unsigned char *)(str2 + i));
		}
		i++;
	}
	return (0);
}
/*int main()
{
    char str1[] = "henruque";
    char str2[] = "henrique";
    if(ft_memcmp(str1, str2, 8 * sizeof(char)) == 0)
    {
        printf("arrays are the same\n");
    }
    else
    {
        printf("arrays are different\n");
    }
}*/
