#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>

int     cmp(void* a,void* b)
{
    if (a == b)
        return 0;
    else
        return 1;
}

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*curr;
	t_list	*tmp;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		curr = *begin_list;
		*begin_list = (*begin_list)->next;
		free(curr);
	}
	curr = *begin_list;
	while (curr && curr->next)
	{
		if (cmp(curr->next->data, data_ref) == 0)
		{
			tmp = curr->next;
			curr->next = tmp->next;
			free(tmp);
		}
		curr = curr->next;
	}
}

int main()
{
    char *data1 = "abcd";
    t_list **arr = 0;
    
    *arr = malloc(sizeof(t_list) * 11);
    int i = 0;
    while (data1[i] != 0)
    {
        arr[i]->data = &data1[i]; //주소
        arr[i]->next = arr[i+1];
        i++;
    }
    arr[i] -> next = 0;
    i = 0;
    while (arr[i]->next != 0)
        printf("%s\n",arr[i++]->data);
        
    ft_list_remove_if(arr, &data1[3], &cmp);
    i = 0;
    while (arr[i]->next != 0)
        printf("%s\n", arr[i++]->data);
    
}

