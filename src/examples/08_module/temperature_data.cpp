//temperature_data.cpp
#include "temperature_data.h"


using std::ofstream; using std::fstream;

void save_temps(const std::vector<Temperature>& temps)
{
    ofstream out_file;
    out_file.open(file_name);

    for(auto temp: temps)
    {
        out_file<<temp.get_hour();
        out_file<<" ";
        out_file<<temp.get_reading();
        out_file<<"\n";

    }

    out_file.close();


}

std::vector<Temperature> get_temps()
{
    std::vector<Temperature> temps;
    ifstream in_file;
    in_file.open(file_name);

    int hour;
    double reading;

    if(in_file.is_open())
    {
        while(in_file>>hour>>reading)
        {
            Temperature temp(hour, reading);//create an instance/object
            temps.push_back(temp);
        }
    }
    in_file.close();

}


