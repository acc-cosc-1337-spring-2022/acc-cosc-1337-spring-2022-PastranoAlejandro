#include "for_ranged.h"


using std::vector; using std::cout;

/*
Function loop_string_w_index 
The function uses an indexed for loop to iterate and display the characters in the
string as follows:
for string test displays

t
e
s
t

@param string str

*/


/*
Function loop_string_w_for_range 
The function uses a for ranged loop using auto to iterate and display the characters in the
string as follows:
for string test displays

t
e
s
t
*/

void loop_string_w_for_rangee(std::string str)
{
    for(auto ch: str)
    {

        cout<<ch<<"\n";
        ch = 'z';

    }

    cout<<"value of str: "<<str<<"\n";
}


