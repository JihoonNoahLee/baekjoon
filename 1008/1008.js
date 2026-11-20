/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   1008.js                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 01:43:17 by jihoolee          #+#    #+#             */
/*   Updated: 2026/11/21 01:43:31 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

function divide(num1, num2) {
  return num1 / num2;
}

function main() {
  const fs = require("fs");
  const input = fs.readFileSync("/dev/stdin").toString().split(" ");

  a = parseInt(input[0]);
  b = parseInt(input[1]);
  console.log(divide(a, b));
}

main();
