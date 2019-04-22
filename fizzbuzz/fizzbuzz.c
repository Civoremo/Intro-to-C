#include <stdio.h>

/*
    Your fizzbuzz implementation should initialize a counter, then
    iterate n times. If the ith iteration is divisible by 3, print
    "Fizz". If it's divisible by 5, print "Buzz". If it's divisible
    by both 3 and 5, print "FizzBuzz". Increment the counter variable
    every time that nothing gets printed and return the counter.
    Don't forget to include newlines '\n' in your printf statements!
*/
int fizzbuzz(int n)
{
    int counter = 0;
    for (int i = 1; i <= n; i++) {
        if(i % 3 == 0 && i % 5 == 0) 
        {
            printf("Fizzbuzz\n");
        }
        else if (i % 5 == 0) 
        {
            printf("Buzz\n");
        }
        else if (i % 3 == 0) 
        {
            printf("Fizz\n");
        }
        else 
        {
            counter++;
        }
    }
    // used for manual testing
    // could't get "make tests" to work
    /*
        rm -rf build fizzbuzz.o tests/fizzbuzz_tests
        rm -f tests/tests.log
        find . -name "*.gc" -exec rm -f {} \;
        File not found - *.gc
        make: *** [../mainbuild.mk:56: clean] Error 2
    */
    printf("%d\n", counter);
    return counter;
}

#ifndef TESTING
int main(void)
{
    fizzbuzz(20);
    fizzbuzz(3);
    fizzbuzz(5);
    fizzbuzz(10);
    fizzbuzz(100);

    return 0;
}
#endif
