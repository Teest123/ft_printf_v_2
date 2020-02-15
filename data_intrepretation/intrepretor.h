typedef struct
{
  int spaces;
  int max_characters;
  int zeros;
  int minus;
  int neg;
  int pr_anl;
  char *value;
  t_format    *data;
} t_result;

/*
** prototypes for the different functions
*/

t_result *result_init(void);

void    result_destroy(t_result *result);
void zeros_calculator(t_format *holder, t_result *result, int size);
void spaces_calculator(t_format *holder, t_result *result, int size);
void spaces_calculator_neg_zeropad (t_format *holder, t_result *result, int size);
t_result *intrepert(char *fstr, va_list alist);
void	idk_calculator (t_format *holder, t_result *result, int size);
