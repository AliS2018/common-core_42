/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <alsadyko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 17:51:27 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/17 19:16:37 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*continuous;
	t_list	*new_element;
	void	*new_content;

	if (!lst || !f || !del)
		return (NULL);
	continuous = NULL;
	while (lst)
	{
		new_content = f(lst->content);
		new_element = ft_lstnew(new_content);
		if (!new_element)
		{
			del(new_content);
			ft_lstclear(&continuous, del);
			return (NULL);
		}
		ft_lstadd_back(&continuous, new_element);
		lst = lst -> next;
	}
	return (continuous);
}
