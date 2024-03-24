#include <cs50.h>
#include <stdio.h>

int get_cents(void);
int calculate_quarters(int cents);
int calculate_dimes(int cents);
int calculate_nickels(int cents);
int calculate_pennies(int cents);

// step 1: First we compiled our code using "make cash" command.
// step 2: On successful compilation, Now we run our program therefore we execute our main function...
int main(void)
{
    // step 3: Now we're in our main function or we can say the control of our program now is in main function and it (machine) is reading first line of actual code excluding comments.
    // Ask how many cents the customer is owed
    // step 4 (a): Machine reads this line given just below, So here's a call for "get_cents" function...
    // step 4 (b): Machine checks it's return type and how many arguments this function takes. Machine will check and will say (Okay it's a function which returns an integer and here we're receiving that returned integer into a variable called "cents" which is also a integer type variable and that seems okay to me. This function takes no arguments and no arguments are passed into the function, that's also seems okay. Since everything is good and okay, Machine will execute that function call and machine will hand over the control to "get_cents" function. So let's go to get_cents function definition...)
    int cents = get_cents(); // step 17: Here we come again 😎 with an exciting value 99. Okay let's move forward.

    // Calculate the number of quarters to give the customer
    // step 18: Now it's all seems like same story but with some new different interesting values. From here, we're abstracting some vocab transcripted guide. Therefore now we know what machine will do next. Machine will sanitize (Actually our programmed is already sanitized because we already compiled. That we explained above isn't false but technically that's. I explained that to understand code control flow). Machine will simply call "calculate_quarters" function. You know where step 19 is 😉.
    int quarters = calculate_quarters(cents); // step 25: Machine: Variable "quarters" is now holds value 3 got from function "calculate_quarters" call.

    // Note (IMP): quarters = 3 and still cents = 99. ✔ ⚠

    // step 26: Machine: Woww, Some more arithmetics to do...
    // step 27: Machine: "cents = cents - quarters * 25" (where, cents = 99, quarters = 3
    // step 28: Machine: "quarters * 25" (quarters = 3)
    // step 28: Machine: "cents = cents - 3 * 25"       <- this is due to the associativity and precedence. right to left for "=" (associativity) and multiply first (precedence).
    // step 29: Machine: "cents = cents - 75".
    // step 30: Machine: "cents = 99 - 75"          <- (left cents): expects to not change and receive some value in the end from right side of "=" operator. cents and quarters both are operands. right "cents" interpolated to value 99.
    // step 31: Machine: "cents = 24".
    cents = cents - quarters * 25;

    // Note (IMP): Now cents = 24 and quarters = 3. ✔ ⚠
    // tip: Noticed? How we calculated quarters and updated cents value. First we divided cents by 25 and got 3 and then we also used that quarters value 3 to remove compressed values (we compressed 75 into 3) from cents. 99 - 75 = 24.

    // break: 99 => 99 / 25 = 3.
    // adjust: 99 => 99 - 25 * 3 = 24. (75 + 24 = 99)
    // final value for cents: 24.

    // Calculate the number of dimes to give the customer
    // step 31: Now we know we have, cents = 24, quarters = 3.
    // Note: Here placement of functions calculate_quarters and then calculate_dimes and so on... have you noticed the pattern?
    // Pattern is, First we need to eliminate or get highest coins change then we eliminate or calculate next highest but lower than quarters, coins value which is what? dimes and then pattern goes down higher to lower.
    // What if function "calculate_dime" was calculated first and function "calculate_quarters" calculated later??
    // Answer: We lost the highest efficient change of coins which was quarters.
    // for example: cents was equals to 99... cents = 99, calculate_dimes first... 99 / 10 = 9 and remaining cents = 9 and then we calculate nickels =>... 9 / 5 = 1 and cents = 4.... pennies = 4.
    // So total would be what => 9 + 1 + 4 = 14 and that's wrong ❌
    // Hope you will understand functions placements and their execution chronology.

    // step 32: Machine: Aaaan, It's simple, let's go inside to function "calculate_dime" with an argument which is cents and cents are 24 remained....
    int dimes = calculate_dimes(cents); // step 38: Now, dimes = 2.

    // step 39: Machine: Arithmetics, It's my left hand work 😎.
    // step 40: Machine: cents = 24, dimes = 2.
    // step 41: Machine: cents = cents - 2 * 10
    // step 42: Machine: cents = cents - 20
    // step 43: Machine: cents = 24 - 20
    // step 44: Machine: cents = 4.
    cents = cents - dimes * 10;

    // Note (IMP): Now cents = 4, quarters = 3, dimes = 2 ✔ ⚠

    // Calculate the number of nickels to give the customer
    // step 45: Machine let's call calculate_nickels function with an actual argument / parameter cents = 4.
    int nickels = calculate_nickels(cents); // step 51: nickels = 0

    // step 52: cents = cents - nickels * 5;
    // step 53: cents = cents - 0 * 5;
    // step 54: cents = cents - 0;
    // step 55: cents = 4 - 0.
    // step 56: cents = 4.  // That's one more prominent reason for functions choronlogical placements top to bottom or higher or lower.
    cents = cents - nickels * 5;

    // Note (IMP): Now cents = 4, quarters = 3, dimes = 2, nickels = 0 ✔ ⚠

    // Calculate the number of pennies to give the customer
    // step 56: It's a useless function why?? notice we are doing nothing but dividing cents by integer 1 inside calculate_pennies function and multiplying calculated pennies again by 1 and obviously we know it's worthless.
    int pennies = calculate_pennies(cents); // step 58: pennies = 4;
    // step 59: cents = cents - pennies * 1;
    // step 60: cents = cents - 4 * 1;
    // step 6q: cents = cents - 4;
    // step 6w: cents = 4 - 4;
    // step 63: cents = 0;
    cents = cents - pennies * 1;

    // Note (IMP): Now cents = 0, quarters = 3, dimes = 2 and pennies = 4 ✔ ⚠

    // Sum coins
    // step 64: coins = quarters + dimes + nickels + pennies;
    // step 65: coins = 3 + 2 + 0 + 4
    // step 66: coins = 9
    int coins = quarters + dimes + nickels + pennies;

    // Note (IMP): Now cents = 0, quarters = 3, dimes = 2, pennies = 4 and coins = 9 ✔ ⚠

    // Print total number of coins to give the customer
    // step 67: Printf function, Okay it seems all okay and have two arguments "coins" after "," and a string of "%i" format specifier & a "\n" new line before ",".
    // step 68: Machine: Let me print into the terminal (Black Box).
    printf("%i\n", coins);

    // step 69: Nothing to execute anything more. Now let's go back to where we were before calling main function. Ahaan Gotcha, It's our main function so it's the End.

    // ;`)
}

