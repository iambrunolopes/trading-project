#include <iostream>
#include "TradingFunctions.h"

// GOAL: store the open and close prices of a market and tell me if it is within the normal daily (and weekly) range or not
// REQUERIMENTS:    1) need to store open and close for every different day
                //  2) program needs to recognize when a week is over and store the open and close prices
                //  3) program needs to compare the daily (weekly) range with the previous day(s)
                //  4) need to do something about the high and low to get a impression of where it close

int main()
{
    // need a function to call the date
    // need a functionality to recognize when a week is over
    // knowing when the week is over I want the program to access the weekly range and weekly OC alone
    std::cout << "Lets store some data!\n";
    double o{open()*10000};
    double h{high()*10000};
    double l{low()*10000};
    double c{close()*10000};

    double x {dailyRange(h,l)};                 //stores the daily range in x
    double y {dailyOC(o,c)};                    //stores the difference between the open and close in y
    char z {typeDay(y)};                      //stores the info about Upday, Downday or Zero day in z

//    int z {formDay(o,c,x)};

    std::cout << "The market closed " << y << " pips" << " from open\n";
    std::cout << "The daily range was " << x <<  " pips\n";
    std::cout << "Type day returns " << z <<  '\n';

    return 0;
}


//CURRENT PROBLEMS: , and .
