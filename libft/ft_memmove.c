/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:55:41 by htomas-d          #+#    #+#             */
/*   Updated: 2022/03/04 17:30:43 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// similar to memcpy but copys src to a buffer and then from buffer to dest, 
// making it "safer" 
// in some compilers(overlaping memory might not work in memcpy)

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	char		*d;
	const char	*s;
	const char	*lasts;
	char		*lastd;

	d = dest;
	s = src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
	{
		while (len--)
		{
			*d++ = *s++;
		}
	}
	else
	{
		lasts = (char *)s + (len - 1);
		lastd = d + (len - 1);
		while (len--)
			*lastd-- = *lasts--;
	}
	return (dest);
}
/*void    *ft_memmove(void *dest, const void *src, size_t len)
{
    size_t i;

	i = 0;
   	if(dest > src)
    {
        i = len;
        while (i > 0)
        {
            *(char*)(dest + i) = *(char*)(src + i);
            i--;
        }
    }
    else
    {
        while (i < len )
        {
            *(char*)(dest + i) = *(char*)(src + 1);
            i++;
        }
    }
    return (dest);

}
*/
/*void print_elements(char *array, int size)
{
    int i;
    printf ("Elements : ");
    for (i = 0; i < size; i++)
    {
        printf ("%c, ", array[i]);
    }
    printf (" ");
}

int main()
{
    char c_array[] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    print_elements(c_array, sizeof(c_array));
    printf("\nAfter memmove()\n");
    ft_memmove((void *)&c_array[5], (void *)&c_array[3], 5);
    print_elements(c_array, sizeof(c_array));
}*/
