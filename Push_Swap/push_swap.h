
#ifndef PUSHSWAP_H
# define PUSHSWAP_H
# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stddef.h>
# include <stdio.h>

typedef struct s_list
{
	int             value;
    int             position;
	int				index;
	struct s_list	*next;
}	t_list;

int		ft_atoi(const char *str);
void	ft_lstadd_back(t_list **lst, t_list *node);
t_list	*ft_lstnew(int value);
int     ft_lstsize(t_list *lst);
t_list	*ft_golast(t_list **lst);
char	**ft_split(const char *s, char c);
void	free_split(char **split);
#endif