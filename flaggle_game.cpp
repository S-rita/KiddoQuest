#include "flaggle_game.h"
#include "./ui_flaggle_game.h"
#include "country.h"
#include "gamecomplete.h"
#include "geographywindow.h"
#include <cstdlib>
#include <ctime>
#include <vector>
#include <QPixmap>
#include <QMessageBox>

int RoundGame = 11;

flaggle_game::flaggle_game(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::flaggle_game)
{
    ui->setupUi(this);
    
    Country c1("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Afghanistan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Afghanistan.png",
               "Afghanistan", "Asia", "Dari", {{{"Uzbekistan"}, "N"}, {{"Pakistan"}, "S"}, {{"Pakistan, China"}, "E"}, {{"Iran"}, "W"},
                {{"Tajikistan", "China"}, "NE"}, {{"Turkmenistan"}, "NW"}});
    Country c2("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Albania.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Albania.png",
               "Albania", "Europe", "English", {{{"Greece"}, "S"}, {{"Republic of Macedonia"}, "E"}, {{"Kosovo"}, "NE"}, {{"Montenegro"}, "NW"}});
    Country c3("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Algeria.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Algeria.png",
               "Algeria", "Africa", "English", {{{"Libya"}, "E"}, {{"Morocco"}, "W"}, {{"Tunisia"}, "NE"}, {{"Niger"}, "SE"},
                {{"Mali", "Mauritania"}, "SW"}});
    Country c4("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Andorra.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Andorra.png",
               "Andorra", "Europe", "Catalan", {{{"France"}, "N + NE + NW"}, {{"Spain"}, "S + SE + SW"}});
    Country c5("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Angola.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Angola.png",
               "Angola", "Africa", "Portuguese", {{{"Democratic Republic of the Congo"}, "N"}, {{"Namibia"}, "S"}, {{"Zambia"}, "E"}});
    Country c6("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Antigua and Barbuda.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Antigua and Barbuda.png",
               "Antigua and Barbuda", "Africa", "English");
    Country c7("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Arab League.png", "-", "Arab League");
    Country c8("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Argentina.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/South America/Argentina.png",
               "Argentina", "South America", "Spanish", {{{"Bolivia", "Paraguay"}, "N"}, {{"Uruguay"}, "E"}, {{"Chile"}, "W"},
                {{"Brazil"}, "NE"}});
    Country c9("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Armenia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Armenia.png",
               "Armenia", "Asia", "Armenian", {{{"Georgia"}, "N"}, {{"Azerbaijan"}, "S + E"}, {{"Iran"}, "S"}, {{"Turkey"}, "W"}});
    Country c10("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Aruba.png", "-", "Aruba");
    Country c11("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Australia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Australia.png",
                "Australia", "Oceania", "English");
    Country c12("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Austria.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Austria.png",
                "Austria", "Europe", "German", {{{"Czech"}, "N"}, {{"Slovenia", "Italy"}, "S"}, {{"Hungary"}, "E"},
                 {{"Liechtenstein", "Switzerland"}, "W"}, {{"Slovakia"}, "NE"}, {{"Germany"}, "SE"}});
    Country c13("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Azerbaijan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Azerbaijan.png",
                "Azerbaijan", "Asia", "Azerbaijani", {{{"Russia"}, "N"}, {{"Iran"}, "S"}, {{"Armenia", "Turkey"}, "W"}, {{"Georgia"}, "NW"}});
    Country c14("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Bahamas.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/The Bahamas.png",
                "The Bahamas", "North America", "English");
    Country c15("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Bahrain.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Bahrain.png",
                "Bahrain", "Asia", "Arabic");
    Country c16("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Bangladesh.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Bangladesh.png",
                "Bangladesh", "Asia", "Bengali", {{{"India"}, "N + E + W"}, {{"Myanmar"}, "SE"}});
    Country c17("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Babados.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Barbados.png",
                "Barbados", "North America", "English");
    Country c18("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Belarus.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Belarus.png",
                "Belarus", "Europe", "Belarusian", {{{"Ukraine"}, "S"}, {{"Russia"}, "E + NE"}, {{"Poland"}, "W"}, {{"Lithuania", "Latvia"}, "NW"}});
    Country c19("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Belgium.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Belgium.png",
                "Belgium", "Europe", "Dutch", {{{"Netherlands"}, "N"}, {{"Germany"}, "E"}, {{"Luxembourg"}, "SW"}, {{"France"}, "SW"}});
    Country c20("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Belize.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Belize.png",
                "Belize", "North America", "English", {{{"Mexico"}, "N"}, {{"Guatemala"}, "S + W"}});
    Country c21("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Benin.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Benin.png",
                "Benin", "Africa", "French", {{{"Nigeria"}, "E"}, {{"Togo"}, "W"}, {{"Niger"}, "NE"}, {{"burkina Faso"}, "NW"}});
    Country c22("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Bhutan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Bhutan.png",
                "Bhutan", "Asia", "Dzongkha", {{{"China"}, "N"}, {{"India"}, "S"}});
    Country c23("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Bolivia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/South America/Bolivia.png",
                "Bolivia", "South America", "Spanish", {{{"Brazil"}, "N + E"}, {{"Argentina"}, "S"}, {{"Peru"}, "W"}, {{"Paraguay"}, "SE"},
                 {{"Chile"}, "SW"}});
    Country c24("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Bonaire.png", "-", "Bonaire");
    Country c25("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Bosnia and Herzegovina.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Bosnia and Herzegovina.png",
                "Bosnia and Herzegovina", "Europe", "Bosnian", {{{"Croatia"}, "N + SW"}, {{"Serbia"}, "E"}, {{"Montenegro"}, "SE"}});
    Country c26("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Botswana.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Botswana.png",
                "Botswana", "Africa", "English", {{{"Namibia"}, "N + W"}, {{"South Africa"}, "S + SE"}, {{"Zimbabwe"}, "NE"}});
    Country c27("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Brazil.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/South America/Brazil.png",
                "Brazil", "South America", "Portuguese", {{{"Venezuela", "Suriname", "Guyana", "France"}, "N"}, {{"Uruguay"}, "s"},
                 {{"Bolivia", "Peru"}, "W"}, {{"Colombia"}, "NW"}, {{"Argentina", "Paraguay"}, "SW"}});
    Country c28("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Brunei.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Brunei.png",
                "Brunei", "Asia", "Malay", {{{"Malaysia"}, "S + E + W"}});
    Country c29("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Bulgaria.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Bulgaria.png",
                "Bulgaria", "Europe", "Bulgarian", {{{"Romania"}, "N"}, {{"Greece", "Turkey"}, "S"}, {{"Serbia", "Republic of Macedonia"}, "W"}});
    Country c30("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Burkina Faso.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Burkina Faso.png",
                "Burkina Faso", "Africa", "French", {{{"Togo", "Ghana"}, "S"}, {{"Niger"}, "NE"}, {{"Benin"}, "SE"}, {{"Mali"}, "NW"}});
    Country c31("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Burundi.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Burundi.png",
                "Burundi", "Africa", "Kirundi", {{{"Rwanda"}, "N"}, {{"Tanzania"}, "E + SE"}, {{"Democratic Republic of the Congo"}, "W"}});
    Country c32("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Cambodia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Cambodia.png",
                "Cambodia", "Asia", "Khmer", {{{"Laos"}, "N"}, {{"Vietnam"}, "E"}, {{"Thailand"}, "NW"}});
    Country c33("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Cameroon.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Cameroon.png",
                "Cameroon", "Africa", "French", {{{"Nigeria"}, "N + W"}, {{"Equatorial Guinea", "Gabon", "Republic of the Congo"}, "S"},
                 {{"Central African Republic"}, "E"}, {{"Chad"}, "NE"}});
    Country c34("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Canada.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Canada.png",
                "Canada", "North America", "English",{{{"United States"}, "S + NW"}, {{"Greenland"}, "NE"}});
    Country c35("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Cape Verde.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Cape Verde.png",
                "Cape Verde", "Africa", "Portuguese");
    Country c36("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Chad.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Chad.png",
                "Chad", "Africa", "Arabic", {{{"Libya"}, "N"}, {{"Central African Republic"}, "S"}, {{"Sudan"}, "E"}, {{"Niger"}, "W"},
                 {{"Cameroon", "Nigeria"}, "SW"}});
    Country c37("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Chile.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/South America/Chile.png",
                "Chile", "South America", "Spanish", {{{"Peru"}, "N"}, {{"Argentina"}, "E"}, {{"Bolivia"}, "NE"}});
    Country c38("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/China.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/China.png",
                "China", "Asia", "Mandarin", {{{"Mongolia", "Russia"}, "N"},
                 {{"India", "Bhutan", "Myanmar", "Laos", "Vietnam", "Hong Kong", "Macau"}, "S"}, {{"North Korea"}, "E"},
                 {{"India", "Pakistan", "Afghanistan", "Kyrgyzstan"}, "W"}, {{"Kyrgyzstan", "Kazakhstan"}, "NE"}, {{"Nepal"}, "SW"}});
    Country c39("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Colombia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/South America/Colombia.png",
                "Colombia", "South America", "Spanish", {{{"Ecuador", "Peru"}, "S + SW"}, {{"Venezuela"}, "E + NE"}, {{"Brazil"}, "SE"},
                 {{"Panama"}, "NW"}});
    Country c40("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Comoros.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Comoros.png",
                "Comoros", "Africa", "Comorian");
    Country c41("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Costa Rica.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Costa Rica.png",
                "Costa Rica", "North America", "Spanish",{{{"Nigaragua"}, "N"}, {{"Panama"}, "SE"}});
    Country c42("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Cote De Ivoire.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Ivory Coast.png",
                "Ivory Coast", "Africa", "French", {{{"Ghana"}, "E"}, {{"Liberia"}, "W"}, {{"Burkina Faso"}, "NE"}, {{"Guinea", "Mali"}, "NW"}});
    Country c43("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Croatia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Croatia.png",
                "Croatia", "Europe", "Croatian", {{{"Serbia"}, "E"}, {{"Hungary"}, "NE"}, {{"Bosnia and Herzegovina", "Montenegro"}, "SE"},
                 {{"Slovenia"}, "NW"}});
    Country c44("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Cuba.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Cuba.png",
                "Cuba", "North America", "Spanish");
    Country c45("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Curacao.png", "-", "Curacao");
    Country c46("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Cyprus.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Cyprus.png",
                "Cyprus", "Asia", "Greek");
    Country c47("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Denmark.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Denmark.png",
                "Denmark", "Europe", "Danish", {{{"Poland"}, "NE"}, {{"Slovakia"}, "SE"}});
    Country c48("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Djibouti.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Djibouti.png",
                "Djibouti", "Africa", "Somali", {{{"Eritrea"}, "N"}, {{"Somalia"}, "S"}, {{"Ethiopia"}, "SW"}});
    Country c49("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Dominica.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Dominica.png",
                "Dominica", "North America", "English");
    Country c50("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/East Timor.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Timor-Leste.png",
                "Timor-Leste", "Asia", "Hakka", {{{"Indonesia"}, "W"}});
    Country c51("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Ecuador.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/South America/Ecuador.png",
                "Ecuador", "South America", "Spanish", {{{"Colombia"}, "N"}, {{"Peru"}, "S + E"}});
    Country c52("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Egypt.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Egypt.png",
                "Egypt", "Africa", "Arabic", {{{"Sudan"}, "S"}, {{"Libya"}, "W"}, {{"Palestine", "Israel"}, "NE"}});
    Country c53("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/El Salvador.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/El Salvador.png",
                "El Salvador", "North America", "Spanish",{{{"Honduras"}, "NE"}, {{"Guetemala"}, "NW"}});
    Country c54("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/England.png", "-", "England");
    Country c55("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Equatorial Guinea.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Equatorial Guinea.png",
                "Equatorial Guinea", "Africa", "Spanish", {{{"Cameroon"}, "N"}, {{"Gabon"}, "S + E"}});
    Country c56("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Eritrea.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Eritrea.png",
                "Eritrea", "Africa", "Tigrinya", {{{"Ethiopia"}, "S"}, {{"Sudan"}, "W"}, {{"Djibouti"}, "SE"}});
    Country c57("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Estonia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Estonia.png",
                "Estonia", "Europe", "Estonian", {{{"Latvia"}, "S"}, {{"Russia"}, "E"}});
    Country c58("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Ethiopia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Ethiopia.png",
                "Ethiopia", "Africa", "Amharic", {{{"Eritrea"}, "N"}, {{"Kenya"}, "S"}, {{"Somalia"}, "E + SE"}, {{"South Sudan"}, "W"},
                 {{"Djibouti"}, "NE"}, {{"Sudan"}, "NW"}});
    Country c59("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Faroe Islands.png", "-", "Faroe Islands");
    Country c60("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Fiji.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Fiji.png",
                "Fiji", "Oceania", "Fijian");
    Country c61("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Finland.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Finland.png",
                "Finland", "Europe", "Finish", {{{"Norway"}, "N"}, {{"Russia"}, "E"}, {{"Sweden"}, "NW"}});
    Country c62("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/France.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/France.png",
                "France", "Europe", "Frence", {{{"Belgium", "Luxembourg"}, "N"}, {{"Andorra", "Spain"}, "S"}, {{"Switzerland"}, "E"},
                 {{"Germany"}, "NE"}, {{"Italy", "Monaco"}, "SE"}});
    Country c63("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Gabon.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Gabon.png",
                "Gabon", "Africa", "French", {{{"Cameroon"}, "N"}, {{"Republic of the Congo"}, "S + E"}, {{"Equatorial Guinea"}, "NW"}});
    Country c64("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Gambia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/The Gambia.png",
                "The Gambia", "Africa", "English", {{{"Senegal"}, "N + S +E"}});
    Country c65("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Georgia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Georgia.png",
                "Georgia", "Asia", "Georgian", {{{"Russia"}, "N + NE"}, {{"Armenia"}, "S"}, {{"Azerbaijan"}, "SE"}, {{"Turkey"}, "SW"}});
    Country c66("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Germany.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Germany.png",
                "Germany", "Europe", "German", {{{"Denmark"}, "N"}, {{"Austria", "Switzeland"}, "S"}, {{"Poland", "Czech Republic"}, "NE"},
                 {{"Netherlands", "Belgium", "Luxembourg", "France"}, "W"}});
    Country c67("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Ghana.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Ghana.png",
                "Ghana", "Africa", "English", {{{"Burkina Faso"}, "N"}, {{"Togo"}, "E"}, {{"Ivory Coast"}, "W"}});
    Country c68("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Greece.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Greece.png",
                "Greece", "Europe", "Greek", {{{"Republic of Macedonia", "Bulgaria"}, "N"}, {{"Turkey"}, "E"}, {{"Albania"}, "NW"}});
    Country c69("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Greenland.png", "-", "Greenland");
    Country c70("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Grenada.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Grenada.png",
                "Grenada", "North America", "English");
    Country c71("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Guam.png", "-", "Guam");
    Country c72("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Guatemala.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Guatemala.png",
                "Guatemala", "North America", "Spanish",{{{"Mexico"}, "N + W"}, {{"Honduras"}, "E"}, {{"Belize"}, "NE"}, {{"El Salvador"}, "SE"}});
    Country c73("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Guinea.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Guinea.png",
                "Guinea", "Africa", "French", {{{"Senegal"}, "N"}, {{"Sierra Leone", "Liberia"}, "S"}, {{"Mali"}, "NE"}, {{"Ivory Coast"}, "SE"}});
    Country c74("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Guinea-Bissau.png", "-", "Guinea-Bissau");
    Country c75("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Guyana.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/South America/Guyana.png",
                "Guyana", "South America", "English", {{{"Brazil"}, "S + SW"}, {{"Suriname"}, "E"}, {{"Venezuela"}, "W"}});
    Country c76("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Haiti.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Haiti.png",
                "Haiti", "North America", "Haitian-Creole", {{{"Dominican Republic"}, "W"}});
    Country c77("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Honduras.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Honduras.png",
                "Honduras", "North America", "Spanish", {{{"Guatemala"}, "W"}, {{"Nicaragua"}, "SE"}, {{"El Salvador"}, "SW"}});
    Country c78("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Hongkong.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Hong Kong.png",
                "Hong Kong", "Asia", "Cantonese", {{{"China"}, "N"}});
    Country c79("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Hungary.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Hungary.png",
                "Hungary", "Europe", "Hungarian", {{{"Slovakia"}, "N"}, {{"Serbia"}, "S"}, {{"Romania"}, "E"}, {{"Austria"}, "W"},
                 {{"Ukraine"}, "NE"}, {{"Romania"}, "SE"}, {{"Croatia", "Slovenia"}, "SW"}});
    Country c80("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Iceland.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Iceland.png",
                "Iceland", "Europe", "Icelandic");
    Country c81("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/India.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/India.png",
                "India", "Asia", "Hindi", {{{"China", "Nepal", "Bhutan"}, "N"}, {{"Bangladesh", "Myanmar"}, "E"}, {{"Pakistan"}, "W"}});
    Country c82("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Indonesia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Indonesia.png",
                "Indonesia", "Asia", "Indonesian", {{{"Malaysia"}, "N"}, {{"Timor-Leste", "Papua New Guinea"}, "E"}});
    Country c83("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Iran.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Iran.png",
                "Iran", "Asia", "Persian", {{{"Azerbaijan", "Armenia", "Turkmenistan"},"N"}, {{"Afghanistan"}, "E"}, {{"Iraq"}, "W"},
                 {{"Pakistan"}, "SE"}, {{"Turkey"}, "NW"}});
    Country c84("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Iraq.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Iraq.png",
                "Iraq", "Asia", "Arabic", {{{"Turkey"}, "N"}, {{"Saudi Arabia"}, "S"}, {{"Iran"}, "E"}, {{"Syria"}, "W"},
                 {{"Kuwait"}, "SE"}, {{"Jordan"}, "SW"}});
    Country c85("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Ireland.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Ireland.png",
                "Ireland", "Europe", "English");
    Country c86("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Israel.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Israel.png",
                "Israel", "Asia", "Hebrew", {{{"Lebanon"}, "N"}, {{"Jordan", "State of Palestine"}, "E"}, {{"Syria"}, "NE"},
                 {{"Egypt", "State of Palestine"}, "SW"}});
    Country c87("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Italy.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Italy.png",
                "Italy", "Europe", "Italian", {{{"Switzerland", "Autria"}, "N"}, {{"Slovenia"}, "NE"}, {{"France"}, "SE"}});
    Country c88("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Jamaica.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Jamaica.png",
                "Jamaica", "North America", "English");
    Country c89("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Japan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Japan.png",
                "Japan", "Asia", "Japanese");
    Country c90("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Jordan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Jordan.png",
                "Jordan", "Asia", "Arabic", {{{"Syria"}, "N"}, {{"Saudi Arabia"}, "S + E"}, {{"State of Palestine", "Israel"}, "W"},
                 {{"Iraq"}, "NE"}});
    Country c91("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Kazakhstan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Kazakhstan.png",
                "Kazakhstan", "Asia", "Russian", {{{"Russia"}, "N + NE"}, {{"Uzbekistan"}, "S"}, {{"China"}, "E"}, {{"Kyrgyzstan"}, "SE"},
                 {{"Turkmenistan"}, "SW"}});
    Country c92("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Kenya.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Kenya.png",
                "Kenya", "Africa", "Bantu", {{{"Ethiopia"}, "N"}, {{"Tanzania"}, "S"}, {{"Somalia"}, "E"}, {{"Uganda"}, "W"}, {{"South Sudan"}, "NW"}});
    Country c93("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Kiribati.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Kiribati.png",
                "Kiribati", "Oceania", "Gilbertese");
    Country c94("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Kosovo.png", "-", "Kosovo");
    Country c95("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Kuwait.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Kuwait.png",
                "Kuwait", "Asia", "Arabic", {{{"Iraq"}, "N"}, {{"Saudi Arabia"}, "S"}});
    Country c96("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Kyrgyzstan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Kyrgyzstan.png",
                "Kyrgyzstan", "Asia", "Kyrgyz", {{{"Kazakhstan"}, "N"}, {{"Tajikistan"}, "S"}, {{"China"}, "E + SE"}, {{"Uzbekistan"}, "W"}});
    Country c97("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Laos.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Laos.png",
                "Laos", "Asia", "Lao", {{{"Vietnam"}, "E"}, {{"Thailand"}, "W + SW"}, {{"Cambodia"}, "SE"}, {{"Myanmar", "China"}, "NW"}});
    Country c98("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Latvia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Latvia.png",
                "Latvia", "Europe", "Latvian", {{{"Estonia"}, "N"}, {{"Lithuania"}, "S"}, {{"Russia"}, "E"}, {{"Belarus"}, "SE"}});
    Country c99("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Lebanon.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Lebanon.png",
                "Lebanon", "Asia", "Arabic", {{{"Syria"}, "N + E"}, {{"Israel"}, "S"}});
    Country c100("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Lesotho.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Lesotho.png",
                 "Lesotho", "Africa", "Sotho", {{{"South Africa"}, "N + S + E + W"}});
    Country c101("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Liberia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Liberia.png",
                 "Liberia", "Africa", "English", {{{"Guinea"}, "N"}, {{"Ivory Coast"}, "E"}, {{"Sierra Leone"}, "NW"}});
    Country c102("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Libya.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Libya.png",
                 "Libya", "Africa", "Arabic", {{{"Chad"}, "S"}, {{"Egypt"}, "E"}, {{"Algeria"}, "W"}, {{"Sudan"}, "SE"}, {{"Tunisia"}, "NW"},
                  {{"Niger"}, "SW"}});
    Country c103("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Liechtenstein.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Liechtenstein.png",
                 "Liechtenstein", "Europe", "German", {{{"Switzerland"}, "E"}, {{"Austria"}, "W"}});
    Country c104("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Lithuania.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Lithuania.png",
                 "Lithuania", "Europe", "Lithuanian", {{{"Latvia"}, "N"}, {{"Belarus", "Poland"}, "S"}, {{"Belarus"}, "E"}, {{"Russia"}, "SW"}});
    Country c105("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Luxembourg.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Luxembourg.png",
                 "Luxembourg", "Europe", "French", {{{"Belgium"}, "N + W"}, {{"France"}, "S"}, {{"Germany"}, "E"}});
    Country c106("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Macao.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Macao.png",
                 "Macao", "Asia", "Cantonese", {{{"China"}, "N"}});
    Country c107("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Macedonia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Republic of Macedonia.png",
                 "Republic of Macedonia", "Europe", "Macedonian", {{{"Serbia"}, "N"}, {{"Greece"}, "S"}, {{"Bulgaria"}, "E"}, {{"Albania"}, "W"},
                  {{"Kosovo"}, "NW"}});
    Country c108("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Madagascar.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Madagascar.png",
                 "Madagascar", "Africa", "Malagasy");
    Country c109("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Malawi.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Malawi.png",
                 "Malawi", "Africa", "Chichewa", {{{"Tanzania"}, "N + NE"}, {{"Mozambique"}, "S + E"}, {{"Zambia"}, "W"}});
    Country c110("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Malaysia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Malaysia.png",
                 "Malaysia", "Asia", "Malay", {{{"Brunei"}, "N"}, {{"Indonesia"}, "S"}});
    Country c111("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Maldives.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Maldives.png",
                 "Maldives", "Asia", "Dhivehi");
    Country c112("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Mali.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Mali.png",
                 "Mali", "Africa", "Bambara", {{{"Algeria"}, "N"}, {{"Burkina Faso", "Ivory Coast"}, "S"}, {{"Niger"}, "E"},
                  {{"Guinea", "Senegal"}, "W"}, {{"Mauritania"}, "NW"}});
    Country c113("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Malta.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Malta.png",
                 "Malta", "Europe", "Maltese");
    Country c114("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Mauritania.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Mauritania.png",
                 "Mauritania", "Africa", "Arabic", {{{"Mali"}, "E + SE"}, {{"Algeria"}, "NE"}, {{"Senegal"}, "SW"}});
    Country c115("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Mauritius.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Mauritius.png",
                 "Mauritius", "Africa", "English");
    Country c116("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Mexico.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Mexico.png",
                 "Mexico", "North America", "Spanish", {{{"United States"}, "N"}, {{"Guatemala", "Belize"}, "SE"}});
    Country c117("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Micronesia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Federated States of Micronesia.png",
                 "Federated States of Micronesia", "Oceania", "English");
    Country c118("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Moldova.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Moldova.png",
                 "Moldova", "Europe", "Romanian", {{{"Ukraine"}, "N + S + E"}, {{"Romania"}, "W"}});
    Country c119("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Monaco.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Monaco.png",
                 "Monaco", "Europe", "French", {{{"France"}, "N + E + W"}});
    Country c120("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Mongolia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Mongolia.png",
                 "Mongolia", "Asia", "Mongolian", {{{"Russia"}, "N"}, {{"China"}, "S"}});
    Country c121("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Montenegro.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Montenegro.png",
                 "Montenegro", "Europe", "Montenegrin", {{{"Bosnia and Herzegovina"}, "N"}, {{"Kosovo"}, "E"}, {{"Serbia"}, "NE"},
                  {{"Albania"}, "SE"}, {{"Croatia"}, "NW"}});
    Country c122("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Morocco.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Morocco.png",
                 "Morocco", "Africa", "Arabic", {{{"Algeria"}, "E"}});
    Country c123("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Mozambique.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Mozambique.png",
                 "Mozambique", "Africa", "Portuguese", {{{"Tanzania"}, "N"}, {{"Zimbabwe"}, "W"}, {{"Zambia", "Malawi"}, "NW"},
                  {{"Swaziland", "South Africa"}, "SW"}});
    Country c124("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Myanmar.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Myanmar.png",
                 "Myanmar", "Asia", "Burmese", {{{"Laos", "Thailand"}, "E + SE"}, {{"China"}, "NE"}, {{"bangladesh", "india"}, "NW"}});
    Country c125("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Namibia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Namibia.png",
                 "Namibia", "Africa", "Malagasy", {{{"Zambia", "Angola"}, "N"}, {{"South Africa"}, "S"}, {{"Botswana, South Africa"}, "E"}});
    Country c126("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Nauru.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Nauru.png",
                 "Nauru", "Oceania", "Nauruan");
    Country c127("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Nepal.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Nepal.png",
                 "Nepal", "Asia", "Nepali", {{{"China"}, "N"}, {{"India"}, "S + E + W"}});
    Country c128("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Netherlands.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Netherlands.png",
                 "Netherlands", "Europe", "Dutch", {{{"Belgium"}, "S"}, {{"Germany"}, "E"}});
    Country c129("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/New Caledonia.png", "-", "New Caledonia");
    Country c130("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/New Zealand.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/New Zealand.png",
                 "New Zealand", "Oceania", "English");
    Country c131("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Nicaragua.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Nicaragua.png",
                 "Nicaragua", "North America", "Spanish", {{{"Honduras"}, "N"}, {{"Costa Rica"}, "S"}});
    Country c132("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Niger.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Niger.png",
                 "Niger", "Africa", "French", {{{"Nigeria"}, "S"}, {{"Chad"}, "E"}, {{"Mali"}, "W"}, {{"Libya"}, "NE"},
                  {{"Algeria"}, "NW"}, {{"Benin", "burkina Faso"}, "SW"}});
    Country c133("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Nigeria.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Nigeria.png",
                 "Nigeria", "Africa", "English", {{{"Niger"}, "N"}, {{"Cameroon"}, "E"}, {{"Benin"}, "W"}, {{"Chad"}, "NE"}});
    Country c134("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Niue.png", "Niue");
    Country c135("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/North Korea.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/North Korea.png",
                 "North Korea", "Asia", "Korea", {{{"China"}, "N"}, {{"South Korea"}, "S"}, {{"Russia"}, "NE"}});
    Country c136("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Northern Ireland.png", "-", "Northern Ireland");
    Country c137("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Northern Mariana Islands.png", "-", "Northern Mariana Islands");
    Country c138("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Norway.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Norway.png",
                 "Norway", "Europe", "Norwegian", {{{"Sweden", "Finland", "Russia"}, "E"}});
    Country c139("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Oman.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Oman.png",
                 "Oman", "Asia", "Arabic", {{{"The United Arab Emirates"}, "N"}, {{"Saudi Arabia"}, "W"}, {{"Yemen"}, "SW"}});
    Country c140("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Pakistan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Pakistan.png",
                 "Pakistan", "Asia", "Urdu", {{{"India"}, "E"}, {{"Afghanistan"}, "W"}, {{"China"}, "NE"}, {{"Iran"}, "SW"}});
    Country c141("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Palau.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Palau.png",
                 "Palau", "Oceania", "Palauan");
    Country c142("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Palestine.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/State of Palestine.png",
                 "State of Palestine", "Asia", "Arabic", {{{"Israel"}, "N + S + E + W"}, {{"Egypt"}, "SW"}});
    Country c143("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Panama.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Panama.png",
                 "Panama", "North America", "Spanish", {{{"Costa Rica"}, "W"}, {{"Colombia"}, "SE"}});
    Country c144("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Papua New Guinea.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Papua New Guinea.png",
                 "Papua New Guinea", "Oceania", "English");
    Country c145("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Paraguay.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/South America/Paraguay.png",
                 "Paraguay", "South America", "Spanish", {{{"Argentina"}, "S + SW"}, {{"Brazil"}, "E + NE"}, {{"Bolivia"}, "NW"}});
    Country c146("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Peru.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/South America/Peru.png",
                 "Peru", "South America", "Spanish", {{{"Ecuador, Colombia"}, "N"}, {{"Chile"}, "S"}, {{"Brazil"}, "E"}, {{"bolivia"}, "SE"}});
    Country c147("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Poland.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Poland.png",
                 "Poland", "Europe", "Polish", {{{"Slovakia", "Czech Republic"}, "S"}, {{"Belarus", "Ukraine"}, "E"}, {{"Germany"}, "W"},
                  {{"Lithuania", "Russia"}, "NE"}});
    Country c148("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Portugal.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Portugal.png",
                 "Portugal", "Europe", "Portuguese", {{{"Spain"}, "N + E"}});
    Country c149("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Puerto Rico.png", "-", "Puerto Rico");
    Country c150("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Qatar.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Qatar.png",
                 "Qatar", "Asia", "Arabic", {{{"Saudi arabia", "The United Arab Emirates"}, "N"}});
    Country c151("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Romania.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Romania.png",
                 "Romania", "Europe", "Romanian", {{{"Ukraine"}, "N"}, {{"Bulgaria"}, "S"}, {{"Ukarine", "Moldova"}, "E"}, {{"Hungary"}, "W"},
                  {{"Serbia"}, "SW"}});
    Country c152("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Russia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Russia.png",
                 "Russia", "Europe", "Russian", {{{"Georgia", "Azerbaijan", "Mongolia", "China", "North Korea"}, "S"},
                  {{"Estonia", "Latvia", "Belarus", "Ukraine"}, "W"}, {{"Kazakhstan"}, "SE"}, {{"Norway", "Finland"}, "NW"}, {{"China"}, "SW"}});
    Country c153("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Rwanda.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Rwanda.png",
                 "Rwanda", "Africa", "Kinyarwanda", {{{"Uganda"}, "N"}, {{"Burundi"}, "S"}, {{"Tanzania"}, "E"},
                  {{"Democratic Republic of the Congo"}, "W"}});
    Country c154("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Saba.png", "-", "Saba");
    Country c155("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Saint Eustatius.png", "-", "Saint Eustatius");
    Country c156("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Saint Kitts and Nevis.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Saint Kitts and Nevis.png",
                 "Saint Kitts and Nevis", "North America", "English");
    Country c157("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Saint Lucia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Saint Lucia.png",
                 "Saint Lucia", "North America", "English");
    Country c158("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Saint Martin.png", "-", "Saint Martin");
    Country c159("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Saint Patrick.png", "-", "Saint Patrick");
    Country c160("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Saint Vincent and the Grenadines.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Saint Vincent and the Grenadines.png",
                 "Saint Vincent and the Grenadines", "North America", "English");
    Country c161("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Samoa.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Samoa.png",
                 "Samoa", "Oceania", "Samoan");
    Country c162("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/San Marino.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/San Marino.png",
                 "San Marino", "Europe", "Italian", {{{"Italy"}, "N + S + E + W"}});
    Country c163("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Sao Tome and Principe.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Sao Tome and Principe.png",
                 "Sao Tome and Principe", "Africa", "Portuguese");
    Country c164("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Saudiarabia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Saudi Arabia.png",
                 "Saudi Arabia", "Asia", "Arabic", {{{"Jordan", "Iraq", "Kuwait"}, "N"}, {{"Yemen"}, "S"},
                  {{"Qatar", "The United Arab Emirates"}, "E"}, {{"Oman"}, "SE"}});
    Country c165("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Scotland.png", "-", "Scotland");
    Country c166("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Senegal.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Senegal.png",
                 "Senegal", "Africa", "French", {{{"Mauritania"}, "N"}, {{"Mali"}, "E"}, {{"Guinea"}, "SE"}});
    Country c167("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Serbia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Serbia.png",
                 "Serbia", "Europe", "Serbian", {{{"Hungary"}, "N"}, {{"Republic of Macedonia"}, "S"},
                  {{"Croatia", "Bosnia and Herzegovina"}, "W"}, {{"Romania"}, "NE"}, {{"Bulgaria"}, "SE"}, {{"Montenegro"}, "SW"}});
    Country c168("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Sierra Leone.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Sierra Leone.png",
                 "Sierra Leone", "Africa", "English", {{{"Liberia"}, "SE"}});
    Country c169("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Singapore.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Singapore.png",
                 "Singapore", "Asia", "Malay");
    Country c170("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Slovakia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Slovakia.png",
                 "Slovakia", "Europe", "Slovak", {{{"Poland"}, "N"}, {{"Hungary"}, "S"}, {{"Ukraine"}, "E"}, {{"Austria"}, "W"},
                  {{"Czech Republic"}, "NW"}});
    Country c171("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Slovenia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Slovenia.png",
                 "Slovenia", "Europe", "Slovene", {{{"Austria"}, "N"}, {{"Croatia"}, "S"}, {{"Italy"}, "W"}, {{"Hungary"}, "NE"},
                  {{"Croatia"}, "SE"}});
    Country c172("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Somalia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Somalia.png",
                 "Somalia", "Africa", "Somali", {{{"Ethiopia"}, "W"}, {{"Djibouti"}, "NW"}, {{"Kenya"}, "SW"}});
    Country c173("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/South Afica.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/South Africa.png",
                 "South Africa", "Africa", "Zulu", {{{"Namibia", "Botswana", "Zimbabwe"}, "N"}, {{"Mozambique"}, "E + NE"}});
    Country c174("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/South Korea.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/South Korea.png",
                 "South Korea", "Asia", "Korea", {{{"North Korea"}, "N"}});
    Country c175("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/South Sudan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/South Sudan.png",
                 "South Sudan", "Africa", "English", {{{"Sudan"}, "N"}, {{"Uganda"}, "S"}, {{"Ethiopia"}, "E"},
                  {{"Central African Republic"}, "W"}, {{"Kenya"}, "SE"}, {{"Democratic Republic of the Congo"}, "SW"}});
    Country c176("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Spain.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Spain.png",
                 "Spain", "Europe", "Spanish", {{{"France", "Andorra"}, "N"}, {{"Portugal"}, "W"}});
    Country c177("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Sri Lanka.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Sri Lanka.png",
                 "Sri Lanka", "Asia", "Sinhala");
    Country c178("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Sudan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Sudan.png",
                 "Sudan", "Africa", "Arabic", {{{"Egypt"}, "N"}, {{"South Sudan"}, "S"}, {{"Chad"}, "W"}, {{"Eritrea"}, "NE"},
                  {{"Ethiopia"}, "SE"}, {{"Libya"}, "NW"}, {{"Central African Republic"}, "SW"}});
    Country c179("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Suriname.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/South America/Suriname.png",
                 "Suriname", "South America", "Dutch", {{{"Brazil"}, "S"}, {{"France"}, "E"}, {{"Guyana"}, "W"}});
    Country c180("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Swaziland.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Swaziland.png",
                 "Swaziland", "Africa", "Swati", {{{"South Africa"}, "N + S + W + SW"}, {{"Mozambique"}, "NE"}});
    Country c181("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Sweden.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Sweden.png",
                 "Sweden", "Europe", "Swedish", {{{"Norway"}, "N + W"}, {{"Finland"}, "NE"}});
    Country c182("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Switzerland.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Switzerland.png",
                 "Switzerland", "Europe", "German", {{{"Germany"}, "N"}, {{"Italy"}, "S"}, {{"Austria", "Liechtenstein"}, "E"}, {{"France"}, "W"}});
    Country c183("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Syria.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Syria.png",
                 "Syria", "Asia", "Arabic", {{{"Turkey"}, "N"}, {{"Jordan"}, "S"}, {{"Iraq"}, "E + SE"}, {{"Israel", "Lebanon"}, "SW"}});
    Country c184("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Taiwan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Taiwan.png",
                 "Taiwan", "Asia", "Mandarin");
    Country c185("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Tajikistan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Tajikistan.png",
                 "Tajikistan", "Asia", "Tajik", {{{"Kysgyzstan"}, "N"}, {{"Afghanistan"}, "S"}, {{"China"}, "E"}, {{"Uzbekistan"}, "W"}});
    Country c186("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Tanzania.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Tanzania.png",
                 "Tanzania", "Africa", "Kiswahili", {{{"Uganda"}, "N"}, {{"Mozambique", "Malawi"}, "S"},
                  {{"Rwanda", "Burundi", "Democratic Republic of the Congo"}, "W"}, {{"kenya"}, "NE"}, {{"Zambia"}, "SW"}});
    Country c187("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Thailand.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Thailand.png",
                 "Thailand", "Asia", "Thai", {{{"Malaysia"}, "S"}, {{"Laos"}, "NE"}, {{"Cambodia"}, "SE"}, {{"Myanmar"}, "NW"}});
    Country c188("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/the Central-Afican Republic.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Central African Republic.png",
                 "Central African Republic", "Africa", "Sango", {{{"Chad"}, "N"}, {{"Democratic Republic of the Congo"}, "S"},
                  {{"South Sudan"}, "E"}, {{"Cameroon"}, "W"}, {{"Sudan"}, "NE"}, {{"Republic of the Congo"}, "SW"}});
    Country c189("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/the Czech Republic.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Czech Republic.png",
                 "Czech Republic", "Europe", "Czech", {{{"Austria"}, "S"}, {{"Germany"}, "W"}});
    Country c190("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/the Democratic Republic of the Congo.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Democratic Republic of the Congo.png",
                 "Democratic Republic of the Congo", "Africa", "French", {{{"Central African Republic"}, "N"}, {{"Zambia"}, "S + SE"},
                  {{"Uganda", "Rwanda", "Burundi", "Tanzania"}, "E"}, {{"South Sudan"}, "NE"}, {{"Republic of the Congo"}, "NW"},
                  {{"Angola"}, "SW"}});
    Country c191("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/the Dominican Republic.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/Dominican Republic.png",
                 "the Dominican Republic", "North America", "Spanish", {{{"Haiti"}, "E"}});
    Country c192("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/the Marshall Islands.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Marshall Islands.png",
                 "Marshall Islands", "Oceania", "Marshallese");
    Country c193("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/the Philippines.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Philippines.png",
                 "Philippines", "Asia", "Filipino");
    Country c194("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/the Republic of the Congo.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Republic of the Congo.png",
                 "Republic of the Congo", "Africa", "French", {{{"Angola"}, "S"}, {{"Gabon"}, "W"}, {{"Central African Republic"}, "NE"},
                  {{"Democratic Republic of the Congo"}, "SE"}, {{"Cameroon"}, "NW"}});
    Country c195("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/the Seychelles.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Seychelles.png",
                 "Seychelles", "Africa", "Seychellois Creole");
    Country c196("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/the Solomon Islands.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Solomon Islands.png",
                 "Solomon Islands", "Oceania", "English");
    Country c197("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/the United Arab Emirates.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/The United Arab Emirates.png",
                 "The United Arab Emirates", "Asia", "Arabic", {{{"Saudi Arabia"}, "S"}, {{"Oman"}, "E"}});
    Country c198("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/the United Kingdom.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/The United Kingdom.png",
                 "The United Kingdom", "Europe", "English", {{{"Ireland"}, "W"}});
    Country c199("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/the United States.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/North America/United States.png",
                 "United States", "North America", "English", {{{"Canada"}, "N"}, {{"Mexico"}, "S"}});
    Country c200("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Togo.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Togo.png",
                 "Togo", "Africa", "French", {{{"Burkina Faso"}, "N"}, {{"Benin"}, "E"}, {{"Ghana"}, "W"}});
    Country c201("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Tonga.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Tonga.png",
                 "Tonga", "Oceania", "Tongan");
    Country c202("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Trinidad and Tobago.png", "-", "Trinidad and Tobago");
    Country c203("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Tunisia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Tunisia.png",
                 "Tunisia", "Africa", "Arabic", {{{"Algeria"}, "W + SW"}, {{"Libya"}, "SE"}});
    Country c204("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Turkey.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Turkey.png",
                 "Turkey", "Asia", "Turkish", {{{"Syria"}, "S"}, {{"Armania", "Azerbaijan", "Iran"}, "E"}, {{"Georgia"}, "NE"},
                  {{"Iraq"}, "SE"}, {{"Greece", "Bulgaria"}, "NW"}});
    Country c205("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Turkmenistan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Turkmenistan.png",
                 "Turkmenistan", "Asia", "Turkmen", {{{"Uzbekistan"}, "N + E"}, {{"Iran"}, "S"}, {{"Afghanistan"}, "SE"}, {{"Kazakhstan"}, "NW"},
                  {{"Iran"}, "SW"}});
    Country c206("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Tuvalu.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Tuvalu.png",
                 "Tuvalu", "Oceania", "Tuvaluan");
    Country c207("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Uganda.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Uganda.png",
                 "Uganda", "Africa", "English", {{{"South Sudan"}, "N"}, {{"Tanzania"}, "S"}, {{"Kenya"}, "E"},
                  {{"Democratic Republic of the Congo"}, "W"}, {{"Rwanda"}, "SW"}});
    Country c208("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Ukraine.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Europe/Ukraine.png",
                 "Ukraine", "Europe", "Ukrainian", {{{"Belarus"}, "N"}, {{"Russia"}, "E"}, {{"Poland", "Slovakia", "Hungary"}, "W"},
                  {{"Russia"}, "NE"}, {{"Romania", "Moldova"}, "SW"}});
    Country c209("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Uruguay.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/South America/Uruguay.png",
                 "Uruguay", "South America", "Spanish", {{{"Brazil"}, "N + NE"}, {{"Argentina"}, "W + SW"}});
    Country c210("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Uzbekistan.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Uzbekistan.png",
                 "Uzbekistan", "Asia", "Uzbek", {{{"Kazakhstan"}, "N"}, {{"Afghanistan"}, "S"}, {{"Kyrgyzstan"}, "NE"}, {{"Tajikistan"}, "SE"},
                  {{"Turkmenistan"}, "SW"}});
    Country c211("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Vanuatu.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Vanuatu.png",
                 "Vanuatu", "Oceania", "Bislama");
    Country c212("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Vatican City.png", "-", "Vatican City");
    Country c213("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Venezuela.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/South America/Venezuela.png",
                 "Venezuela", "South America", "Spanish", {{{"Brazil"}, "S"}, {{"Guyana"}, "E"}, {{"Colombia"}, "W"}});
    Country c214("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Vietnam.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Vietnam.png",
                 "Vietnam", "Asia", "Vietnamese", {{{"China"}, "N"}, {{"Laos", "Cambodia"}, "W"}});
    Country c215("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Wales.png", "-", "Wales");
    Country c216("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Yemen.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Asia/Yemen.png",
                 "Yemen", "Asia", "Arabic", {{{"Saudi Arabia"}, "N"}, {{"Oman"}, "NE"}});
    Country c217("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Zambia.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Zambia.png",
                 "Zambia", "Africa", "English", {{{"Democratic Republic of the Congo"}, "N"}, {{"Zimbabwe", "Botswana"}, "S"},
                  {{"Malawi"}, "E"}, {{"Angola"}, "W"}, {{"Tanzania"}, "NE"}, {{"Mozambique"}, "SE"}, {{"Namibia"}, "SW"}});
    Country c218("C:/n/year1/Cpp/pj/flaggle_game/pic/flag/Zimbabwe.png", "C:/n/year1/Cpp/pj/pic/Shape of countries/Africa/Zimbabwe.png",
                 "Zimbabwe", "Africa", "Shona", {{{"Zambia"}, "N"}, {{"South Africa"}, "S"}, {{"Mozambique"}, "E"}, {{"Botswana"}, "SW"}});

    VecFlag = {c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25,
               c26, c27, c28, c29, c30, c31, c32, c33, c34, c35, c36, c37, c38, c39, c40, c41, c42, c43, c44, c45, c46, c47, c48,
               c49, c50, c51, c52, c53, c54, c55, c56, c57, c58, c59, c60, c61, c62, c63, c64, c65, c66, c67, c68, c69, c70, c71,
               c72, c73, c74, c75, c76, c77, c78, c79, c80, c81, c82, c83, c84, c85, c86, c87, c88, c89, c90, c91, c92, c93, c94,
               c95, c96, c97, c98, c99, c100, c101, c102, c103, c104, c105, c106, c107, c108, c109, c110, c111, c112, c113, c114,
               c115, c116, c117, c118, c119, c120, c121, c122, c123, c124, c125, c126, c127, c128, c129, c130, c131, c132, c133,
               c134, c135, c136, c137, c138, c139, c140, c141, c142, c143, c144, c145, c146, c147, c148, c149, c150, c151, c152,
               c153, c154, c155, c156, c157, c158, c159, c160, c161, c162, c163, c164, c165, c166, c167, c168, c169, c170, c171,
               c172, c173, c174, c175, c176, c177, c178, c179, c180, c181, c182, c183, c184, c185, c186, c187, c188, c189, c190,
               c191, c192, c193, c194, c195, c196, c197, c198, c199, c200, c201, c202, c203, c204, c205, c206, c207, c208, c209,
               c210, c211, c212, c213, c214, c215, c216, c217, c218};

    ui->guessFlagcomboBox->setEditable(true);

    for (int i = 0; i < VecFlag.size(); ++i) {
        ui->guessFlagcomboBox->addItem(QString::fromStdString(VecFlag[i].getCountryName()));
    }

    srand((unsigned) time(NULL));
    flag = VecFlag[rand()%(VecFlag.size())];
    QPixmap flagpic(QString::fromStdString(flag.getPathFlag()));
    ui->flag->setPixmap(flagpic.scaled(ui->flag->size(), Qt::IgnoreAspectRatio));

    QPixmap picgray("C:/n/year1/Cpp/pj/KiddoQuest-main/image for c++ project/Geography/Flags/images.png");
    ui->gray1_2->setPixmap(picgray.scaled(ui->gray1_2->size(), Qt::IgnoreAspectRatio));
    ui->gray1_3->setPixmap(picgray.scaled(ui->gray1_3->size(), Qt::IgnoreAspectRatio));
    ui->gray1_4->setPixmap(picgray.scaled(ui->gray1_4->size(), Qt::IgnoreAspectRatio));
    ui->gray2_1->setPixmap(picgray.scaled(ui->gray2_1->size(), Qt::IgnoreAspectRatio));
    ui->gray2_2->setPixmap(picgray.scaled(ui->gray2_2->size(), Qt::IgnoreAspectRatio));
    ui->gray2_3->setPixmap(picgray.scaled(ui->gray2_3->size(), Qt::IgnoreAspectRatio));
    ui->gray2_4->setPixmap(picgray.scaled(ui->gray2_4->size(), Qt::IgnoreAspectRatio));
    ui->gray3_1->setPixmap(picgray.scaled(ui->gray3_1->size(), Qt::IgnoreAspectRatio));
    ui->gray3_2->setPixmap(picgray.scaled(ui->gray3_2->size(), Qt::IgnoreAspectRatio));
    ui->gray3_3->setPixmap(picgray.scaled(ui->gray3_3->size(), Qt::IgnoreAspectRatio));
    ui->gray3_4->setPixmap(picgray.scaled(ui->gray3_4->size(), Qt::IgnoreAspectRatio));
    showPic(true);

}

