#include <iostream>

std::string ROTn(std::string cypher){
    for (int startingValue=0; startingValue < cypher.length(); startingValue++){
        cypher[startingValue] -= startingValue;
    }
    return cypher;
}

int main()
{
    std::string text;
    try
    {
        std::cout << "Enter cyphered phrase: ";
        std::cin >> text;
        std::cout << std::endl;
    }catch(std::exception) { 
        std::cout << "Invalid Input" << std::endl;
        main();
    }
    std::cout << ROTn(text) << std::endl;
}
