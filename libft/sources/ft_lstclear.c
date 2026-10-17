/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsadyko <alsadyko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/17 10:15:02 by alsadyko          #+#    #+#             */
/*   Updated: 2026/10/17 17:43:03 by alsadyko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */\

void    ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
        if (!lst || !del)
		return ;
	while (*lst)
	{
		current = (*lst) -> next;
		ft_lstdelone(*lst, del);
		*lst = current;
	}
}
