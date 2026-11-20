/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10998.js                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/21 01:41:20 by jihoolee          #+#    #+#             */
/*   Updated: 2026/11/21 01:41:29 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

function multiply(num1, num2) {
  return num1 * num2;
}

function main() {
  const fs = require("fs");
  const input = fs.readFileSync("/dev/stdin").toString().split(" ");

  a = parseInt(input[0]);
  b = parseInt(input[1]);
  console.log(multiply(a, b));
}

main();
