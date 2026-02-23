/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 16:18:58 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 02:45:07 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn static void ft_swap(int *a, int *b)
 * @brief Helper function to swap the values of two integers.
 * @details Takes two integer pointers and swaps the values stored at those
 * memory addresses using a temporary auxiliary variable.
 * @param a Pointer to the first integer.
 * @param b Pointer to the second integer.
 */
static void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * @fn void ft_sort_int_tab(int *tab, int size)
 * @brief Sorts an integer array in ascending order.
 * @details Implements the Bubble Sort algorithm. Iterates through the array,
 * comparing adjacent elements and swapping them if they are in the wrong
 * order, "bubbling" the largest elements to the end. Includes an early exit
 * condition for arrays with fewer than 2 elements.
 * @param tab Pointer to the first element of the integer array.
 * @param size The number of elements in the array.
 */
void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;

	if (size < 2)
		return ;
	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - i - 1)
		{
			if (tab[j] > tab[j + 1])
				ft_swap(&tab[j], &tab[j + 1]);
			j++;
		}
		i++;
	}
}
