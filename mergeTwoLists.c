#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>


typedef struct ListNode {
    int val;
    struct ListNode *next;
}	t_listNode;

t_listNode *mergeTwoLists(t_listNode* list1, t_listNode* list2)
{
	t_listNode *top;
	
    if (!list1)
		return (list2);
	if (!list2)
		return (list1);
	top = list1;
	if (list1->val < list2->val)
		list1 = list1->next;
	else
	{
		top = list2;
		list2 = list2->next;
	}

	t_listNode *curr;
	curr = top;
	while (list1 && list2)
	{
		if (list1->val <= list2->val)
		{
			curr->next = list1;
			list1 = list1->next;
		}
		else
		{
			curr->next = list2;
			list2 = list2->next;
		}
		curr = curr->next;
	}
	if (!list2)
	{
		curr->next = list1;
	}
	else
	{
		curr->next = list2;
	}
	return (top);
}

t_listNode	*list1(void)
{
	t_listNode	*head;
	head = malloc(sizeof(t_listNode));
	if (!head)
		return (NULL);
	// head->val = 3;
	// t_listNode	*second;
	// second = malloc(sizeof(t_listNode));
	// if (!second)
	// 	return (NULL);
	// second->val = 6;
	// head->next = second;
	// t_listNode	*third;
	// third = malloc(sizeof(t_listNode));
	// if (!third)
	// 	return (NULL);
	// third->val = 7;
	// second->next = third;
	// t_listNode	*fourth;
	// fourth = malloc(sizeof(t_listNode));
	// if (!fourth)
	// 	return (NULL);
	// fourth->val = 12;
	// third->next = fourth;
	// t_listNode	*fifth;
	// fifth = malloc(sizeof(t_listNode));
	// if (!fifth)
	// 	return (NULL);
	// fifth->val = 34;
	// fourth->next = fifth;
	// fifth->next = NULL;
	return (head);
}
t_listNode	*list2(void)
{
	t_listNode	*head;
	head = malloc(sizeof(t_listNode));
	if (!head)
		return (NULL);
	head->val = 0;
	// t_listNode	*second;
	// second = malloc(sizeof(t_listNode));
	// if (!second)
	// 	return (NULL);
	// second->val = 5;
	// head->next = second;
	// t_listNode	*third;
	// third = malloc(sizeof(t_listNode));
	// if (!third)
	// 	return (NULL);
	// third->val = 6;
	// second->next = third;
	// t_listNode	*fourth;
	// fourth = malloc(sizeof(t_listNode));
	// if (!fourth)
	// 	return (NULL);
	// fourth->val = 9;
	// third->next = fourth;
	// t_listNode	*fifth;
	// fifth = malloc(sizeof(t_listNode));
	// if (!fifth)
	// 	return (NULL);
	// fifth->val = 10;
	// fourth->next = fifth;
	// fifth->next = NULL;
	return (head);
}

void	print_list(t_listNode *list)
{
	while (list)
	{
		printf("%d -> ", list->val);
		list = list->next;
	}
	printf("(null)");
}

int	main(void)
{
	t_listNode *first_list = list1();
	t_listNode *second_list = list2();
	print_list(first_list);
	printf("\n");
	print_list(second_list);
	printf("\n");
	print_list(mergeTwoLists(first_list, second_list));
	printf("\n");
	return (0);
}