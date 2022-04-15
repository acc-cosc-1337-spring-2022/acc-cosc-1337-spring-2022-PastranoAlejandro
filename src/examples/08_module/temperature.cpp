//function code
#include "temperature.h"

using std::cout; using std::ofstream; using std::ifstream;

void write_to_file()
{
    ofstream out_file;

    cout<<"Open File\n";
    out_file.open("names.dat");

    cout<<"Writing to file...\n";

    out_file<<"C++\n";
    out_file<<"Python\n";
    out_file<<"Java\n";

    cout<<"Close File\n";
    out_file.close();

}

void read_from_file()
{
    ifstream in_file;//name of variable is in file
    cout<<"Open File\n";

    in_file.open("names.dat");

    cout<<"Read from File\n";

    std::string name;

   if(in_file.is_open())
   {
       while(in_file>>name)
       {
           cout<<name<<"\n";
       }
   }

   cout<<"Close the File\n";
   in_file.close();

}