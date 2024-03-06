int findfloor(int number){
    //Finding the last digit of a number
    int last_digit;
    //Finding the remainder of the given number by dividing 10
    last_digit = number % 10;
    // The following line is only for verbose debugging of this function.
//    printf("Verbose:The last digit of %d is %d\n", number, last_digit);
    return last_digit;

    return 0;
}