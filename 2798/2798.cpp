/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2798.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/11 14:03:38 by jihoolee          #+#    #+#             */
/*   Updated: 2021/10/11 14:56:42 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>

using namespace std;

vector<int>	all_cards;

int	blackjack(int goal)
{
	int	max = 0;
	int	sum;

	for (int i = 0; i < all_cards.size() - 2; i++)
	{
		for (int j = i + 1; j < all_cards.size() - 1; j++)
		{
			for (int k = j + 1; k < all_cards.size(); k++)
			{
				sum = all_cards[i] + all_cards[j] + all_cards[k];
				if (sum <= goal && sum > max)
					max = sum;
			}
		}
	}
	return (max);
}

int	main(void)
{
	int	cards_num;
	int	goal;
	int	max_sum;

	cin >> cards_num >> goal;
	all_cards.resize(cards_num);
	for (int i = 0; i < cards_num; i++)
		cin >> all_cards[i];
	max_sum = blackjack(goal);
	cout << max_sum;
	return (0);
}
