/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:58:16 by htomas-d          #+#    #+#             */
/*   Updated: 2022/03/04 16:49:04 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		if (str[i] == (char) c)
		{
			return ((char *)(str + i));
		}
		i--;
	}
	return (NULL);
}
/*int main()
{
   // takes a string, returns a pointer to the last char wanted
    const char str [] = "ola, eu ,so o henrique";
    const char ch = ',';

    printf("%s\n", strrchr(str, ch));
    printf("%s", ft_strrchr(str, ch));
    return (0);
}*/
