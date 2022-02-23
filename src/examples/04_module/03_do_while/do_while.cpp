#include "do_while.h"

using std::cout; using std::cin;
//Write code for void function prompt_user to loop until
//user opts not to continue.  
void prompt_user()
{
    auto cont = 'n';
    do
    {
        //make sure to put cont variable outside the do function
        cout<<"Continue, enter y?";
        cin>>cont;

    }
    while(cont == 'y');

}

void display_menu()
{
    cout<<"1 Option\n";
    cout<<"2 Option\n";
    cout<<"3 Exit\n";


}



void run_menu()
{
    auto option = 0;

    do
    {
        display_menu();
        cout<<"Enter a number ";
        cin>>option;
        //validate data
        
        handle_menu_option(option);



    }
    while(option != 3);
    //while option is not 3 this program will continue


}

void handle_menu_option(int option)
{
    switch(option)
    {
    case 1:
        cout<<"Selected option 1\n";
        break;
    case 2:
        cout<<"Selected option 2\n";
        break;
    case 3:
        cout<<"Selected exit\n";
        break;
    default:
        cout<<"Invalid Option";

    }
}