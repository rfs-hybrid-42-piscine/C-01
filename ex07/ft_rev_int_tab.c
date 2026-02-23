/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maaugust <maaugust@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 12:41:02 by maaugust          #+#    #+#             */
/*   Updated: 2026/02/23 02:46:03 by maaugust         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @fn void ft_rev_int_tab(int *tab, int size)
 * @brief Reverses the order of elements in an integer array.
 * @details Uses an index to traverse up to the midpoint of the array,
 * swapping the elements at symmetrical opposite ends using a temporary
 * variable.
 * @param tab Pointer to the first element of the integer array.
 * @param size The number of elements in the array.
 */
void	ft_rev_int_tab(int *tab, int size)
{
	int	tmp;
	int	i;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[i];
		tab[i] = tab[(size - i) - 1];
		tab[(size - i) - 1] = tmp;
		i++;
	}
}
