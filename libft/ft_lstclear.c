/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htomas-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 14:59:53 by htomas-d          #+#    #+#             */
/*   Updated: 2022/03/11 15:52:06 by htomas-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if(lst && del)
	{
		while(*lst)
		{
			temp = (*lst)->next;
			(*del)((*lst)->content);
			free(*lst);
			*lst = temp;
		}
	}
}
