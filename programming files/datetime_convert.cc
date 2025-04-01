#include <iostream>
#include <iomanip>
#include <sstream>
#include <chrono>

int main()
{
    //Creating a date string
    std::string date_str = "2022-03-17 10:45:30";
    //creating a date object
    std::tm date_obj = {};
    //creating a stringstream with the date string
    std::istringstream ss(date_str);
    //outputting the time to the stringstream
    ss >> std::get_time(&date_obj, "%Y-%m-%d %H:%M:%S");
    //creating a separate stream for formatted
    std::stringstream formatted_date_ss;
    //formatting the date
    formatted_date_ss << std::put_time(&date_obj, "%m/%d/%Y %H:%M:%S");
    //converting the formatted date to a string
    std::string formatted_date = formatted_date_ss.str();

    //outputting the formatted date to the console
    std::cout << formatted_date << std::endl;

    return 0;
}
