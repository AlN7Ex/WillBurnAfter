
#include <iostream>
#include <fstream>
#include <set>
#include <string>

int main()
{
    std::ofstream fout;
    std::string filename = "sortIncl.txt";

    fout.open(filename);

    if (!fout.is_open())
    {
        std::cout << "Error. File no open" << std::endl;
    }

    std::set<std::string> s;
    std::cout << "Enter string for sort ('q' for exit): " << std::endl;
    std::string temp;

    while (std::cin >> temp && temp != "q")
    {
        s.emplace(temp);
    }

    for (auto elm : s)
    {
        std::cout << elm << std::endl;
        fout << elm << std::endl;
    }

    return 0;
}
