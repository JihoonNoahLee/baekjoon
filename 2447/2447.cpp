/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2447.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/08 11:07:06 by jihoolee          #+#    #+#             */
/*   Updated: 2021/10/09 16:44:21 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

void	print_star(int i, int j, int size)
{
	if (size == 1)
		cout << '*';
	else if (i / (size / 3) % 3 == 1 && j / (size / 3) % 3 == 1)
		cout << ' ';
	else
		print_star(i % (size / 3), j % (size / 3), size / 3);

}

int	main(void)
{
	int	size;

	cin >> size;
	for (int i = 0; i < size; i++)
	{
		for (int j = 0; j < size; j++)
		{
			print_star(i, j, size);
		}
		cout << endl;
	}
	return (0);
}
