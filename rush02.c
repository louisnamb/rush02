/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lnambaji <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/12 13:28:18 by lnambaji          #+#    #+#             */
/*   Updated: 2021/12/12 15:40:43 by awu              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void loop()
{
    char *one_to_nineteen[] = { "", "one ", "two ", "three ", "four ",
                "five ", "six ", "seven ", "eight ",
                "nine ", "ten ", "eleven ", "twelve ",
                "thirteen ", "fourteen ", "fifteen ",
                "sixteen ", "seventeen ", "eighteen ",
                "nineteen " };
    char *tens[] = {"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ","ninety " };
    char *other[] = {"", "", "", "hundred and", "thousand"};
}

/*int recursive(int   num)
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
}*/

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int *get_rev_arr(int num, int size)
{
    int i;
    int *arr;

    i = 0;
    arr = malloc(sizeof(int) * size);
    while (num > 9)
    {
        arr[i] = num % 10;
        num = num / 10;
        i++;
    }
    arr[i] = num % 10;
    return (arr);
}

int	ft_pow_rec(int i, int n)
{
	if (n == 0)
		return (1);
	if (n == 1)
		return (i);
	return (i * ft_pow_rec(i, n - 1));
}

int	ft_atoi(char *str)
{
	int	res;
	int	i;

	i = 0;
	res = 0;
	while (*str && (*str <= 32))
		str++;
	while (*str && ((*str >= '0' && *str <= '9')))
		str++;
	str--;
	while ((*str >= '0' && *str <= '9'))
	{
		res += (*str - '0') * ft_pow_rec(10, i++);
		str--;
	}
	return (res);
}

int main(int argc, char **argv)
{
	int	num;
    int len;

    if (argc == 2)
    {
    //Figure out how to convert char into int
		num = ft_atoi(argv[1]);
        len = ft_strlen(agrv[1]);
        get_rev_arr(num, len);
    }
    return (0);
}