#include "country.h"

Country::Country(const std::string& pathFlag, const std::string& pathShape, const std::string& countryName, const std::string& continent,
                 const std::string& language, std::vector<std::pair<std::vector<std::string>, std::string>> border)
                : PathFlag(pathFlag), PathShape(pathShape), CountryName(countryName), Continent(continent), Language(language), Border(border) {}

std::string Country::getPathShape() {
    return PathShape;
}

std::string Country::getPathFlag() {
    return PathFlag;
}

std::string Country::getCountryName() {
    return CountryName;
}

std::vector<std::pair<std::vector<std::string>, std::string>> Country::getBorder() {
    return Border;
}

bool Country::sameContinent(Country check) {
    return Continent == check.Continent;
}

bool Country::sameLanguage(Country check) {
    return Language == check.Language;
}

std::string Country::checkBorder(Country check) {
    std::string res;
    int n = 0;
    if (!Border.empty()) {
        for (int i = 0; i < Border.size(); ++i) {
            if (!Border[i].first.empty()) {
                for (std::string j: Border[i].first) {
                    if (j == check.getCountryName()) {
                        if (n == 0) {
                            res = Border[i].second;
                            ++n;
                        } else {
                            res = res + " + " + Border[i].second;
                        }
                    }
                }
            }
        }
        return res;
    } else {
        if (check.getBorder().empty()) {
            return "Island";
        } else {
            return res;
        }
    }
}
