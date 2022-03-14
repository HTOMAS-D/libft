/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:58:04 by htomas-d          #+#    #+#             */
/*   Updated: 2022/03/04 16:58:10 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
/*int main()
{
	//takes a string and returns a pointer to the first char wanted
    const char str [] = "ola eu so o henrique";
    const char ch = 'h';

    printf("%s\n", strchr(str, ch));
    printf("%s", ft_strchr(str, ch));
    return (0);
}*/
