/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1735.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 16:49:22 by jihoolee          #+#    #+#             */
/*   Updated: 2023/12/03 17:12:47 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

typedef struct s_fraction {
  int numerator;
  int denominator;
} t_fraction;

int get_gcd(int num1, int num2) {
  if (num2 == 0)
    return num1;
  return get_gcd(num2, num1 % num2);
}

t_fraction add(const t_fraction& num1, const t_fraction& num2) {
  t_fraction result;

  if (num1.denominator == num2.denominator) {
    result.numerator = num1.numerator + num2.numerator;
    result.denominator = num1.denominator;
  } else {
    result.numerator = num1.numerator * num2.denominator
      + num2.numerator * num1.denominator;
    result.denominator = num1.denominator * num2.denominator;
  }
  return result;
}

t_fraction reduce(const t_fraction& num) {
  int         gcd = get_gcd(num.numerator, num.denominator);
  t_fraction  result;

  result.numerator = num.numerator / gcd;
  result.denominator = num.denominator / gcd;
  return result;
}

int main(void) {
  t_fraction num1;
  t_fraction num2;
  t_fraction result;

  std::cin >> num1.numerator >> num1.denominator;
  std::cin >> num2.numerator >> num2.denominator;
  result = reduce(add(num1, num2));
  std::cout << result.numerator << ' ' << result.denominator;
  return 0;
}
