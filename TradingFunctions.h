#ifndef TRADINGFUNCTIONS_H_INCLUDED
#define TRADINGFUNCTIONS_H_INCLUDED

double open();
double high();
double low();
double close();
double dailyRange(double h,double l);
double dailyOC(double o,double c);
char typeDay(double y);

//int formDay(double open, double close, double dailyRange);


#endif // TRADINGFUNCTIONS_H_INCLUDED
