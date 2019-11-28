#include <stdio.h>
#include <stdlib.h>


typedef    struct    s_list
{
    void            *data;
    struct    node    *link;
}                t_list;

void    append(t_list **root)
{
    t_list *temp;
    
    temp = (t_list*)malloc(sizeof(t_list));
    temp->data = 10;
    temp->link = NULL;
    if (*root == NULL)
        *root = temp;
    else
    {
        t_list *p;
        p = *root;
        while (p->link != NULL)
            p = p->link;
        p->link = temp;            
    }        
}

void    ft_lstadd_front(t_list **lst, t_list *new)
{
    if (!lst || !new)
        return ;
    if (!*lst)
        *lst = new;
    else
    {
        new->data = *lst;
        *lst = new;
    }

}

int        ft_lstsize(t_list *lst)
{
    int        i;

    i = 1;
    if (!lst)
        return (0);
    while (lst->link)
    {
        lst = (t_list *)lst->link;
        i++;
    }
    return (i);
}
int    main()
{
    t_list *root;
    root = NULL;

    append(&root);    
    append(&root);
    append(&root);    
    append(&root);
    append(&root);    
    append(&root);
    append(&root);    
    append(&root);
    append(&root);    
    append(&root);
    append(&root);    
    append(&root);

    printf("*==========*%d\n", ft_lstsize(root));
}