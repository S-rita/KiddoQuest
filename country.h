#ifndef COUNTRY_H
#define COUNTRY_H

#include <string>
#include <vector>

class Country
{
private:
    std::string PathFlag;
    std::string PathShape;
    std::string CountryName;
    std::string Continent;
    std::string Language;
    std::vector<std::pair<std::vector<std::string>, std::string>> Border;
public:
    Country(const std::string& PathFlag = "default", const std::string& PathShape = "default", const std::string& CountryName = "default",
            const std::string& Continent = "default", const std::string& Language = "default",
            std::vector<std::pair<std::vector<std::string>, std::string>> Border = {});

    std::string getPathFlag();
    std::string getPathShape();
    std::string getCountryName();
    std::vector<std::pair<std::vector<std::string>, std::string>> getBorder();
    bool sameContinent(Country check);
    bool sameLanguage(Country check);
    std::string checkBorder(Country check);
};

#endif // COUNTRY_H
