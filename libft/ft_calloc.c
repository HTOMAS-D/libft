/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/03 17:59:48 by htomas-d          #+#    #+#             */
/*   Updated: 2022/03/04 16:18:01 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	ptr = (void *)malloc(num * size);
	if (!ptr)
	{
		return (NULL);
	}
	ft_bzero(ptr, (num * size));
	return (ptr);
}
