# include <iostream>

int main() {
    /* Practicing with ints.This program I am taking two variables that have already been declared,
    and swapping their values. I also tried out the \n command that is also in Python and other
    coding languages, along with multiline comments, as well as combining both text and a variable in this program. */
    int a = 1;
    int b = 2;
    int swap_num;
    swap_num = a;
    // I am using swap num to hold the value of a before I overwrite it with the value of b.
    a = b;
    std::cout <<"The new value of a is " <<a << " and the new value of b is " << swap_num;
    return 0;
};
