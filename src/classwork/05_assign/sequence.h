//write include statements for string and vector
#include<iostream>
#include<string>
#include<cctype>

using std::cout; using std::cin; using std::string;


//gc function
double get_gc_content(const string& dna);

//reverse string function

std::string reverse_string(std::string dna);

//dna complement function
string get_dna_complement(string dna);


void display_menu();

void handle_menu(int option);

std::string confirm_exit();

void run_menu();

void gc_choice();

void dna_choice();

bool check_input(string user_input);

/*
Write prototype for void function display_vector that accepts a parameter const reference vector of strings
*/


/*
Write prototype for void function update_vector_element that accepts parameters reference vector of strings,
a string search_value, and a string replace_value.
*/


