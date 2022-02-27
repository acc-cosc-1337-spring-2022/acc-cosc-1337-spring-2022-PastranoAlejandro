#include "dna.h"




//factorial function
int factorial (int num)
{
    auto sum = 1;
    auto i = 1;
    while(i <= num)
    {
        sum = sum * i;
        i = i + 1;
        
    }
    return sum;

}



//gcd function
int gcd(int num1, int num2)
{
    int swap_var;
    while(num1 != num2)
    {
        if(num1 < num2)
        {
            swap_var = num1;
            num1 = num2;
            num2 = swap_var;
        }

        else if(num1 > num2)
        {
            num1 = num1 - num2;
        }
    }
    return num1;
}




//menu function
void display_menu()
{
    cout<<"1-Factorial\n";
    cout<<"2-Greatest Common Divisor\n";
    cout<<"3 Exit\n";

}

void handle_menu_option(int option)
{
    std::string confirm;
    

    switch(option)
    {
    case 1:
        factorial_choice();
        break;
    case 2:
        gcd_choice();
        break;
    case 3:
        cout<<"Selected exit\n";
        confirm = confirm_exit();

        if(confirm == "y" || confirm == "Y")
        {
            cout<<"Exiting Program\n";
        }
        break;
    default:
        cout<<"\nInvalid Option\n";
        

    }

}


//menu code used in the main.cpp

void run_menu()
{
    auto option = 0;
    do
    {
        display_menu();
        cout<<"Enter a number for the options ";
        while(!(cin>>option))
        {
            cout<<"Error Enter a number: ";

            cin.clear();
            cin.ignore(123, '\n');

        }
        //validate data
        handle_menu_option(option);



    }
    while(option != 3);
}

//allowing the user to confirm the exit
std::string confirm_exit()
{
    std::string actual_exit;
    cout<<"Are you sure you want to exit? press y for yes\n";
    cin>>actual_exit;
    while (actual_exit != "y" && actual_exit != "Y")
    {
        cout<<"Invalid Input\n";
        cout<<"Are you sure you want to exit? press y for yes\n";
        cin>>actual_exit;

    }

    return actual_exit;
}


//choice functions that will be inside of the menu function
void factorial_choice()
{
    int num = 0;
    cout<<"Enter a number :";
    cin>>num;
    num = factorial(num);
    cout<<"Factorial numbers product : "<<num<<"\n";
}

void gcd_choice()
{
    int num1;
    int num2;
    cout<<"Enter Two Numbers: ";
    cin>>num1;
    cin>>num2;
    num1 = gcd(num1, num2);
    cout<<"GCD Function Product : "<<num1<<"\n";
}
