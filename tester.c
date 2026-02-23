/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tester.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/23 03:01:54 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 03:02:39 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/* --- Master Switch --- */
#ifdef TEST_ALL
# define EX00
# define EX01
# define EX02
# define EX03
# define EX04
# define EX05
# define EX06
# define EX07
# define EX08
#endif

/* --- Prototypes --- */
void	ft_ft(int *nbr);
void	ft_ultimate_ft(int *********nbr);
void	ft_swap(int *a, int *b);
void	ft_div_mod(int a, int b, int *div, int *mod);
void	ft_ultimate_div_mod(int *a, int *b);
void	ft_putstr(char *str);
int		ft_strlen(char *str);
void	ft_rev_int_tab(int *tab, int size);
void	ft_sort_int_tab(int *tab, int size);

/* --- Helper to Print Arrays --- */
void	print_array(int *tab, int size)
{
	int	i = 0;
	while (i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

/* --- Main Testing Function --- */
int	main(void)
{
#ifdef EX00
	int	nbr0 = 0;
	printf("--- EX00: ft_ft ---\n");
	printf("Before: %d\n", nbr0);
	ft_ft(&nbr0);
	printf("After : %d\n\n", nbr0);
#endif

#ifdef EX01
	int nbr1 = 0;
	int *p1 = &nbr1;
	int **p2 = &p1;
	int ***p3 = &p2;
	int ****p4 = &p3;
	int *****p5 = &p4;
	int ******p6 = &p5;
	int *******p7 = &p6;
	int ********p8 = &p7;
	int *********p9 = &p8;
	printf("--- EX01: ft_ultimate_ft ---\n");
	printf("Before: %d\n", nbr1);
	ft_ultimate_ft(p9);
	printf("After : %d\n\n", nbr1);
#endif

#ifdef EX02
	int a2 = 10;
	int b2 = 99;
	printf("--- EX02: ft_swap ---\n");
	printf("Before: a = %d, b = %d\n", a2, b2);
	ft_swap(&a2, &b2);
	printf("After : a = %d, b = %d\n\n", a2, b2);
#endif

#ifdef EX03
	int div3, mod3;
	printf("--- EX03: ft_div_mod ---\n");
	ft_div_mod(10, 3, &div3, &mod3);
	printf("10 / 3  -> Div: %d, Mod: %d\n\n", div3, mod3);
#endif

#ifdef EX04
	int a4 = 10;
	int b4 = 3;
	printf("--- EX04: ft_ultimate_div_mod ---\n");
	printf("Before: a = %d, b = %d\n", a4, b4);
	ft_ultimate_div_mod(&a4, &b4);
	printf("After : a = %d, b = %d (a is div, b is mod)\n\n", a4, b4);
#endif

#ifdef EX05
	printf("--- EX05: ft_putstr ---\n");
	printf("Expected: Hello World!\n");
	printf("Result  : ");
	ft_putstr("Hello World!");
	printf("\n\n");
#endif

#ifdef EX06
	printf("--- EX06: ft_strlen ---\n");
	printf("String: '42 Piscine'\n");
	printf("Length: %d\n\n", ft_strlen("42 Piscine"));
#endif

#ifdef EX07
	int tab7[] = {1, 2, 3, 4, 5};
	printf("--- EX07: ft_rev_int_tab ---\n");
	printf("Before: ");
	print_array(tab7, 5);
	ft_rev_int_tab(tab7, 5);
	printf("After : ");
	print_array(tab7, 5);
	printf("\n");
#endif

#ifdef EX08
	int tab8[] = {42, 10, 8, 99, 1, 5};
	printf("--- EX08: ft_sort_int_tab ---\n");
	printf("Before: ");
	print_array(tab8, 6);
	ft_sort_int_tab(tab8, 6);
	printf("After : ");
	print_array(tab8, 6);
	printf("\n");
#endif

	return (0);
}
