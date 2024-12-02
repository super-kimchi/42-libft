/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyungkim <kyungkim@student.42berlin.de>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/02 11:48:22 by kyungkim          #+#    #+#             */
/*   Updated: 2024/12/02 14:43:19 by kyungkim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*create_node(t_list *head, void (*del)(void *))
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
	{
		ft_lstclear(&head, del);
		return (NULL);
	}
	return (node);
}

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*head;
	t_list	*new;
	t_list	*node;

	new = 0;
	head = 0;
	if (!f || !del || !lst)
		return (NULL);
	while (lst)
	{
		node = create_node(head, del);
		if (!node)
			return (NULL);
		if (!head)
			head = node;
		else
			new->next = node;
		new = node;
		new->content = f(lst->content);
		new->next = NULL;
		lst = lst->next;
	}
	return (head);
}
/*
void	*nextcha(void	*content)
{
	int	i = 0;
	while (((char *)content)[i])
	{
		((char *)content)[i]++;
		i++;
	}
	return (content);
}

int	main(void)
{
	char	arr[] = "hi";
	t_list *start = ft_lstnew(arr);
	printf("old %p %s\n", start, (char *)start->content);
	t_list *new = ft_lstmap(start, nextcha, NULL);
	printf("new %p %s", new, (char *)new->content);
}
*/
/*
		if (new)
		{
			new->next = (t_list *)malloc(sizeof(t_list));
			if (!new->next)
			{
				ft_lstclear(&head,del);
				return (NULL);
			}
			new = new->next;
		}
		else
		{	
			head = (t_list *)malloc(sizeof(t_list));
			if (!head)
				return (NULL);
			new = head;
		}
		if (f)
			new->content = f(lst->content);
		lst = lst->next;
	}
	new->next = NULL;
*/
/*
		if (!node)
		{
			ft_lstclear(&head, del);
			return (NULL);
		}
*/
