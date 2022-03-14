/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 18:02:31 by htomas-d          #+#    #+#             */
/*   Updated: 2022/03/04 17:17:40 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//Applies the function ’f’ on each character of the string passed as argument, 
//passing its index as first argument. 
//Each character is passed by address to ’f’ to be modified if necessary.
void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;
	int	i2;

	i = 0;
	i2 = 0;
	if (s != NULL && f != NULL)
	{	
		i = ft_strlen(s);
		while (i2 < i)
		{
			(*f)(i2, s);
			s++;
			i2++;
		}
	}
}
