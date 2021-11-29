/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   2108.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:38:30 by jihoolee          #+#    #+#             */
/*   Updated: 2021/11/26 18:17:49 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <cmath>

#define MAX_ABS	4000

using namespace std;

vector<int>	vec;
vector<int>	vec_sorted;
vector<int>	count_vec(MAX_ABS * 2 + 1);
int			sum = 0;
int			max_val = MAX_ABS * -1;
int			min_val = MAX_ABS;
int			max_freq = 0;
int			max_freq_val;

int	get_max_freq_val(void)
{
	int	max_freq_cnt = 0;
	int	min_1;
	int	min_2;

	if (count_vec[0] == max_freq)
	{
		min_1 = 0 - MAX_ABS;
		max_freq_cnt++;
	}
	for (int i = 1; i < MAX_ABS * 2 + 1 && max_freq_cnt < 2; i++)
	{
		if (count_vec[i] - count_vec[i - 1] == max_freq)
		{
			if (max_freq_cnt == 0)
				min_1 = i - MAX_ABS;
			else if (max_freq_cnt == 1)
				min_2 = i - MAX_ABS;
			max_freq_cnt++;
		}
	}
	if (max_freq_cnt < 2)
		return (min_1);
	return (min_2);
}

int	get_mean(double sum, double len)
{
	return (round(sum / len));
}

void	count_sort(int len)
{
	for (int i = 0; i < len; i++)
	{
		if (vec[i] > max_val)
			max_val = vec[i];
		if (vec[i] < min_val)
			min_val = vec[i];
		count_vec[vec[i] + MAX_ABS]++;
	}
	max_freq = count_vec[0];
	for (int i = 1; i <= 2 * MAX_ABS; i++)
	{
		if (max_freq < count_vec[i])
			max_freq = count_vec[i];
		count_vec[i] += count_vec[i - 1];
	}
	max_freq_val = get_max_freq_val();
	for (int i = 0; i < len; i++)
		vec_sorted[--count_vec[vec[i] + MAX_ABS]] = vec[i];
}

int	main(void)
{
	int	len;

	cin >> len;
	vec.resize(len);
	vec_sorted.resize(len);
	for (int i = 0; i < len; i++)
	{
		cin >> vec[i];
		sum += vec[i];
	}
	count_sort(len);
	cout << get_mean(sum, len) << '\n' << vec_sorted[len / 2] << '\n' \
		<< max_freq_val << '\n' << max_val - min_val;
	return (0);
}
