# EXPLANATION

We are given an intenger w which is the weight of the watermelon

In the instruction. We have to divide the weight in which Peter and Billy can get the weight that even numbers. It is not obligatory that the parts are equal. Becaue they do not want odd numbers, So we have make the two parts are even

For example :
If the weight is 8, we cannot divide it into 1 and 7. Both have to be even
We can make it to 2 and 6 or 4 and 4. In this case 8 is possible. So we print YES

What if the weight is odd number ? For example 5. We can use basic number theory
We can get Odd numbers by adding or subtracting odd and even numbers

5 = 1 + 4 OR 2 + 3
7  = 1 + 6, 2 + 5, 3 + 4

See that in Addition, Odd numbers is always obtained by adding odd numbers and even numbers

So, in this case if the weight is odd we cannot divide it into two even numbers. So that we print NO as the result

In conclusion if w is even print YES. if w is odd print NO.