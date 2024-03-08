#include "geographywindow.h"
#include "ui_geographywindow.h"
#include "allgameswindow.h"

GeographyWindow::GeographyWindow(Members &member, int index, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::GeographyWindow)
    , member(member)
    , index(index)
{
    ui->setupUi(this);
    Country c1(":/image for c++ project/Geography/Flags/Afghanistan.png",
               ":/image for c++ project/Geography/Shape of countries/Asia/Afghanistan.png",
               "Afghanistan", "Asia", "Dari", {{{"Uzbekistan"}, "N"}, {{"Pakistan"}, "S"}, {{"Pakistan, China"}, "E"}, {{"Iran"}, "W"},
                {{"Tajikistan", "China"}, "NE"}, {{"Turkmenistan"}, "NW"}});
    Country c2(":/image for c++ project/Geography/Flags/Albania.png",
               ":/image for c++ project/Geography/Shape of countries/Europe/Albania.png",
               "Albania", "Europe", "English", {{{"Greece"}, "S"}, {{"Republic of Macedonia"}, "E"}, {{"Kosovo"}, "NE"}, {{"Montenegro"}, "NW"}});
    Country c3(":/image for c++ project/Geography/Flags/Algeria.png",
               ":/image for c++ project/Geography/Shape of countries/Africa/Algeria.png",
               "Algeria", "Africa", "English", {{{"Libya"}, "E"}, {{"Morocco"}, "W"}, {{"Tunisia"}, "NE"}, {{"Niger"}, "SE"},
                {{"Mali", "Mauritania"}, "SW"}});
    Country c4(":/image for c++ project/Geography/Flags/Andorra.png",
               ":/image for c++ project/Geography/Shape of countries/Europe/Andorra.png",
               "Andorra", "Europe", "Catalan", {{{"France"}, "N + NE + NW"}, {{"Spain"}, "S + SE + SW"}});
    Country c5(":/image for c++ project/Geography/Flags/Angola.png",
               ":/image for c++ project/Geography/Shape of countries/Africa/Angola.png",
               "Angola", "Africa", "Portuguese", {{{"Democratic Republic of the Congo"}, "N"}, {{"Namibia"}, "S"}, {{"Zambia"}, "E"}});
    Country c6(":/image for c++ project/Geography/Flags/Antigua and Barbuda.png",
               ":/image for c++ project/Geography/Shape of countries/Africa/Antigua and Barbuda.png",
               "Antigua and Barbuda", "Africa", "English");
    Country c7(":/image for c++ project/Geography/Flags/Arab League.png",  "-", "Arab League");
    Country c8(":/image for c++ project/Geography/Flags/Argentina.png",
               ":/image for c++ project/Geography/Shape of countries/South America/Argentina.png",
               "Argentina", "South America", "Spanish", {{{"Bolivia", "Paraguay"}, "N"}, {{"Uruguay"}, "E"}, {{"Chile"}, "W"},
                {{"Brazil"}, "NE"}});
    Country c9(":/image for c++ project/Geography/Flags/Armenia.png",
               ":/image for c++ project/Geography/Shape of countries/Asia/Armenia.png",
               "Armenia", "Asia", "Armenian", {{{"Georgia"}, "N"}, {{"Azerbaijan"}, "S + E"}, {{"Iran"}, "S"}, {{"Turkey"}, "W"}});
    Country c10(":/image for c++ project/Geography/Flags/Aruba.png",  "-", "Aruba");
    Country c11(":/image for c++ project/Geography/Flags/Australia.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Australia.png",
                "Australia", "Oceania", "English");
    Country c12(":/image for c++ project/Geography/Flags/Austria.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Austria.png",
                "Austria", "Europe", "German", {{{"Czech"}, "N"}, {{"Slovenia", "Italy"}, "S"}, {{"Hungary"}, "E"},
                 {{"Liechtenstein", "Switzerland"}, "W"}, {{"Slovakia"}, "NE"}, {{"Germany"}, "SE"}});
    Country c13(":/image for c++ project/Geography/Flags/Azerbaijan.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Azerbaijan.png",
                "Azerbaijan", "Asia", "Azerbaijani", {{{"Russia"}, "N"}, {{"Iran"}, "S"}, {{"Armenia", "Turkey"}, "W"}, {{"Georgia"}, "NW"}});
    Country c14(":/image for c++ project/Geography/Flags/Bahamas.png",
                ":/image for c++ project/Geography/Shape of countries/North America/The Bahamas.png",
                "Bahamas", "North America", "English");
    Country c15(":/image for c++ project/Geography/Flags/Bahrain.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Bahrain.png",
                "Bahrain", "Asia", "Arabic");
    Country c16(":/image for c++ project/Geography/Flags/Bangladesh.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Bangladesh.png",
                "Bangladesh", "Asia", "Bengali", {{{"India"}, "N + E + W"}, {{"Myanmar"}, "SE"}});
    Country c17(":/image for c++ project/Geography/Flags/Babados.png",
                ":/image for c++ project/Geography/Shape of countries/North America/Barbados.png",
                "Barbados", "North America", "English");
    Country c18(":/image for c++ project/Geography/Flags/Belarus.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Belarus.png",
                "Belarus", "Europe", "Belarusian", {{{"Ukraine"}, "S"}, {{"Russia"}, "E + NE"}, {{"Poland"}, "W"}, {{"Lithuania", "Latvia"}, "NW"}});
    Country c19(":/image for c++ project/Geography/Flags/Belgium.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Belgium.png",
                "Belgium", "Europe", "Dutch", {{{"Netherlands"}, "N"}, {{"Germany"}, "E"}, {{"Luxembourg"}, "SW"}, {{"France"}, "SW"}});
    Country c20(":/image for c++ project/Geography/Flags/Belize.png",
                ":/image for c++ project/Geography/Shape of countries/North America/Belize.png",
                "Belize", "North America", "English", {{{"Mexico"}, "N"}, {{"Guatemala"}, "S + W"}});
    Country c21(":/image for c++ project/Geography/Flags/Benin.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Benin.png",
                "Benin", "Africa", "French", {{{"Nigeria"}, "E"}, {{"Togo"}, "W"}, {{"Niger"}, "NE"}, {{"burkina Faso"}, "NW"}});
    Country c22(":/image for c++ project/Geography/Flags/Bhutan.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Bhutan.png",
                "Bhutan", "Asia", "Dzongkha", {{{"China"}, "N"}, {{"India"}, "S"}});
    Country c23(":/image for c++ project/Geography/Flags/Bolivia.png",
                ":/image for c++ project/Geography/Shape of countries/South America/Bolivia.png",
                "Bolivia", "South America", "Spanish", {{{"Brazil"}, "N + E"}, {{"Argentina"}, "S"}, {{"Peru"}, "W"}, {{"Paraguay"}, "SE"},
                 {{"Chile"}, "SW"}});
    Country c24(":/image for c++ project/Geography/Flags/Bonaire.png",  "-", "Bonaire");
    Country c25(":/image for c++ project/Geography/Flags/Bosnia and Herzegovina.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Bosnia and Herzegovina.png",
                "Bosnia and Herzegovina", "Europe", "Bosnian", {{{"Croatia"}, "N + SW"}, {{"Serbia"}, "E"}, {{"Montenegro"}, "SE"}});
    Country c26(":/image for c++ project/Geography/Flags/Botswana.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Botswana.png",
                "Botswana", "Africa", "English", {{{"Namibia"}, "N + W"}, {{"South Africa"}, "S + SE"}, {{"Zimbabwe"}, "NE"}});
    Country c27(":/image for c++ project/Geography/Flags/Brazil.png",
                ":/image for c++ project/Geography/Shape of countries/South America/Brazil.png",
                "Brazil", "South America", "Portuguese", {{{"Venezuela", "Suriname", "Guyana", "France"}, "N"}, {{"Uruguay"}, "s"},
                 {{"Bolivia", "Peru"}, "W"}, {{"Colombia"}, "NW"}, {{"Argentina", "Paraguay"}, "SW"}});
    Country c28(":/image for c++ project/Geography/Flags/Brunei.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Brunei.png",
                "Brunei", "Asia", "Malay", {{{"Malaysia"}, "S + E + W"}});
    Country c29(":/image for c++ project/Geography/Flags/Bulgaria.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Bulgaria.png",
                "Bulgaria", "Europe", "Bulgarian", {{{"Romania"}, "N"}, {{"Greece", "Turkey"}, "S"}, {{"Serbia", "Republic of Macedonia"}, "W"}});
    Country c30(":/image for c++ project/Geography/Flags/Burkina Faso.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Burkina Faso.png",
                "Burkina Faso", "Africa", "French", {{{"Togo", "Ghana"}, "S"}, {{"Niger"}, "NE"}, {{"Benin"}, "SE"}, {{"Mali"}, "NW"}});
    Country c31(":/image for c++ project/Geography/Flags/Burundi.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Burundi.png",
                "Burundi", "Africa", "Kirundi", {{{"Rwanda"}, "N"}, {{"Tanzania"}, "E + SE"}, {{"Democratic Republic of the Congo"}, "W"}});
    Country c32(":/image for c++ project/Geography/Flags/Cambodia.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Cambodia.png",
                "Cambodia", "Asia", "Khmer", {{{"Laos"}, "N"}, {{"Vietnam"}, "E"}, {{"Thailand"}, "NW"}});
    Country c33(":/image for c++ project/Geography/Flags/Cameroon.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Cameroon.png",
                "Cameroon", "Africa", "French", {{{"Nigeria"}, "N + W"}, {{"Equatorial Guinea", "Gabon", "Republic of the Congo"}, "S"},
                 {{"Central African Republic"}, "E"}, {{"Chad"}, "NE"}});
    Country c34(":/image for c++ project/Geography/Flags/Canada.png",
                ":/image for c++ project/Geography/Shape of countries/North America/Canada.png",
                "Canada", "North America", "English",{{{"United States"}, "S + NW"}, {{"Greenland"}, "NE"}});
    Country c35(":/image for c++ project/Geography/Flags/Cape Verde.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Cape Verde.png",
                "Cape Verde", "Africa", "Portuguese");
    Country c36(":/image for c++ project/Geography/Flags/Chad.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Chad.png",
                "Chad", "Africa", "Arabic", {{{"Libya"}, "N"}, {{"Central African Republic"}, "S"}, {{"Sudan"}, "E"}, {{"Niger"}, "W"},
                 {{"Cameroon", "Nigeria"}, "SW"}});
    Country c37(":/image for c++ project/Geography/Flags/Chile.png",
                ":/image for c++ project/Geography/Shape of countries/South America/Chile.png",
                "Chile", "South America", "Spanish", {{{"Peru"}, "N"}, {{"Argentina"}, "E"}, {{"Bolivia"}, "NE"}});
    Country c38(":/image for c++ project/Geography/Flags/China.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/China.png",
                "China", "Asia", "Mandarin", {{{"Mongolia", "Russia"}, "N"},
                 {{"India", "Bhutan", "Myanmar", "Laos", "Vietnam", "Hong Kong", "Macau"}, "S"}, {{"North Korea"}, "E"},
                 {{"India", "Pakistan", "Afghanistan", "Kyrgyzstan"}, "W"}, {{"Kyrgyzstan", "Kazakhstan"}, "NE"}, {{"Nepal"}, "SW"}});
    Country c39(":/image for c++ project/Geography/Flags/Colombia.png",
                ":/image for c++ project/Geography/Shape of countries/South America/Colombia.png",
                "Colombia", "South America", "Spanish", {{{"Ecuador", "Peru"}, "S + SW"}, {{"Venezuela"}, "E + NE"}, {{"Brazil"}, "SE"},
                 {{"Panama"}, "NW"}});
    Country c40(":/image for c++ project/Geography/Flags/Comoros.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Comoros.png",
                "Comoros", "Africa", "Comorian");
    Country c41(":/image for c++ project/Geography/Flags/Costa Rica.png",
                ":/image for c++ project/Geography/Shape of countries/North America/Costa Rica.png",
                "Costa Rica", "North America", "Spanish",{{{"Nigaragua"}, "N"}, {{"Panama"}, "SE"}});
    Country c42(":/image for c++ project/Geography/Flags/Cote De Ivoire.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Ivory Coast.png",
                "Ivory Coast", "Africa", "French", {{{"Ghana"}, "E"}, {{"Liberia"}, "W"}, {{"Burkina Faso"}, "NE"}, {{"Guinea", "Mali"}, "NW"}});
    Country c43(":/image for c++ project/Geography/Flags/Croatia.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Croatia.png",
                "Croatia", "Europe", "Croatian", {{{"Serbia"}, "E"}, {{"Hungary"}, "NE"}, {{"Bosnia and Herzegovina", "Montenegro"}, "SE"},
                 {{"Slovenia"}, "NW"}});
    Country c44(":/image for c++ project/Geography/Flags/Cuba.png",
                ":/image for c++ project/Geography/Shape of countries/North America/Cuba.png",
                "Cuba", "North America", "Spanish");
    Country c45(":/image for c++ project/Geography/Flags/Curacao.png",  "-", "Curacao");
    Country c46(":/image for c++ project/Geography/Flags/Cyprus.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Cyprus.png",
                "Cyprus", "Asia", "Greek");
    Country c47(":/image for c++ project/Geography/Flags/Denmark.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Denmark.png",
                "Denmark", "Europe", "Danish", {{{"Poland"}, "NE"}, {{"Slovakia"}, "SE"}});
    Country c48(":/image for c++ project/Geography/Flags/Djibouti.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Djibouti.png",
                "Djibouti", "Africa", "Somali", {{{"Eritrea"}, "N"}, {{"Somalia"}, "S"}, {{"Ethiopia"}, "SW"}});
    Country c49(":/image for c++ project/Geography/Flags/Dominica.png",
                ":/image for c++ project/Geography/Shape of countries/North America/Dominica.png",
                "Dominica", "North America", "English");
    Country c50(":/image for c++ project/Geography/Flags/East Timor.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Timor-Leste.png",
                "Timor-Leste", "Asia", "Hakka", {{{"Indonesia"}, "W"}});
    Country c51(":/image for c++ project/Geography/Flags/Ecuador.png",
                ":/image for c++ project/Geography/Shape of countries/South America/Ecuador.png",
                "Ecuador", "South America", "Spanish", {{{"Colombia"}, "N"}, {{"Peru"}, "S + E"}});
    Country c52(":/image for c++ project/Geography/Flags/Egypt.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Egypt.png",
                "Egypt", "Africa", "Arabic", {{{"Sudan"}, "S"}, {{"Libya"}, "W"}, {{"Palestine", "Israel"}, "NE"}});
    Country c53(":/image for c++ project/Geography/Flags/El Salvador.png",
                ":/image for c++ project/Geography/Shape of countries/North America/El Salvador.png",
                "El Salvador", "North America", "Spanish",{{{"Honduras"}, "NE"}, {{"Guetemala"}, "NW"}});
    Country c54(":/image for c++ project/Geography/Flags/England.png",  "-", "England");
    Country c55(":/image for c++ project/Geography/Flags/Equatorial Guinea.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Equatorial Guinea.png",
                "Equatorial Guinea", "Africa", "Spanish", {{{"Cameroon"}, "N"}, {{"Gabon"}, "S + E"}});
    Country c56(":/image for c++ project/Geography/Flags/Eritrea.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Eritrea.png",
                "Eritrea", "Africa", "Tigrinya", {{{"Ethiopia"}, "S"}, {{"Sudan"}, "W"}, {{"Djibouti"}, "SE"}});
    Country c57(":/image for c++ project/Geography/Flags/Estonia.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Estonia.png",
                "Estonia", "Europe", "Estonian", {{{"Latvia"}, "S"}, {{"Russia"}, "E"}});
    Country c58(":/image for c++ project/Geography/Flags/Ethiopia.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Ethiopia.png",
                "Ethiopia", "Africa", "Amharic", {{{"Eritrea"}, "N"}, {{"Kenya"}, "S"}, {{"Somalia"}, "E + SE"}, {{"South Sudan"}, "W"},
                 {{"Djibouti"}, "NE"}, {{"Sudan"}, "NW"}});
    Country c59(":/image for c++ project/Geography/Flags/Faroe Islands.png",  "-", "Faroe Islands");
    Country c60(":/image for c++ project/Geography/Flags/Fiji.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Fiji.png",
                "Fiji", "Oceania", "Fijian");
    Country c61(":/image for c++ project/Geography/Flags/Finland.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Finland.png",
                "Finland", "Europe", "Finish", {{{"Norway"}, "N"}, {{"Russia"}, "E"}, {{"Sweden"}, "NW"}});
    Country c62(":/image for c++ project/Geography/Flags/France.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/France.png",
                "France", "Europe", "Frence", {{{"Belgium", "Luxembourg"}, "N"}, {{"Andorra", "Spain"}, "S"}, {{"Switzerland"}, "E"},
                 {{"Germany"}, "NE"}, {{"Italy", "Monaco"}, "SE"}});
    Country c63(":/image for c++ project/Geography/Flags/Gabon.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Gabon.png",
                "Gabon", "Africa", "French", {{{"Cameroon"}, "N"}, {{"Republic of the Congo"}, "S + E"}, {{"Equatorial Guinea"}, "NW"}});
    Country c64(":/image for c++ project/Geography/Flags/Gambia.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/The Gambia.png",
                "Gambia", "Africa", "English", {{{"Senegal"}, "N + S +E"}});
    Country c65(":/image for c++ project/Geography/Flags/Georgia.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Georgia.png",
                "Georgia", "Asia", "Georgian", {{{"Russia"}, "N + NE"}, {{"Armenia"}, "S"}, {{"Azerbaijan"}, "SE"}, {{"Turkey"}, "SW"}});
    Country c66(":/image for c++ project/Geography/Flags/Germany.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Germany.png",
                "Germany", "Europe", "German", {{{"Denmark"}, "N"}, {{"Austria", "Switzeland"}, "S"}, {{"Poland", "Czech Republic"}, "NE"},
                 {{"Netherlands", "Belgium", "Luxembourg", "France"}, "W"}});
    Country c67(":/image for c++ project/Geography/Flags/Ghana.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Ghana.png",
                "Ghana", "Africa", "English", {{{"Burkina Faso"}, "N"}, {{"Togo"}, "E"}, {{"Ivory Coast"}, "W"}});
    Country c68(":/image for c++ project/Geography/Flags/Greece.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Greece.png",
                "Greece", "Europe", "Greek", {{{"Republic of Macedonia", "Bulgaria"}, "N"}, {{"Turkey"}, "E"}, {{"Albania"}, "NW"}});
    Country c69(":/image for c++ project/Geography/Flags/Greenland.png",  "-", "Greenland");
    Country c70(":/image for c++ project/Geography/Flags/Grenada.png",
                ":/image for c++ project/Geography/Shape of countries/North America/Grenada.png",
                "Grenada", "North America", "English");
    Country c71(":/image for c++ project/Geography/Flags/Guam.png",  "-", "Guam");
    Country c72(":/image for c++ project/Geography/Flags/Guatemala.png",
                ":/image for c++ project/Geography/Shape of countries/North America/Guatemala.png",
                "Guatemala", "North America", "Spanish",{{{"Mexico"}, "N + W"}, {{"Honduras"}, "E"}, {{"Belize"}, "NE"}, {{"El Salvador"}, "SE"}});
    Country c73(":/image for c++ project/Geography/Flags/Guinea.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Guinea.png",
                "Guinea", "Africa", "French", {{{"Senegal"}, "N"}, {{"Sierra Leone", "Liberia"}, "S"}, {{"Mali"}, "NE"}, {{"Ivory Coast"}, "SE"}});
    Country c74(":/image for c++ project/Geography/Flags/Guinea-Bissau.png",  "-", "Guinea-Bissau");
    Country c75(":/image for c++ project/Geography/Flags/Guyana.png",
                ":/image for c++ project/Geography/Shape of countries/South America/Guyana.png",
                "Guyana", "South America", "English", {{{"Brazil"}, "S + SW"}, {{"Suriname"}, "E"}, {{"Venezuela"}, "W"}});
    Country c76(":/image for c++ project/Geography/Flags/Haiti.png",
                ":/image for c++ project/Geography/Shape of countries/North America/Haiti.png",
                "Haiti", "North America", "Haitian-Creole", {{{"Dominican Republic"}, "W"}});
    Country c77(":/image for c++ project/Geography/Flags/Honduras.png",
                ":/image for c++ project/Geography/Shape of countries/North America/Honduras.png",
                "Honduras", "North America", "Spanish", {{{"Guatemala"}, "W"}, {{"Nicaragua"}, "SE"}, {{"El Salvador"}, "SW"}});
    Country c78(":/image for c++ project/Geography/Flags/Hongkong.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Hong Kong.png",
                "Hong Kong", "Asia", "Cantonese", {{{"China"}, "N"}});
    Country c79(":/image for c++ project/Geography/Flags/Hungary.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Hungary.png",
                "Hungary", "Europe", "Hungarian", {{{"Slovakia"}, "N"}, {{"Serbia"}, "S"}, {{"Romania"}, "E"}, {{"Austria"}, "W"},
                 {{"Ukraine"}, "NE"}, {{"Romania"}, "SE"}, {{"Croatia", "Slovenia"}, "SW"}});
    Country c80(":/image for c++ project/Geography/Flags/Iceland.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Iceland.png",
                "Iceland", "Europe", "Icelandic");
    Country c81(":/image for c++ project/Geography/Flags/India.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/India.png",
                "India", "Asia", "Hindi", {{{"China", "Nepal", "Bhutan"}, "N"}, {{"Bangladesh", "Myanmar"}, "E"}, {{"Pakistan"}, "W"}});
    Country c82(":/image for c++ project/Geography/Flags/Indonesia.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Indonesia.png",
                "Indonesia", "Asia", "Indonesian", {{{"Malaysia"}, "N"}, {{"Timor-Leste", "Papua New Guinea"}, "E"}});
    Country c83(":/image for c++ project/Geography/Flags/Iran.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Iran.png",
                "Iran", "Asia", "Persian", {{{"Azerbaijan", "Armenia", "Turkmenistan"},"N"}, {{"Afghanistan"}, "E"}, {{"Iraq"}, "W"},
                 {{"Pakistan"}, "SE"}, {{"Turkey"}, "NW"}});
    Country c84(":/image for c++ project/Geography/Flags/Iraq.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Iraq.png",
                "Iraq", "Asia", "Arabic", {{{"Turkey"}, "N"}, {{"Saudi Arabia"}, "S"}, {{"Iran"}, "E"}, {{"Syria"}, "W"},
                 {{"Kuwait"}, "SE"}, {{"Jordan"}, "SW"}});
    Country c85(":/image for c++ project/Geography/Flags/Ireland.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Ireland.png",
                "Ireland", "Europe", "English");
    Country c86(":/image for c++ project/Geography/Flags/Israel.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Israel.png",
                "Israel", "Asia", "Hebrew", {{{"Lebanon"}, "N"}, {{"Jordan", "State of Palestine"}, "E"}, {{"Syria"}, "NE"},
                 {{"Egypt", "State of Palestine"}, "SW"}});
    Country c87(":/image for c++ project/Geography/Flags/Italy.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Italy.png",
                "Italy", "Europe", "Italian", {{{"Switzerland", "Autria"}, "N"}, {{"Slovenia"}, "NE"}, {{"France"}, "SE"}});
    Country c88(":/image for c++ project/Geography/Flags/Jamaica.png",
                ":/image for c++ project/Geography/Shape of countries/North America/Jamaica.png",
                "Jamaica", "North America", "English");
    Country c89(":/image for c++ project/Geography/Flags/Japan.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Japan.png",
                "Japan", "Asia", "Japanese");
    Country c90(":/image for c++ project/Geography/Flags/Jordan.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Jordan.png",
                "Jordan", "Asia", "Arabic", {{{"Syria"}, "N"}, {{"Saudi Arabia"}, "S + E"}, {{"State of Palestine", "Israel"}, "W"},
                 {{"Iraq"}, "NE"}});
    Country c91(":/image for c++ project/Geography/Flags/Kazakhstan.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Kazakhstan.png",
                "Kazakhstan", "Asia", "Russian", {{{"Russia"}, "N + NE"}, {{"Uzbekistan"}, "S"}, {{"China"}, "E"}, {{"Kyrgyzstan"}, "SE"},
                 {{"Turkmenistan"}, "SW"}});
    Country c92(":/image for c++ project/Geography/Flags/Kenya.png",
                ":/image for c++ project/Geography/Shape of countries/Africa/Kenya.png",
                "Kenya", "Africa", "Bantu", {{{"Ethiopia"}, "N"}, {{"Tanzania"}, "S"}, {{"Somalia"}, "E"}, {{"Uganda"}, "W"}, {{"South Sudan"}, "NW"}});
    Country c93(":/image for c++ project/Geography/Flags/Kiribati.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Kiribati.png",
                "Kiribati", "Oceania", "Gilbertese");
    Country c94(":/image for c++ project/Geography/Flags/Kosovo.png",  "-", "Kosovo");
    Country c95(":/image for c++ project/Geography/Flags/Kuwait.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Kuwait.png",
                "Kuwait", "Asia", "Arabic", {{{"Iraq"}, "N"}, {{"Saudi Arabia"}, "S"}});
    Country c96(":/image for c++ project/Geography/Flags/Kyrgyzstan.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Kyrgyzstan.png",
                "Kyrgyzstan", "Asia", "Kyrgyz", {{{"Kazakhstan"}, "N"}, {{"Tajikistan"}, "S"}, {{"China"}, "E + SE"}, {{"Uzbekistan"}, "W"}});
    Country c97(":/image for c++ project/Geography/Flags/Laos.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Laos.png",
                "Laos", "Asia", "Lao", {{{"Vietnam"}, "E"}, {{"Thailand"}, "W + SW"}, {{"Cambodia"}, "SE"}, {{"Myanmar", "China"}, "NW"}});
    Country c98(":/image for c++ project/Geography/Flags/Latvia.png",
                ":/image for c++ project/Geography/Shape of countries/Europe/Latvia.png",
                "Latvia", "Europe", "Latvian", {{{"Estonia"}, "N"}, {{"Lithuania"}, "S"}, {{"Russia"}, "E"}, {{"Belarus"}, "SE"}});
    Country c99(":/image for c++ project/Geography/Flags/Lebanon.png",
                ":/image for c++ project/Geography/Shape of countries/Asia/Lebanon.png",
                "Lebanon", "Asia", "Arabic", {{{"Syria"}, "N + E"}, {{"Israel"}, "S"}});
    Country c100(":/image for c++ project/Geography/Flags/Lesotho.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Lesotho.png",
                 "Lesotho", "Africa", "Sotho", {{{"South Africa"}, "N + S + E + W"}});
    Country c101(":/image for c++ project/Geography/Flags/Liberia.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Liberia.png",
                 "Liberia", "Africa", "English", {{{"Guinea"}, "N"}, {{"Ivory Coast"}, "E"}, {{"Sierra Leone"}, "NW"}});
    Country c102(":/image for c++ project/Geography/Flags/Libya.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Libya.png",
                 "Libya", "Africa", "Arabic", {{{"Chad"}, "S"}, {{"Egypt"}, "E"}, {{"Algeria"}, "W"}, {{"Sudan"}, "SE"}, {{"Tunisia"}, "NW"},
                  {{"Niger"}, "SW"}});
    Country c103(":/image for c++ project/Geography/Flags/Liechtenstein.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Liechtenstein.png",
                 "Liechtenstein", "Europe", "German", {{{"Switzerland"}, "E"}, {{"Austria"}, "W"}});
    Country c104(":/image for c++ project/Geography/Flags/Lithuania.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Lithuania.png",
                 "Lithuania", "Europe", "Lithuanian", {{{"Latvia"}, "N"}, {{"Belarus", "Poland"}, "S"}, {{"Belarus"}, "E"}, {{"Russia"}, "SW"}});
    Country c105(":/image for c++ project/Geography/Flags/Luxembourg.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Luxembourg.png",
                 "Luxembourg", "Europe", "French", {{{"Belgium"}, "N + W"}, {{"France"}, "S"}, {{"Germany"}, "E"}});
    Country c106(":/image for c++ project/Geography/Flags/Macao.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Macao.png",
                 "Macao", "Asia", "Cantonese", {{{"China"}, "N"}});
    Country c107(":/image for c++ project/Geography/Flags/Macedonia.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Republic of Macedonia.png",
                 "Macedonia", "Europe", "Macedonian", {{{"Serbia"}, "N"}, {{"Greece"}, "S"}, {{"Bulgaria"}, "E"}, {{"Albania"}, "W"},
                  {{"Kosovo"}, "NW"}});
    Country c108(":/image for c++ project/Geography/Flags/Madagascar.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Madagascar.png",
                 "Madagascar", "Africa", "Malagasy");
    Country c109(":/image for c++ project/Geography/Flags/Malawi.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Malawi.png",
                 "Malawi", "Africa", "Chichewa", {{{"Tanzania"}, "N + NE"}, {{"Mozambique"}, "S + E"}, {{"Zambia"}, "W"}});
    Country c110(":/image for c++ project/Geography/Flags/Malaysia.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Malaysia.png",
                 "Malaysia", "Asia", "Malay", {{{"Brunei"}, "N"}, {{"Indonesia"}, "S"}});
    Country c111(":/image for c++ project/Geography/Flags/Maldives.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Maldives.png",
                 "Maldives", "Asia", "Dhivehi");
    Country c112(":/image for c++ project/Geography/Flags/Mali.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Mali.png",
                 "Mali", "Africa", "Bambara", {{{"Algeria"}, "N"}, {{"Burkina Faso", "Ivory Coast"}, "S"}, {{"Niger"}, "E"},
                  {{"Guinea", "Senegal"}, "W"}, {{"Mauritania"}, "NW"}});
    Country c113(":/image for c++ project/Geography/Flags/Malta.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Malta.png",
                 "Malta", "Europe", "Maltese");
    Country c114(":/image for c++ project/Geography/Flags/Mauritania.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Mauritania.png",
                 "Mauritania", "Africa", "Arabic", {{{"Mali"}, "E + SE"}, {{"Algeria"}, "NE"}, {{"Senegal"}, "SW"}});
    Country c115(":/image for c++ project/Geography/Flags/Mauritius.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Mauritius.png",
                 "Mauritius", "Africa", "English");
    Country c116(":/image for c++ project/Geography/Flags/Mexico.png",
                 ":/image for c++ project/Geography/Shape of countries/North America/Mexico.png",
                 "Mexico", "North America", "Spanish", {{{"United States"}, "N"}, {{"Guatemala", "Belize"}, "SE"}});
    Country c117(":/image for c++ project/Geography/Flags/Micronesia.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Federated States of Micronesia.png",
                 "Micronesia", "Oceania", "English");
    Country c118(":/image for c++ project/Geography/Flags/Moldova.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Moldova.png",
                 "Moldova", "Europe", "Romanian", {{{"Ukraine"}, "N + S + E"}, {{"Romania"}, "W"}});
    Country c119(":/image for c++ project/Geography/Flags/Monaco.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Monaco.png",
                 "Monaco", "Europe", "French", {{{"France"}, "N + E + W"}});
    Country c120(":/image for c++ project/Geography/Flags/Mongolia.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Mongolia.png",
                 "Mongolia", "Asia", "Mongolian", {{{"Russia"}, "N"}, {{"China"}, "S"}});
    Country c121(":/image for c++ project/Geography/Flags/Montenegro.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Montenegro.png",
                 "Montenegro", "Europe", "Montenegrin", {{{"Bosnia and Herzegovina"}, "N"}, {{"Kosovo"}, "E"}, {{"Serbia"}, "NE"},
                  {{"Albania"}, "SE"}, {{"Croatia"}, "NW"}});
    Country c122(":/image for c++ project/Geography/Flags/Morocco.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Morocco.png",
                 "Morocco", "Africa", "Arabic", {{{"Algeria"}, "E"}});
    Country c123(":/image for c++ project/Geography/Flags/Mozambique.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Mozambique.png",
                 "Mozambique", "Africa", "Portuguese", {{{"Tanzania"}, "N"}, {{"Zimbabwe"}, "W"}, {{"Zambia", "Malawi"}, "NW"},
                  {{"Swaziland", "South Africa"}, "SW"}});
    Country c124(":/image for c++ project/Geography/Flags/Myanmar.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Myanmar.png",
                 "Myanmar", "Asia", "Burmese", {{{"Laos", "Thailand"}, "E + SE"}, {{"China"}, "NE"}, {{"bangladesh", "india"}, "NW"}});
    Country c125(":/image for c++ project/Geography/Flags/Namibia.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Namibia.png",
                 "Namibia", "Africa", "Malagasy", {{{"Zambia", "Angola"}, "N"}, {{"South Africa"}, "S"}, {{"Botswana, South Africa"}, "E"}});
    Country c126(":/image for c++ project/Geography/Flags/Nauru.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Nauru.png",
                 "Nauru", "Oceania", "Nauruan");
    Country c127(":/image for c++ project/Geography/Flags/Nepal.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Nepal.png",
                 "Nepal", "Asia", "Nepali", {{{"China"}, "N"}, {{"India"}, "S + E + W"}});
    Country c128(":/image for c++ project/Geography/Flags/Netherlands.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Netherlands.png",
                 "Netherlands", "Europe", "Dutch", {{{"Belgium"}, "S"}, {{"Germany"}, "E"}});
    Country c129(":/image for c++ project/Geography/Flags/New Caledonia.png",  "-", "New Caledonia");
    Country c130(":/image for c++ project/Geography/Flags/New Zealand.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/New Zealand.png",
                 "New Zealand", "Oceania", "English");
    Country c131(":/image for c++ project/Geography/Flags/Nicaragua.png",
                 ":/image for c++ project/Geography/Shape of countries/North America/Nicaragua.png",
                 "Nicaragua", "North America", "Spanish", {{{"Honduras"}, "N"}, {{"Costa Rica"}, "S"}});
    Country c132(":/image for c++ project/Geography/Flags/Niger.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Niger.png",
                 "Niger", "Africa", "French", {{{"Nigeria"}, "S"}, {{"Chad"}, "E"}, {{"Mali"}, "W"}, {{"Libya"}, "NE"},
                  {{"Algeria"}, "NW"}, {{"Benin", "burkina Faso"}, "SW"}});
    Country c133(":/image for c++ project/Geography/Flags/Nigeria.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Nigeria.png",
                 "Nigeria", "Africa", "English", {{{"Niger"}, "N"}, {{"Cameroon"}, "E"}, {{"Benin"}, "W"}, {{"Chad"}, "NE"}});
    Country c134(":/image for c++ project/Geography/Flags/Niue.png",  "Niue");
    Country c135(":/image for c++ project/Geography/Flags/North Korea.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/North Korea.png",
                 "North Korea", "Asia", "Korea", {{{"China"}, "N"}, {{"South Korea"}, "S"}, {{"Russia"}, "NE"}});
    Country c136(":/image for c++ project/Geography/Flags/Northern Ireland.png",  "-", "Northern Ireland");
    Country c137(":/image for c++ project/Geography/Flags/Northern Mariana Islands.png",  "-", "Northern Mariana Islands");
    Country c138(":/image for c++ project/Geography/Flags/Norway.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Norway.png",
                 "Norway", "Europe", "Norwegian", {{{"Sweden", "Finland", "Russia"}, "E"}});
    Country c139(":/image for c++ project/Geography/Flags/Oman.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Oman.png",
                 "Oman", "Asia", "Arabic", {{{"The United Arab Emirates"}, "N"}, {{"Saudi Arabia"}, "W"}, {{"Yemen"}, "SW"}});
    Country c140(":/image for c++ project/Geography/Flags/Pakistan.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Pakistan.png",
                 "Pakistan", "Asia", "Urdu", {{{"India"}, "E"}, {{"Afghanistan"}, "W"}, {{"China"}, "NE"}, {{"Iran"}, "SW"}});
    Country c141(":/image for c++ project/Geography/Flags/Palau.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Palau.png",
                 "Palau", "Oceania", "Palauan");
    Country c142(":/image for c++ project/Geography/Flags/Palestine.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/State of Palestine.png",
                 "State of Palestine", "Asia", "Arabic", {{{"Israel"}, "N + S + E + W"}, {{"Egypt"}, "SW"}});
    Country c143(":/image for c++ project/Geography/Flags/Panama.png",
                 ":/image for c++ project/Geography/Shape of countries/North America/Panama.png",
                 "Panama", "North America", "Spanish", {{{"Costa Rica"}, "W"}, {{"Colombia"}, "SE"}});
    Country c144(":/image for c++ project/Geography/Flags/Papua New Guinea.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Papua New Guinea.png",
                 "Papua New Guinea", "Oceania", "English");
    Country c145(":/image for c++ project/Geography/Flags/Paraguay.png",
                 ":/image for c++ project/Geography/Shape of countries/South America/Paraguay.png",
                 "Paraguay", "South America", "Spanish", {{{"Argentina"}, "S + SW"}, {{"Brazil"}, "E + NE"}, {{"Bolivia"}, "NW"}});
    Country c146(":/image for c++ project/Geography/Flags/Peru.png",
                 ":/image for c++ project/Geography/Shape of countries/South America/Peru.png",
                 "Peru", "South America", "Spanish", {{{"Ecuador, Colombia"}, "N"}, {{"Chile"}, "S"}, {{"Brazil"}, "E"}, {{"bolivia"}, "SE"}});
    Country c147(":/image for c++ project/Geography/Flags/Poland.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Poland.png",
                 "Poland", "Europe", "Polish", {{{"Slovakia", "Czech Republic"}, "S"}, {{"Belarus", "Ukraine"}, "E"}, {{"Germany"}, "W"},
                  {{"Lithuania", "Russia"}, "NE"}});
    Country c148(":/image for c++ project/Geography/Flags/Portugal.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Portugal.png",
                 "Portugal", "Europe", "Portuguese", {{{"Spain"}, "N + E"}});
    Country c149(":/image for c++ project/Geography/Flags/Puerto Rico.png",  "-", "Puerto Rico");
    Country c150(":/image for c++ project/Geography/Flags/Qatar.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Qatar.png",
                 "Qatar", "Asia", "Arabic", {{{"Saudi arabia", "The United Arab Emirates"}, "N"}});
    Country c151(":/image for c++ project/Geography/Flags/Romania.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Romania.png",
                 "Romania", "Europe", "Romanian", {{{"Ukraine"}, "N"}, {{"Bulgaria"}, "S"}, {{"Ukarine", "Moldova"}, "E"}, {{"Hungary"}, "W"},
                  {{"Serbia"}, "SW"}});
    Country c152(":/image for c++ project/Geography/Flags/Russia.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Russia.png",
                 "Russia", "Europe", "Russian", {{{"Georgia", "Azerbaijan", "Mongolia", "China", "North Korea"}, "S"},
                  {{"Estonia", "Latvia", "Belarus", "Ukraine"}, "W"}, {{"Kazakhstan"}, "SE"}, {{"Norway", "Finland"}, "NW"}, {{"China"}, "SW"}});
    Country c153(":/image for c++ project/Geography/Flags/Rwanda.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Rwanda.png",
                 "Rwanda", "Africa", "Kinyarwanda", {{{"Uganda"}, "N"}, {{"Burundi"}, "S"}, {{"Tanzania"}, "E"},
                  {{"Democratic Republic of the Congo"}, "W"}});
    Country c154(":/image for c++ project/Geography/Flags/Saba.png",  "-", "Saba");
    Country c155(":/image for c++ project/Geography/Flags/Saint Eustatius.png",  "-", "Saint Eustatius");
    Country c156(":/image for c++ project/Geography/Flags/Saint Kitts and Nevis.png",
                 ":/image for c++ project/Geography/Shape of countries/North America/Saint Kitts and Nevis.png",
                 "Saint Kitts and Nevis", "North America", "English");
    Country c157(":/image for c++ project/Geography/Flags/Saint Lucia.png",
                 ":/image for c++ project/Geography/Shape of countries/North America/Saint Lucia.png",
                 "Saint Lucia", "North America", "English");
    Country c158(":/image for c++ project/Geography/Flags/Saint Martin.png",  "-", "Saint Martin");
    Country c159(":/image for c++ project/Geography/Flags/Saint Patrick.png",  "-", "Saint Patrick");
    Country c160(":/image for c++ project/Geography/Flags/Saint Vincent and the Grenadines.png",
                 ":/image for c++ project/Geography/Shape of countries/North America/Saint Vincent and the Grenadines.png",
                 "Saint Vincent and the Grenadines", "North America", "English");
    Country c161(":/image for c++ project/Geography/Flags/Samoa.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Samoa.png",
                 "Samoa", "Oceania", "Samoan");
    Country c162(":/image for c++ project/Geography/Flags/San Marino.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/San Marino.png",
                 "San Marino", "Europe", "Italian", {{{"Italy"}, "N + S + E + W"}});
    Country c163(":/image for c++ project/Geography/Flags/Sao Tome and Principe.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Sao Tome and Principe.png",
                 "Sao Tome and Principe", "Africa", "Portuguese");
    Country c164(":/image for c++ project/Geography/Flags/Saudiarabia.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Saudi Arabia.png",
                 "Saudi Arabia", "Asia", "Arabic", {{{"Jordan", "Iraq", "Kuwait"}, "N"}, {{"Yemen"}, "S"},
                  {{"Qatar", "The United Arab Emirates"}, "E"}, {{"Oman"}, "SE"}});
    Country c165(":/image for c++ project/Geography/Flags/Scotland.png",  "-", "Scotland");
    Country c166(":/image for c++ project/Geography/Flags/Senegal.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Senegal.png",
                 "Senegal", "Africa", "French", {{{"Mauritania"}, "N"}, {{"Mali"}, "E"}, {{"Guinea"}, "SE"}});
    Country c167(":/image for c++ project/Geography/Flags/Serbia.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Serbia.png",
                 "Serbia", "Europe", "Serbian", {{{"Hungary"}, "N"}, {{"Republic of Macedonia"}, "S"},
                  {{"Croatia", "Bosnia and Herzegovina"}, "W"}, {{"Romania"}, "NE"}, {{"Bulgaria"}, "SE"}, {{"Montenegro"}, "SW"}});
    Country c168(":/image for c++ project/Geography/Flags/Sierra Leone.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Sierra Leone.png",
                 "Sierra Leone", "Africa", "English", {{{"Liberia"}, "SE"}});
    Country c169(":/image for c++ project/Geography/Flags/Singapore.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Singapore.png",
                 "Singapore", "Asia", "Malay");
    Country c170(":/image for c++ project/Geography/Flags/Slovakia.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Slovakia.png",
                 "Slovakia", "Europe", "Slovak", {{{"Poland"}, "N"}, {{"Hungary"}, "S"}, {{"Ukraine"}, "E"}, {{"Austria"}, "W"},
                  {{"Czech Republic"}, "NW"}});
    Country c171(":/image for c++ project/Geography/Flags/Slovenia.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Slovenia.png",
                 "Slovenia", "Europe", "Slovene", {{{"Austria"}, "N"}, {{"Croatia"}, "S"}, {{"Italy"}, "W"}, {{"Hungary"}, "NE"},
                  {{"Croatia"}, "SE"}});
    Country c172(":/image for c++ project/Geography/Flags/Somalia.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Somalia.png",
                 "Somalia", "Africa", "Somali", {{{"Ethiopia"}, "W"}, {{"Djibouti"}, "NW"}, {{"Kenya"}, "SW"}});
    Country c173(":/image for c++ project/Geography/Flags/South Afica.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/South Africa.png",
                 "South Africa", "Africa", "Zulu", {{{"Namibia", "Botswana", "Zimbabwe"}, "N"}, {{"Mozambique"}, "E + NE"}});
    Country c174(":/image for c++ project/Geography/Flags/South Korea.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/South Korea.png",
                 "South Korea", "Asia", "Korea", {{{"North Korea"}, "N"}});
    Country c175(":/image for c++ project/Geography/Flags/South Sudan.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/South Sudan.png",
                 "South Sudan", "Africa", "English", {{{"Sudan"}, "N"}, {{"Uganda"}, "S"}, {{"Ethiopia"}, "E"},
                  {{"Central African Republic"}, "W"}, {{"Kenya"}, "SE"}, {{"Democratic Republic of the Congo"}, "SW"}});
    Country c176(":/image for c++ project/Geography/Flags/Spain.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Spain.png",
                 "Spain", "Europe", "Spanish", {{{"France", "Andorra"}, "N"}, {{"Portugal"}, "W"}});
    Country c177(":/image for c++ project/Geography/Flags/Sri Lanka.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Sri Lanka.png",
                 "Sri Lanka", "Asia", "Sinhala");
    Country c178(":/image for c++ project/Geography/Flags/Sudan.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Sudan.png",
                 "Sudan", "Africa", "Arabic", {{{"Egypt"}, "N"}, {{"South Sudan"}, "S"}, {{"Chad"}, "W"}, {{"Eritrea"}, "NE"},
                  {{"Ethiopia"}, "SE"}, {{"Libya"}, "NW"}, {{"Central African Republic"}, "SW"}});
    Country c179(":/image for c++ project/Geography/Flags/Suriname.png",
                 ":/image for c++ project/Geography/Shape of countries/South America/Suriname.png",
                 "Suriname", "South America", "Dutch", {{{"Brazil"}, "S"}, {{"France"}, "E"}, {{"Guyana"}, "W"}});
    Country c180(":/image for c++ project/Geography/Flags/Swaziland.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Swaziland.png",
                 "Swaziland", "Africa", "Swati", {{{"South Africa"}, "N + S + W + SW"}, {{"Mozambique"}, "NE"}});
    Country c181(":/image for c++ project/Geography/Flags/Sweden.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Sweden.png",
                 "Sweden", "Europe", "Swedish", {{{"Norway"}, "N + W"}, {{"Finland"}, "NE"}});
    Country c182(":/image for c++ project/Geography/Flags/Switzerland.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Switzerland.png",
                 "Switzerland", "Europe", "German", {{{"Germany"}, "N"}, {{"Italy"}, "S"}, {{"Austria", "Liechtenstein"}, "E"}, {{"France"}, "W"}});
    Country c183(":/image for c++ project/Geography/Flags/Syria.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Syria.png",
                 "Syria", "Asia", "Arabic", {{{"Turkey"}, "N"}, {{"Jordan"}, "S"}, {{"Iraq"}, "E + SE"}, {{"Israel", "Lebanon"}, "SW"}});
    Country c184(":/image for c++ project/Geography/Flags/Taiwan.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Taiwan.png",
                 "Taiwan", "Asia", "Mandarin");
    Country c185(":/image for c++ project/Geography/Flags/Tajikistan.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Tajikistan.png",
                 "Tajikistan", "Asia", "Tajik", {{{"Kysgyzstan"}, "N"}, {{"Afghanistan"}, "S"}, {{"China"}, "E"}, {{"Uzbekistan"}, "W"}});
    Country c186(":/image for c++ project/Geography/Flags/Tanzania.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Tanzania.png",
                 "Tanzania", "Africa", "Kiswahili", {{{"Uganda"}, "N"}, {{"Mozambique", "Malawi"}, "S"},
                  {{"Rwanda", "Burundi", "Democratic Republic of the Congo"}, "W"}, {{"kenya"}, "NE"}, {{"Zambia"}, "SW"}});
    Country c187(":/image for c++ project/Geography/Flags/Thailand.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Thailand.png",
                 "Thailand", "Asia", "Thai", {{{"Malaysia"}, "S"}, {{"Laos"}, "NE"}, {{"Cambodia"}, "SE"}, {{"Myanmar"}, "NW"}});
    Country c188(":/image for c++ project/Geography/Flags/the Central-Afican Republic.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Central African Republic.png",
                 "Central African Republic", "Africa", "Sango", {{{"Chad"}, "N"}, {{"Democratic Republic of the Congo"}, "S"},
                  {{"South Sudan"}, "E"}, {{"Cameroon"}, "W"}, {{"Sudan"}, "NE"}, {{"Republic of the Congo"}, "SW"}});
    Country c189(":/image for c++ project/Geography/Flags/the Czech Republic.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Czech Republic.png",
                 "Czech Republic", "Europe", "Czech", {{{"Austria"}, "S"}, {{"Germany"}, "W"}});
    Country c190(":/image for c++ project/Geography/Flags/the Democratic Republic of the Congo.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Democratic Republic of the Congo.png",
                 "Democratic Republic of the Congo", "Africa", "French", {{{"Central African Republic"}, "N"}, {{"Zambia"}, "S + SE"},
                  {{"Uganda", "Rwanda", "Burundi", "Tanzania"}, "E"}, {{"South Sudan"}, "NE"}, {{"Republic of the Congo"}, "NW"},
                  {{"Angola"}, "SW"}});
    Country c191(":/image for c++ project/Geography/Flags/the Dominican Republic.png",
                 ":/image for c++ project/Geography/Shape of countries/North America/Dominican Republic.png",
                 "The Dominican Republic", "North America", "Spanish", {{{"Haiti"}, "E"}});
    Country c192(":/image for c++ project/Geography/Flags/the Marshall Islands.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Marshall Islands.png",
                 "Marshall Islands", "Oceania", "Marshallese");
    Country c193(":/image for c++ project/Geography/Flags/the Philippines.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Philippines.png",
                 "Philippines", "Asia", "Filipino");
    Country c194(":/image for c++ project/Geography/Flags/the Republic of the Congo.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Republic of the Congo.png",
                 "Republic of the Congo", "Africa", "French", {{{"Angola"}, "S"}, {{"Gabon"}, "W"}, {{"Central African Republic"}, "NE"},
                  {{"Democratic Republic of the Congo"}, "SE"}, {{"Cameroon"}, "NW"}});
    Country c195(":/image for c++ project/Geography/Flags/the Seychelles.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Seychelles.png",
                 "Seychelles", "Africa", "Seychellois Creole");
    Country c196(":/image for c++ project/Geography/Flags/the Solomon Islands.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Solomon Islands.png",
                 "Solomon Islands", "Oceania", "English");
    Country c197(":/image for c++ project/Geography/Flags/the United Arab Emirates.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/The United Arab Emirates.png",
                 "The United Arab Emirates", "Asia", "Arabic", {{{"Saudi Arabia"}, "S"}, {{"Oman"}, "E"}});
    Country c198(":/image for c++ project/Geography/Flags/the United Kingdom.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/The United Kingdom.png",
                 "The United Kingdom", "Europe", "English", {{{"Ireland"}, "W"}});
    Country c199(":/image for c++ project/Geography/Flags/the United States.png",
                 ":/image for c++ project/Geography/Shape of countries/North America/United States.png",
                 "The United States", "North America", "English", {{{"Canada"}, "N"}, {{"Mexico"}, "S"}});
    Country c200(":/image for c++ project/Geography/Flags/Togo.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Togo.png",
                 "Togo", "Africa", "French", {{{"Burkina Faso"}, "N"}, {{"Benin"}, "E"}, {{"Ghana"}, "W"}});
    Country c201(":/image for c++ project/Geography/Flags/Tonga.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Tonga.png",
                 "Tonga", "Oceania", "Tongan");
    Country c202(":/image for c++ project/Geography/Flags/Trinidad and Tobago.png",  "-", "Trinidad and Tobago");
    Country c203(":/image for c++ project/Geography/Flags/Tunisia.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Tunisia.png",
                 "Tunisia", "Africa", "Arabic", {{{"Algeria"}, "W + SW"}, {{"Libya"}, "SE"}});
    Country c204(":/image for c++ project/Geography/Flags/Turkey.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Turkey.png",
                 "Turkey", "Asia", "Turkish", {{{"Syria"}, "S"}, {{"Armania", "Azerbaijan", "Iran"}, "E"}, {{"Georgia"}, "NE"},
                  {{"Iraq"}, "SE"}, {{"Greece", "Bulgaria"}, "NW"}});
    Country c205(":/image for c++ project/Geography/Flags/Turkmenistan.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Turkmenistan.png",
                 "Turkmenistan", "Asia", "Turkmen", {{{"Uzbekistan"}, "N + E"}, {{"Iran"}, "S"}, {{"Afghanistan"}, "SE"}, {{"Kazakhstan"}, "NW"},
                  {{"Iran"}, "SW"}});
    Country c206(":/image for c++ project/Geography/Flags/Tuvalu.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Tuvalu.png",
                 "Tuvalu", "Oceania", "Tuvaluan");
    Country c207(":/image for c++ project/Geography/Flags/Uganda.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Uganda.png",
                 "Uganda", "Africa", "English", {{{"South Sudan"}, "N"}, {{"Tanzania"}, "S"}, {{"Kenya"}, "E"},
                  {{"Democratic Republic of the Congo"}, "W"}, {{"Rwanda"}, "SW"}});
    Country c208(":/image for c++ project/Geography/Flags/Ukraine.png",
                 ":/image for c++ project/Geography/Shape of countries/Europe/Ukraine.png",
                 "Ukraine", "Europe", "Ukrainian", {{{"Belarus"}, "N"}, {{"Russia"}, "E"}, {{"Poland", "Slovakia", "Hungary"}, "W"},
                  {{"Russia"}, "NE"}, {{"Romania", "Moldova"}, "SW"}});
    Country c209(":/image for c++ project/Geography/Flags/Uruguay.png",
                 ":/image for c++ project/Geography/Shape of countries/South America/Uruguay.png",
                 "Uruguay", "South America", "Spanish", {{{"Brazil"}, "N + NE"}, {{"Argentina"}, "W + SW"}});
    Country c210(":/image for c++ project/Geography/Flags/Uzbekistan.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Uzbekistan.png",
                 "Uzbekistan", "Asia", "Uzbek", {{{"Kazakhstan"}, "N"}, {{"Afghanistan"}, "S"}, {{"Kyrgyzstan"}, "NE"}, {{"Tajikistan"}, "SE"},
                  {{"Turkmenistan"}, "SW"}});
    Country c211(":/image for c++ project/Geography/Flags/Vanuatu.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Vanuatu.png",
                 "Vanuatu", "Oceania", "Bislama");
    Country c212(":/image for c++ project/Geography/Flags/Vatican City.png",  "-", "Vatican City");
    Country c213(":/image for c++ project/Geography/Flags/Venezuela.png",
                 ":/image for c++ project/Geography/Shape of countries/South America/Venezuela.png",
                 "Venezuela", "South America", "Spanish", {{{"Brazil"}, "S"}, {{"Guyana"}, "E"}, {{"Colombia"}, "W"}});
    Country c214(":/image for c++ project/Geography/Flags/Vietnam.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Vietnam.png",
                 "Vietnam", "Asia", "Vietnamese", {{{"China"}, "N"}, {{"Laos", "Cambodia"}, "W"}});
    Country c215(":/image for c++ project/Geography/Flags/Wales.png",  "-", "Wales");
    Country c216(":/image for c++ project/Geography/Flags/Yemen.png",
                 ":/image for c++ project/Geography/Shape of countries/Asia/Yemen.png",
                 "Yemen", "Asia", "Arabic", {{{"Saudi Arabia"}, "N"}, {{"Oman"}, "NE"}});
    Country c217(":/image for c++ project/Geography/Flags/Zambia.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Zambia.png",
                 "Zambia", "Africa", "English", {{{"Democratic Republic of the Congo"}, "N"}, {{"Zimbabwe", "Botswana"}, "S"},
                  {{"Malawi"}, "E"}, {{"Angola"}, "W"}, {{"Tanzania"}, "NE"}, {{"Mozambique"}, "SE"}, {{"Namibia"}, "SW"}});
    Country c218(":/image for c++ project/Geography/Flags/Zimbabwe.png",
                 ":/image for c++ project/Geography/Shape of countries/Africa/Zimbabwe.png",
                 "Zimbabwe", "Africa", "Shona", {{{"Zambia"}, "N"}, {{"South Africa"}, "S"}, {{"Mozambique"}, "E"}, {{"Botswana"}, "SW"}});

    VecCountry = {c1, c2, c3, c4, c5, c6, c7, c8, c9, c10, c11, c12, c13, c14, c15, c16, c17, c18, c19, c20, c21, c22, c23, c24, c25,
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
}

GeographyWindow::~GeographyWindow()
{
    delete ui;
}

void GeographyWindow::on_FlaggleButton_clicked()
{
    hide();
    flagglegame = new Flaggle_game(member, index, VecCountry, this);
    flagglegame->show();
}

void GeographyWindow::on_goBackButton_clicked()
{
    hide();
    AllGamesWindow *allgamesWindow = new AllGamesWindow(member, index, this);
    allgamesWindow->show();
}

void GeographyWindow::on_MapperButton_clicked()
{
    hide();
    mappergame = new Mapper_game(member, index, VecCountry, this);
    mappergame->show();
}

void GeographyWindow::on_Info_flaggle_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("From the unknown flag, you’ve 10 guesses\n"
                               "to ENTER the correct COUNTRY.\n\n"
                               "The more you guessed,\n"
                               "the more flag will be revealed.\n");
    howtoplay->show();
}

void GeographyWindow::on_Info_mapper_clicked()
{
    howtoplay = new Howto(this);
    howtoplay->showDescription("From the unknown shape, you’ve 10 guesses\n"
                               "to ENTER the correct COUNTRY.\n\n"
                               "Each guess will give hints for\n"
                               "the correct continent, language,\n"
                               "and neighbor country.");
    howtoplay->show();
}