flaggle_game::~flaggle_game()
{
    delete ui;
}

void flaggle_game::on_pushButton_clicked()
{
    bool found = false;
    std::string ans = ui->guessFlagcomboBox->currentText().toStdString();
    for (Flaggle i: VecFlag) {
        if (i.getCountryName() == ans) {
            found = true;
            if (flag.getCountryName() == ans) {
                qint64 playtime = timer.elapsed();
                showPic(false);
                GameComplete gamecomplete;
                gamecomplete.setModal(true);
                gamecomplete.setScore(RoundGame-1);
                gamecomplete.setTime(playtime);
                gamecomplete.exec();
                flaggle_game::close();
                RoundGame = 11;
                showPic(true);
                GeographyWindow *geographyWindow = new GeographyWindow(this);
                geographyWindow->show();
            } else if (RoundGame == 0) {
                qint64 playtime = timer.elapsed();
                GameComplete gamecomplete;
                gamecomplete.setModal(true);
                gamecomplete.setScore(0);
                gamecomplete.setTime(playtime);
                gamecomplete.lose();
                gamecomplete.exec();
                flaggle_game::close();
                RoundGame = 11;
                showPic(true);
                GeographyWindow *geographyWindow = new GeographyWindow(this);
                geographyWindow->show();
            } else {
                switch(RoundGame) {
                case 0 :
                    ans = "12) " + ans;
                    ui->ans6_2->setText(QString::fromStdString(ans));
                    QMessageBox::information(this, tr("Show Answer"), tr(flag.getCountryName().c_str()));
                case 1 :
                    ui->gray2_3->hide();
                    ans = "11) " + ans;
                    ui->ans5_2->setText(QString::fromStdString(ans));
                    break;
                case 2 :
                    ui->gray1_3->hide();
                    ans = "10) " + ans;
                    ui->ans4_2->setText(QString::fromStdString(ans));
                    break;
                case 3 :
                    ui->gray3_4->hide();
                    ans = "9) " + ans;
                    ui->ans3_2->setText(QString::fromStdString(ans));
                    break;
                case 4 :
                    ui->gray3_2->hide();
                    ans = "8) " + ans;
                    ui->ans2_2->setText(QString::fromStdString(ans));
                    break;
                case 5 :
                    ui->gray2_4->hide();
                    ans = "7) " + ans;
                    ui->ans1_2->setText(QString::fromStdString(ans));
                    break;
                case 6 :
                    ui->gray2_1->hide();
                    ans = "6) " + ans;
                    ui->ans6->setText(QString::fromStdString(ans));
                    break;
                case 7 :
                    ui->gray3_3->hide();
                    ans = "5) " + ans;
                    ui->ans5->setText(QString::fromStdString(ans));
                    break;
                case 8 :
                    ui->gray1_2->hide();
                    ans = "4) " + ans;
                    ui->ans4->setText(QString::fromStdString(ans));
                    break;
                case 9 :
                    ui->gray3_1->hide();
                    ans = "3) " + ans;
                    ui->ans3->setText(QString::fromStdString(ans));
                    break;
                case 10 :
                    ui->gray2_2->hide();
                    ans = "2) " + ans;
                    ui->ans2->setText(QString::fromStdString(ans));
                    break;
                case 11 :
                    ui->gray1_4->hide();
                    ans = "1) " + ans;
                    ui->ans1->setText(QString::fromStdString(ans));
                    break;
                }
                RoundGame -= 1;
                break;
            }
        }
    }
    if (found == false) {
        QMessageBox::information(this, tr("Warning"), tr("Invalid value."));
    }
}

void flaggle_game::showPic(bool set) {
    ui->gray1_2->setVisible(set);
    ui->gray1_3->setVisible(set);
    ui->gray1_4->setVisible(set);
    ui->gray2_1->setVisible(set);
    ui->gray2_2->setVisible(set);
    ui->gray2_3->setVisible(set);
    ui->gray2_4->setVisible(set);
    ui->gray3_1->setVisible(set);
    ui->gray3_2->setVisible(set);
    ui->gray3_3->setVisible(set);
    ui->gray3_4->setVisible(set);
}
