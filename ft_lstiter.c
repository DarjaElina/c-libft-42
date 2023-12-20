/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 23:22:18 by delina            #+#    #+#             */
/*   Updated: 2023/11/19 19:03:13 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
/*#include <stdio.h>
void test(void *content)
{
	printf("Content: %s", (char *)content);
}

int main(void)
{
	t_list *node1 = ft_lstnew("Hello");
	t_list *node2 = ft_lstnew("World");
	t_list *node3 = ft_lstnew("! ");

	node1->next = node2;
	node2->next = node3;
	node3->next = NULL;

	ft_lstiter(node2, test);
}*/
