#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <string.h>

int main()
{
    std::string str1(5, 'k');
    std::string str2 = "geeksforgeeks";
    std::string str3("geeks geeks");
    std::cout << str1 << "\n"
              << str2 << "\n"
              << str3 << std::endl;

    std::string str4;
    std::cout << "Enter string: ";
    std::getline(std::cin, str4);
    std::cout << "str4 : " << str4 << std::endl;

    /******************Create array************************/

    // Using Poiters
    const char *arr1[4] = {"red", "blue", "yellow", "green"};
    for (int i = 0; i < 4; i++)
    {
        std::cout << arr1[i] << std::endl;
    }
    // Using a 2D Array
    char numbers[3][5] = {{'1', '2', '3'}, {'4', '5', '6', '7'}};
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            std::cout << numbers[i][j] << " ";
        }
    }
    /*
    // Using the vector class
    std::cout << "\n";
    std::vector<std::string> colors{"blue", "red", "green", "purple"};
    colors.push_back("yellow");
    for (int i = 0; i < sizeof(colors); i++)
    {
        std::cout << colors[i] << "\n";
    }
    */
    std::cout << "\n"
              << "**************************" << std::endl;

    // Methobs concatenate string

    std::string item("nguyen van ");
    std::string item1("Hieu");
    item.append(item1);
    std::cout << item << std::endl;

    
    return 0;
}