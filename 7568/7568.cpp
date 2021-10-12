/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   7568.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/12 16:35:14 by jihoolee          #+#    #+#             */
/*   Updated: 2021/10/12 16:47:00 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

using namespace std;

int	get_bulk_rank(int idx, int cases, int *weight, int *height)
{
	int	bigger = 0;

	for (int i = 0; i < cases; i++)
		if (weight[i] > weight[idx] && height[i] > height[idx])
			bigger++;
	return (bigger + 1);
}

int	main(void)
{
	int	cases;
	int	*weight;
	int	*height;

	cin >> cases;
	weight = new int[cases];
	height = new int[cases];
	for (int i = 0; i < cases; i++)
		cin >> weight[i] >> height[i];
	for (int i = 0; i < cases; i++)
		cout << get_bulk_rank(i, cases, weight, height) << ' ';
	return (0);
}
