/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: delina <delina@student.hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:44:08 by delina            #+#    #+#             */
/*   Updated: 2023/11/19 19:04:01 by daraelina        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (lst->next == NULL)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*#include <stdio.h>
int main(void)
{
	t_list f;
	t_list s;
	t_list t;
	f.next = &s;
	s.next = &t;
	t.next = NULL;

	printf("%p", ft_lstlast(&f));
}*/
