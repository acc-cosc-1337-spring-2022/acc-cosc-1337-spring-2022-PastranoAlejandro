//temperature.h
#include <fstream>
#include <iostream>
#include <string>



void write_to_file();
void read_from_file();


#ifndef TEMPERATURE_H
#define TEMPERATURE_H

class Temperature
{
public:
    Temperature(int h, double r) : hour(h), reading(r){}
    int get_hour()const{return hour;}
    double get_reading()const{return reading;}
private:
    int hour;
    double reading;
};





#endif