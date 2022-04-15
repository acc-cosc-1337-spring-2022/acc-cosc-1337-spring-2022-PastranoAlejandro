//temperature_data.h

#include "temperature.h"
#include <vector>
#include<fstream>

#ifndef TEMPERATURE_DATA_H
#define TEMPERATURE_DATA_H

class TemperatureData
{
public:
    void save_temps(const std::vector<Temperature>& temps);
    std::vector<Temperature> get_temps();


private:
    std::string file_name{"temperature.dat"};

};




#endif