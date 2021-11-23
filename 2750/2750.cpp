/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2750.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 16:19:02 by jihoolee          #+#    #+#             */
/*   Updated: 2021/11/23 16:27:46 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

vector<int>	arr;

void	bubble_sort(void)
{
	int	len = arr.size();
	int	temp;

	for (int i = 0; i < len; i++)
	{
		for (int j = i + 1; j < len; j++)
		{
			if (arr[i] > arr[j])
			{
				temp = arr[j];
				arr[j] = arr[i];
				arr[i] = temp;
			}
		}
	}
}

int	main(void)
{
	int	len;

	cin >> len;
	arr.resize(len);
	for (int i = 0; i < len; i++)
		cin >> arr[i];
	bubble_sort();
	for (int i = 0; i < len; i++)
		cout << arr[i] << endl;
	return (0);
}
