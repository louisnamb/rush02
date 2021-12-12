/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 13:28:18 by lnambaji          #+#    #+#             */
/*   Updated: 2021/12/12 13:53:42 by lnambaji         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int loop()
{
    char    *one_to_nineteen;
    char    *tens;
    char    *other;
    one_to_nineteen = {"", "one ", "two ", "three ", "four ",
                "five ", "six ", "seven ", "eight ",
                "nine ", "ten ", "eleven ", "twelve ",
                "thirteen ", "fourteen ", "fifteen ",
                "sixteen ", "seventeen ", "eighteen ",
                "nineteen "};
    tens = {"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ","ninety " };
    other = {"", "", "", "hundred and", "thousand"};
}

int recursive(int   num)
{
    int j;
    int *rev_arr;

    j = 0;
    if (num > 9)
    {
        recursive(num / 10);
        rev_arr[j] = num;
        j++;
    }
}
int main(int argc, char **argv)
{
    if (argc == 2)
    {
    //Figure out how to convert char into int
        recursive(argv[1]);
    }
    return (0);
}
