/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 22:46:29 by delina            #+#    #+#             */
/*   Updated: 2023/11/19 19:03:38 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*temp;

	if (!lst)
		return ;
	temp = *lst;
	while (*lst)
	{
		temp = (*lst)->next;
		ft_lstdelone(*lst, del);
		(*lst) = temp;
	}
}
/*#include <stdio.h>
void del(void *content)
{
	if (content)
		free(content);
}
int main(void)
{
	t_list *node1 = ft_lstnew("Hello");
	t_list *node2 = ft_lstnew("World");
	t_list *node3 = ft_lstnew("!");
	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	t_list *ptr = node1;

	printf("Before: %s\n", (char *)node3->content);
	ft_lstclear(&ptr, del);
	printf("After: %s\n", (char *)node3->content);
}*/
