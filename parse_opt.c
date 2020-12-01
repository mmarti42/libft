#include "libft.h"
#include <errno.h>
#define DEFAULT_RETSTRING_SIZE 32

static char *get_opt(char *p_str, char *ret_str, size_t *len, char const *opt_list)
{
	static size_t found_options;

	if (*len == found_options - 1)
	{
		char *tmp = (char *)ft_xmalloc(*len = *len + *len / 2);
        memcpy(tmp, ret_str, strlen(ret_str));
        free(ret_str);
        ret_str = tmp;
	}
	while (*p_str)
	{
		if (!strchr(opt_list, *p_str))
			return NULL;
		ret_str[found_options++] = *p_str++;
	}
	return ret_str;
}

char	*parse_opt(char **av, char const *opt_list)
{
    char *ret;
	size_t ret_len = DEFAULT_RETSTRING_SIZE;

    ret = (char *)ft_xmalloc(ret_len);
    while (*av)
    {
        if (**av == '-' && ft_isalpha(*(*av + 1)))
        {
            if (!(ret = get_opt(*av + 1, ret, &ret_len, opt_list)))
            {
                free(ret);
                return NULL;
            }
        }
        av++;
    }
    return ret;
}