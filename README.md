# rush02
Rush02 Proposed Solution

The new strategy is to use a function array that iteratively deals with the place values of each digit. e.g., once it finds out the the nuber is 3 digits, the function array with index the third function which corresponds with the hundrendths element and deals with that accordingly

1. First we take the input and use modulus to cut off the last value of that number and insert it into an array. Now we have an array of our input, but in reverse–we’ll call this “rev_arr”

2. Since we used a counter to insert each last number of the input into rev_arr, we now know the length of the input, this will tell us if its three digits which corresponds to hundreds, or two digits, which tells us it corresponds to the ..-ty’s numbers e.g., twenty, thirty etc. 

3. We’ll use our hard coded array of numbers one to nineteen in their written form. We’ll use the value of the last item in rev_arr (really the first number of the input since its reversed) and we’ll index the written form of that number in our hard-coded numbers one to nineteen array. We’ll write this number followed by “hundred” if its three digits or thousand if its four etc.

4. We’ll decrement our counter, and figure out how many digits are left, and use the second last number to index a certain position in our hard-coded array and repeat this process until we get to our last digit, which is really, once again, the first digit since the array is still reversed.

Jobs:
Louis
Nidhi
Zorigt
Athena 