int get_cents(void)
{
    // step 5: Yes control has now on this "get_cents" function. So machine will read its first line.
    // step 6: Machine reads first line like this... (Machine: Okay here's a variable of integer type is declared and no value is assigned to it. So i'm assigning 0 into it by default).
    int change_owed;

    // step 7: Machine now sense it's a loop (do-while loop). Machine would say it's jumping time, I'm ready. Let's first go inside to the "do"'s scope...
    do {
        // step 8: Control is here now. Machine reads line of code given below and tries to execute it.
        // step 8 (a): Machine: Okay "change_owed" variable is used to assign a value into it asked from user via "get_int" cs50's builtin function.
        // step 8 (b): Machine prompts user for an integer value. A proactive user enters some value into it.
        change_owed = get_int("change owed: ");

    // step 9: Machine: Ahaan, It's a while statement so i'll check condition whether outcome fulfils conditional checks or not?
    // step 10 (a): For example, If user entered a string or any negative integer or any invalid input then...
    // step 10 (b): Machine will say: It's a wrong input i didn't expected this from user. Let's jump back inside "do" statement's scope...
    // step 10 (c): Machine will again prompt user, therefore in technical way it will jump the control back inside to the "do" statement again and ask user to provide a valid input this time.
    // step 10 (d): This process of conditional jumps will recurr until user provides a valid expected value.
    // step 11: Machine got a valid input. Let's say 99.
    } while (change_owed < 0);

    // step 12: Machine reads line of code given below. Machine: Ohhh yes it's a return statement.
    // step 13: Machine: Let me check first if returning value is correct or not. Return value is expected to be an integer and voila "change_owed" variable is also an integer type variable and currently it contains an integer value 99, Perfect i'm going to return 99.
    return change_owed;

    // step 14: Machine will destroy the function and it's all containing variables and all statements after handing over value 99 to where it was actually called from.

    // step 15: Machine: Let's go back to where we left. Where we left??? Simplest way to determine for us (humans) to check first step that was taken inside this function. what's that ?? that's step 5. So let's go back to step 4.

    // step 16: We as humans needs to determine steps but since machine are programmed smarter than us. Machine know where was the control before the execution of this function.... Now going back and machine will also but after destroying this function from memory (stack ;`)).
}

int calculate_quarters(int cents)
{
    // step 19: Machine: Yes got some arithmetic operations to do...
    // step 20: let's perform division operation. cent = 99 and we need to divide it by 25.
    // step 21: 99 / 25 = 3.96. But variable "quarters" expects to contain an integer value only. Variable "cents" is also an integer value. So the result of 99 / 25 will be an integer also (Some lower level stuff go learn more about it it you're curious).
    // step 22: Okay now variable "quarters = 3"
    int quarters = cents / 25;

    // step 23: Machine: Yes got to return back to where we left of, with value 3.
    return quarters;

    // step 24: Machine returned back... So you should also 😏
}

int calculate_dimes(int cents)
{
    // step 33: Machine: arithmetics again...
    // step 34: dimes = 24 / 10
    // step 35: dimes = 2
    int dimes = cents / 10;

    // step 36: return 2.
    return dimes;

    // step37: Machine returned with value 2.
}

int calculate_nickels(int cents)
{
    // step 46: Machine: Arithmetics 🥱
    // step 47: Machine: nickels = 4 / 5.
    // step 48: Machine: nickels = 0        <- interesting hope you're not surprised... it's how C-lang's arithmetic works. 4/5 = 0.8 but only integer is acceptable. So machine removed the fractional / decimal value .8 and took only 0 in account.
    int nickels = cents / 5;

    // step 49: return 0;
    return nickels;

    // step 50: Machine returned with value 0.
}

int calculate_pennies(int cents)
{
    // step 57: return cents = 4. Machine returned with value 4.
    return cents;
}