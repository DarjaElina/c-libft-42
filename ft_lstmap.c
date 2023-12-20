/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/17 22:07:15 by delina            #+#    #+#             */
/*   Updated: 2023/11/19 18:25:24 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*res;
	t_list	*temp;

	if (!lst || !f || !del)
		return (NULL);
	res = ft_lstnew(f(lst->content));
	if (!res)
		return (NULL);
	temp = res;
	lst = lst->next;
	while (lst)
	{
		res->next = ft_lstnew(f(lst->content));
		if (!res->next)
		{
			ft_lstclear(&temp, del);
			return (NULL);
		}
		res = res->next;
		lst = lst->next;
	}
	res->next = NULL;
	return (temp);
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

	t_list *res = ft_lstmap(f, test, del);

	printf("%s", (char *)res->content);	
}*/
