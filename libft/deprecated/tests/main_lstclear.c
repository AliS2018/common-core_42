#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

static int	g_del_calls = 0;

/* frees the content and counts how many times it was called */
static void	counting_del(void *content)
{
	g_del_calls++;
	free(content);
}

static void	print_list(t_list *lst)
{
	printf("  list: ");
	while (lst)
	{
		printf("[%s] -> ", (char *)lst->content);
		lst = lst->next;
	}
	printf("NULL\n");
}

int	main(void)
{
	t_list	*list;

	/* 1. normal list of 3 nodes */
	printf("TEST 1: clear a 3-node list\n");
	list = NULL;
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("A")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("B")));
	ft_lstadd_back(&list, ft_lstnew(ft_strdup("C")));
	print_list(list);
	printf("  size before: %u (expected 3)\n", ft_lstsize(list));
	ft_lstclear(&list, counting_del);
	printf("  del calls:   %d (expected 3)\n", g_del_calls);
	printf("  list after:  %p (expected (nil))\n", (void *)list);

	/* 2. empty list: nothing to delete */
	printf("\nTEST 2: clear an empty list\n");
	g_del_calls = 0;
	list = NULL;
	ft_lstclear(&list, counting_del);
	printf("  del calls:   %d (expected 0)\n", g_del_calls);
	printf("  list after:  %p (expected (nil))\n", (void *)list);

	/* 3. NULL arguments: must not crash */
	printf("\nTEST 3: NULL arguments\n");
	list = ft_lstnew(ft_strdup("X"));
	ft_lstclear(NULL, counting_del);
	ft_lstclear(&list, NULL);
	printf("  survived NULL args, list still: [%s]\n", (char *)list->content);
	ft_lstclear(&list, free);

	printf("\nNow check valgrind's summary: expect 0 bytes lost.\n");
	return (0);
}
