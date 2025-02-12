#include "list.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_swap(int *current_position, int *next_position)
{
	int temp;
	temp = *current_position;
	*current_position = *next_position;
	*next_position = temp;

}

int ascending(int a, int b)
{
	return (a <= b);
}

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	t_list	*current;
	t_list	*end;
	int		swapped;

	end = NULL;
	do
	{
		swapped = 0;
		current = lst;
		while (current->next != end)
		{
			if (!(*cmp)(current->data, current->next->data))
			{
				ft_swap(&current->data, &current->next->data);
				swapped = 1;
			}
			current = current->next;
		}
		end = current;
	} while (swapped);
	return (lst);
}
t_list	*list_new(int value)
{
	t_list	*node;
	node = malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->data = value;
	node->next = NULL;
	return (node);
}

t_list	*create_list(void)
{
	t_list	*head;
	t_list	*current;
	int		value[] = {9, 5, 7, 2, 3};
	int		size = 5;
	int		index;
	head = list_new(value[0]);
	current = head;
	index = 1;
	while (index < size)
	{
		current->next = list_new(value[index]);
		current = current->next;
		index++;
	}
	return (head);
}

void	print_list(t_list *head)
{
	while (head)
	{
		printf("%d", head->data);
		if (head->next)
			printf("->");
		head = head->next;
	}
	printf("\n");
}

void	free_list(t_list *head)
{
	t_list	*temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}

void f(void)
{
	system("leaks a.out");
}

int	main(void)
{
	atexit(f);
	t_list	*first_list = create_list();
	print_list(first_list);
	printf("\n------\n");
	sort_list(first_list, ascending);
	print_list(first_list);
	free_list(first_list);
	return (0);
}