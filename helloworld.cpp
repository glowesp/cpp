#include <iostream>
#include <vector>
#include <cmath>

namespace first{
    int z = 0;
}

typedef std::string text_t;
typedef int number_t;

using text_u = std::string;
using num_u = int;

int main(){

    // single line comment 
    
    /* 
        multi
        line
        comment
    */
    
    std::cout << "hello world" << std::endl;
    std::cout << "yo whats good" << '\n';


    int x; // declaration
    x = 5;
    int y = 6; // declaration of variable.

    std::cout << x << '\n';
    std::cout << y;


    //int = integer
    int x = 5;

    //double = decimal
    double y = 8.9;

    //char = single character
    char yes = y;

    //bool = true or false
    bool came = true;

    //str = objects that represents a sequence of text
    std::string name = "yang";
    std::cout << name;

    std::cout << "Hello " << name << '\n';
    std::cout << "newgen u are: " << x;

    //const keyword specifies that a variable's value is constant
    //tells the compiler to prevent anything from modifying it (read only)

    const double PI = 3.14159;
    double radius = 10;
    double circum = 2 * PI * radius;

    std::cout << circum << 'cm';

    /*namespace = provides a solution for preventing name conflicts
                  in large projects. Each entity needs a unique name.
                  namespace allows for identically named entities as long
                  as the namespaces are different

                  example above
    */

    int z = 2;
    //goes to "first" namespace 
    std::cout << first::z;

    //no need for the prefix
    using namespace first;
    std::cout << z;

    //using namespace standard so you dont need to declare std::
    using namespace std;
    cout << "no shot!";

    //safer alternative
    using std::cout;
    using std::string;
    cout << "sheesh";

    /*typedef = reserved keyword used to create an additonal name
                (alias) for another data type.
                New identifier for an existing type 
                Helps with readability and reduces typos
                Use when there is a clear benefit
                Replaced with 'using' (works better w/ templates)

                eg : typedef std::vector<std::pair<std::string, int>> pairlist_t;
                     typedef int number_t;

                using eg: using text_u = std::string;
                          using num_u = int;
    */

    text_t addy = "123 Street Street";
    std::cout << addy;

    number_t i = 21;
    std::cout << i;

    text_u gotcha = "got u";
    num_u i = 21;

    /*arithmetic operators:
    + = plus or +=n; to add number or ++; to increment by 1
    - = minus or -=n; to subtract numbers or --; to decrement by 1
    * = times or *=
    / = divide /=
    % = modulo (remainder)

    in order of:
    -parenthesis
    -multiplication & division
    -addition & subtraction 
    */

    int students = 30;
    students*=2;
    std::cout << students / 2;

    /*type conversion: conversion of a value of one data type to another
                       implicit = automatic
                       explicit = precede value with a new data type (int) x
    */

    double m = (int)3.14;
    char x = 100;
    std::cout << (char) 100;

    int correct = 8;
    int questions = 10;
    double score = correct /(double)questions * 100;
    std::cout << score;

    /*user input:
    cout << (insertion operator)
    cin >> (extraction operator)
    */

    string name;
    std::cout << "whats ur name?: ";
    std::getline(std::cin, name); // getline for reading spaces >> std::ws to eliminate any newline chars
    std::cin >> name;

    /*maths related funcs:
    z = std::max(x, y); biggest value
    z = std::min(x, y); smallest value
    z = pow(2, 4); power of
    z = sqrt(16); sqaure root
    z = abs(-3); absolute value
    z = round(x); round values
    z = ceil(x); round up, ceiling func
    z = floor(x); round down, floor func

    https://cplusplus.com/reference/cmath more funcs here

    #include <cmath>
    */

    double a = 20.9;
    double b = 40.3;
    double c;

    c =  sqrt(pow(a, 2) + pow(b, 2)); // hypotenuse calc
    cout << c;

    /*if statements: do something if a condition is true*/

    int age = 19;

    if(age >= 18){
        cout << "you are of age";
    }
    else if (age == 100){
        cout << "you are 100 years old";
    }
    else {
        cout << "you are not of age";
    }

    /*switch = alternative to using many "elif" statements
               compare one value against matching cases
    */

    int month;
    switch(month){
        case 1:
            std::cout << "it is january";
            break;
        case 2:
            std::cout << "it is febuary";
            break;
        default :
            std::cout << "not a month mate";
    }

    char grade = 'f';
    // for letters or characters in this example:
    switch(grade){
    case 'f':
        std::cout << "you is retarded";
        break;
    default:
        std::cout << "thats not a real score bro";
        break;
    }

    /*ternary operator ?: = replacement to an if/else statement
      condition ? expression1 : expression2 
    */
    
    int grade = 80;
    grade >= 50 ? std::cout << "well done u sweat" : std::cout << "you failed lol"; 

    bool hangry = true;
    //hangry ? std::cout << "eat" : std::cout << "dont eat";
    std::cout << (hangry ? "eat" : "dont eat");

    /*
    && : check if two conditions are true - AND
    || : check if at least one of two conditions is true - OR
    ! : reverses the logical state of it's operand - (NOT)
    */
    
    int temp = 37;
    if (temp > 0 && temp < 30){
        cout << "temp is good";
    }
    else {
        cout << "temp is bad";
    }

    if (temp <= 0 || temp >= 30){
        cout << "temp is bad";
    }
    else {
        cout << "temp is good";
    }
    
    bool sunny = true;
    if(!sunny){
        std::cout << "it is not sunny";
    }

    /*temp conversion program from fahrenheit to celcius*/

    double temp;
    char unit;

    std::cout << "Temperature Conversion";
    std::cout << "F = fahrenhrit\n";
    std::cout << "C = celcius\n";

    std::cin >> unit;

    if(unit == 'F' || unit == 'f'){
        std::cout << "enter temprature in celcius: ";
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "temp is " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        std::cout << "enter temprature in fahrenheit: ";
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "temp is " << temp << "F\n";
    }
    else {
        std::cout << "please enter only in C or F\n";
    }

    // string methods

    std::string name;
    cout << "enter your name";
    getline(std::cin, name);

    name.length(); // length of name
    name.empty(); // empty - returns as boolean value 
    name.clear(); // clear - clear method
    name.append("@gmail.com"); // appends a string to another string
    name.at(0); // finds the char in the string of any given index, e.g 0 = char 1 
    name.insert(0, "Y"); // inserts string at any given index
    name.find(' '); // finds the postition of a character and returns with an index, e.g whitespace ' '
    name.erase(0, 3); // erases the string at given indexes, e.g 0 = first character and 3 = third character
    name.compare(""); // compares string to another

    // while loops

    std::string name;

    while(name.empty()){ // while name == empty, run code below
        cout << "enter your name";
        getline(std::cin, name);
    }

    // do while loop : do some block of code first, then repeat again if condition is true

    int number;
    {
        cout << "enter a positive number";
        cin >> number;
    }while(number > 0)
    
    cout << "the number is " << number;

    return 0;
 

}