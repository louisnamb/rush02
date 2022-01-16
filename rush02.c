#include <unistd.h>
#include <stdio.h>

/*
input is the whole string of numbers
pos is the numbers position in the array
num is the number of concern
val is the current length of the input left
*/
int storage(char *input, int pos, int num, int val)
{
    int teen_chkr;
    char    *tens[10] = {"", "", "twenty ", "thirty ", "forty ", "fifty ", "sixty ", "seventy ", "eighty ","ninety "};
    char    *one_to_nineteen[20] = {"", "one ", "two ", "three ", "four ","five ", "six ", "seven ", "eight ",
                "nine ", "ten ", "eleven ", "twelve ","thirteen ", "fourteen ", "fifteen ",
                "sixteen ", "seventeen ", "eighteen ","nineteen "};
    char    *other[5] = {"", "", "", "hundred ", "thousand"};
    
    //if statements for hundreds i.e., place_val % 3 == 0 
    if (val % 3 == 0) 
    {
        printf("%s %s and ", one_to_nineteen[num], other[3]);
        return (0);
    }
    if (val >= 4 && val <= 9)
    {
        if (val == 5)
        {
            printf("%s", tens[num]);
        }
        else if (val == 4) //if its a four digit number
        {
            printf("%s thousand ", one_to_nineteen[num]);
        }
        return (0);
    }
    else if (val == 2)
    {
        if (num != 0)
        {
            printf("%s", tens[num]);
        }
        if (num == 1)
        {
            return (0);
        }
        return (0);
    }
    else if (val == 1)
    {
        int teen_chkr = input[pos - 1] - 48;
        if (teen_chkr == 1)
        {
            printf("%s", one_to_nineteen[num+10]);
        }
        else
        {
            printf("%s", one_to_nineteen[num]);
        }
    }
    return (0);
}
int conv_c2i_index(char *nmbrs, int place_val) 
{
    int index;
    int i = 0;
    while (place_val != 0 && nmbrs[i])
    {
        index = nmbrs[i] - 48; //char to int
        storage(nmbrs, i, index, place_val);
        i++;
        place_val--;
    }
    return (0);
}

int main(int argc, char **argv)
{
    int len = 0;
    int pos = 0;
    while (argv[1][len]) // determine place value
    {
        len++;
    }
    conv_c2i_index(argv[1], len);
    return (0);
}