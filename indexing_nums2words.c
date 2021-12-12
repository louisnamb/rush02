#include <unistd.h>
#include <stdio.h>

char *tens[] = {"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ","ninety " };

char *one_to_nineteen[] = {"", "one ", "two ", "three ", "four ","five ", "six ", 
				"seven ", "eight ","nine ", "ten ", "eleven ", "twelve ",
                "thirteen ", "fourteen ", "fifteen ","sixteen ", "seventeen ", 
				"eighteen ", "nineteen "};

int index_array(int *arr, int length) //Array is the reverse array and j is the length of that array
{
    while (length > 0)
    {
        if (length == 2)
        {
            if (arr[1] == 1)
            {
                printf("%s", one_to_nineteen[arr[0]+10]);// 10);
                length = length - 2;
            }
            else
            {
                printf("%s", tens[arr[1]]);// 7);
                length--;
            }
        }
        else if (length % 3 == 0) //Determines whether its a multiple of three 
        {
            printf("%s", one_to_nineteen[arr[length-1]]);//, 10);
            printf("hundred and ");
            length--;
        }
        else if (length == 4) //For numbers 1000-999,999
        {
            //if (arr[length-1] == 0) //304 three hundred and four 354 three hundred and fifty four
            printf("%s", one_to_nineteen[arr[length]]);//; 10); //malloc for the size of the string
            printf("%s", "thousand");//, 9);
            length--;
        }
        else if (length == 5)
        {
            printf("%s", tens[arr[length]]);// 7);
            printf("%s",  one_to_nineteen[arr[3]]);// 5);
            length = length - 2;
        }
        else
        {
            printf("%s", tens[arr[length]]);//, 5);
            return (0);
        }
    }
	return (0);
}
int	main(int argc, char **argv)
{
	int	nb = 52;
	int l = 2;
	printf("%d", index_array(&nb, l));
	
	return (0);
}
