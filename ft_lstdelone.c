/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 21:50:08 by delina            #+#    #+#             */
/*   Updated: 2023/11/19 18:21:41 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && del)
	{
		del(lst->content);
		free(lst);
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
	t_list *node;
	node = (t_list *)malloc(sizeof(t_list));
	node->content = "Hello world";

	printf("Before: %s\n", (char *)node->content);
	
	ft_lstdelone(node, del);

	printf("After: %s\n", (char *)node->content);
}*/
