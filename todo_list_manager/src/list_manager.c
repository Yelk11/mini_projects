#include "list_manager.h"

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

list_T* init_list()
{
    list_T* list = calloc(1, sizeof(list_T));
    list->num_tasks = 0;
    return list;
}

void list_add(list_T* list, char* item)
{
    
    if(list->num_tasks <= MAX_TASKS)
    {
        list->tasks[list->num_tasks] = item;
        list->num_tasks++;
    }
    else
    {
        printf("List is full\n");
    }
}

void list_remove(list_T* list, int index)
{
    if(index >= 0 && index < list->num_tasks + 1)
    {
        for(int i = 1; i < list->num_tasks - 1; i++)
        {
            list->tasks[i] = list->tasks[i + 1];
            
        }
        list->num_tasks--;
        printf("Task removed\n");
    }
    else
    {
        printf("wrong index\n");
    }
}

void list_print(list_T* list)
{
    for(int x = 0; x < list->num_tasks; x++)
    {
        printf("%d: %s\n", x + 1, list->tasks[x]);
    }
}

