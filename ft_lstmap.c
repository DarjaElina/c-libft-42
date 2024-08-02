/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 22:07:15 by delina            #+#    #+#             */
/*   Updated: 2023/12/26 21:50:41 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*new_node;
	void	*set;

	if (!lst || !f || !del)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		set = f(lst->content);
		new_node = ft_lstnew(set);
		if (!new_node)
		{
			del(set);
			ft_lstclear(&new_list, (*del));
			return (new_list);
		}
		ft_lstadd_back(&new_list, new_node);
		lst = lst->next;
	}
	return (new_list);
}
/*void *test(void *content)
{
	unsigned char *s;
	int i = 0;
	s = (unsigned char *)content;
	while (s[i] != '\0')
	{
		s[i] = s[i] + 32;
		i++;
	}
	return (content);
}
void del(void *content)
{
	if (content)
		free(content);
}
#include <stdio.h>
int main(void)
{
	char s1[100] = "Hello";
	char s2[100] = "WORLD";
	t_list *f = ft_lstnew(s1);
	t_list *s = ft_lstnew(s2);

	f->next = s;
	s->next = NULL;

	t_list *res = ft_lstmap(s, test, del);

	printf("%s", (char *)res->content);	
}*/
