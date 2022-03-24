//write include statements 
#include "sequence.h"



double get_gc_content(const string& dna)
{
    double dna_size, count, gc_percent;
    dna_size = dna.size();
    for(auto& ch : dna)
    {
        if(ch == 'G' || ch == 'C')
        {
            count++;

        }
    }

    gc_percent = count/dna_size;

    return gc_percent;


}

string reverse_string(string dna)
{
    string test_var;

    for(int i = dna.size()-1; i >= 0; i--)
    {
        test_var += dna[i];

    }
    

    return test_var;

}


std::string get_dna_complement(std::string dna)
{
    
    string reverse_dna = reverse_string(dna);
    for(char i = reverse_dna.size()-1; i >= 0; i--)
    {
        switch(reverse_dna[i])
        {
            case 'G':
                reverse_dna[i] = 'C';
                break;
            case 'C':
                reverse_dna[i] = 'G';
                break;
            case 'T':
                reverse_dna[i] = 'A';
                break;
            case 'A':
                reverse_dna[i] = 'T';
                break;
        }
    }

    return reverse_dna;


}


void display_menu()
{
    cout<<"1-Get GC Cotent\n";
    cout<<"2-Get DNA Complement\n";
    cout<<"3-Exit\n";

}

void handle_menu(int option)
{
    std::string confirm;
    switch(option)
    {
    case 1:
        cout<<"GC Content function called \n";
        gc_choice();
        break;
    case 2:
        cout<<"Get DNA Complement function called \n";
        dna_choice();
        break;
    case 3:
        cout<<"Selected exit\n";
        confirm = confirm_exit();
        if(confirm == "y" || confirm == "Y")
        {
            cout<<"Exiting program\n";
        }
        break;
    default:
        cout<<"\nInvalid Option\n";
    }
}



std::string confirm_exit()
{
    string confirm_exit;
    cout<<"Are you sure you want to exit? press y to exit\n";
    cin>> confirm_exit;
    while(confirm_exit != "y" && confirm_exit != "Y")
    {
        cout<<"Invalid Input\n";
        cout<<"Are you sure you want to exit? press y to exit\n";
        cin>>confirm_exit;
    }

    return confirm_exit;
}

void run_menu()
{
    auto option = 0;
    do
    {
        display_menu();
        cout<<"Enter a number to select one of the options\n";
        while(!(cin>>option))
        {
            cout<<"Error Enter a correct number to select one of the options\n";

            cin.clear();
            cin.ignore(123, '\n');
        }

        handle_menu(option);
    }
    while(option !=3);
}


void gc_choice()
{
    std::string user_dna;
    double gc_result;
    cout<<"Enter a DNA string: \n";
    cin>>user_dna;

    if (check_input(user_dna))
    {
        gc_result = get_gc_content(user_dna);
        cout<<"The GC content: "<<gc_result<<"\n";
    }
    else
    {
        cout<<"Invalid DNA String must only include case sensitive A,T,G,C\n";
    }
    
}

void dna_choice()
{
    std::string dna;
    cout<<"Enter a DNA string: \n";
    cin>>dna;
    if (check_input(dna))
    {
        dna = get_dna_complement(dna);
        cout<<"The Dna Complement: "<<dna<<"\n";
    }
    else
    {
        cout<<"Invalid DNA String must only include case sensitive A,T,G,C\n";
    }
    
}


bool check_input(string user_input)
{
    bool valid;
    valid = true;  
    for(auto& i : user_input)
    {
        if(i != 'A' && i != 'T' && i != 'G' && i != 'C')
        {
            valid = false;
            break;
        }
    }
    
    return valid;

}




/*
Write code for void function display_vector that accepts parameter const reference vector of strings.
The function will iterate through the vector and display a string per line.
*/


/*
Write code for void function update_vector_element that accepts parameter reference vector of strings,
a string vector search_value, and a string replace_value.
The function will iterate through the vector and search for the search_value and if found will
replace the vector element with the replace_value.
*/
