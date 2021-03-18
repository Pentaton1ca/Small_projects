#include <iostream>
#include <string>
#include <fstream>

int main()
{
    std::string word;
    std::ifstream fin;
    int count = 0;
    fin.open("Text.txt");
    if(fin.is_open())
    {
        while(fin >> word) count++;
        std::cout << "The number of word in \"rime.txt\" is: " << count << std::endl;
        fin.close();
    }
    else
    {
        std::cout << "ERROR. The file cannot be opened!!!" << std::endl;
        std::cout << "Please copy the file into your project folder." << std::endl;
    }
    
    return 0;
}
