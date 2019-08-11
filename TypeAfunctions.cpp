#include <iostream>

//Type A functions are entry level function related to price inquiry and basic price manipulation

double open()
{
    std::cout << "What was the Open price of the day? ";
    double open{};
    std::cin >> open;
    return open;
}

double high()
{
    std::cout << "What was the Highest price of the day? ";
    double high{};
    std::cin >> high;
    return high;
}

double low()
{
    std::cout << "What was the Lowest price of the day? ";
    double low{};
    std::cin >> low;
    return low;
}

double close()
{
    std::cout << "What was the Close price of the day? ";
    double close{};
    std::cin >> close;
    return close;
}

double dailyRange(double h, double l)
{   //calculates the daily range from high and low of the day
    double dailyRange = h - l;
    return dailyRange;
}

double dailyOC(double o, double c)
{   //calculates the difference between the open and close
    double dailyOC{c - o};
    return dailyOC;
}

char typeDay(double dailyOC)
{
    if (dailyOC<0)
        { char bear{};
        bear = 'D';
        std::cout << "This was a Bearish day\n";
        return bear; }
    else if (dailyOC>0)
        { char bull{};
        bull = 'U';
        std::cout << "This was a Bullish day\n";
        return bull; }
    else
        { char zero{};
        zero = 'Z';
        std::cout << "THis was a Zero day\n";
        return zero; }
}
/*
int printTypeDay (char x)
{
    if (x='D')
        std::cout << "Bearish day";
    else if (x='U')
        std::cout << "Bullish day";
    else
        std::cout << "Zero day";
}
*/
