/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   10430.js                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jihoolee <jihoolee@student.42SEOUL.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/28 21:08:04 by jihoolee          #+#    #+#             */
/*   Updated: 2026/11/28 21:15:01 by jihoolee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

const func1 = (A, B, C) => (A + B) % C;
const func2 = (A, B, C) => ((A % C) + (B % C)) % C;
const func3 = (A, B, C) => (A * B) % C;
const func4 = (A, B, C) => ((A % C) * (B % C)) % C;

function main() {
  const fs = require("fs");
  const input = fs.readFileSync("/dev/stdin").toString().trim();

  const [num1, num2, num3] = input.split(" ").map(Number);
  console.log(func1(num1, num2, num3));
  console.log(func2(num1, num2, num3));
  console.log(func3(num1, num2, num3));
  console.log(func4(num1, num2, num3));
}

main();
