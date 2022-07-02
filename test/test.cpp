

#define CATCH_CONFIG_MAIN
#include "catch.hpp"


#include <vector>
#include <iostream>
#include <exception>
#include <cmath>
#include <iomanip>
#include <filesystem>
#include <string>
#include <fstream>

inline std::vector<std::string> fileReader(const std::string& fileName) {

    std::ifstream infile;
    infile.open(fileName);
    std::vector<std::string> result;


    std::string str;
    while (std::getline(infile, str)) result.push_back(str);
    infile.close();
    return result;


}
inline bool isStudentOutputExist() {
    return std::filesystem::exists("../test/output.txt");
}



inline bool isStudentOutputMatch() {
    std::string studentOut = "../test/output.txt";

    if (!std::filesystem::exists(studentOut)) return false;

    std::string correctOut = "../test/output_correct.txt";

    if (!std::filesystem::exists(correctOut)) return false;


    std::vector<std::string> correctResult = fileReader(correctOut);
    std::vector<std::string> studentResult = fileReader(studentOut);


    if (correctResult.size() != studentResult.size()) return false;


    for (int idx = 0; idx < studentResult.size(); idx++)
        if (correctResult[idx] != studentResult[idx]) return false;

    return true;

}

TEST_CASE("output.txt was generated correctly. Test1", "[correct_setup]"){
    REQUIRE(isStudentOutputExist() == true);
}

TEST_CASE("content of output.txt matches with TestCase in Input.txt  Test2", "[correct_execution]"){
    REQUIRE(isStudentOutputMatch() == true);

}

