#include "flaggle_game.h"
#include "./ui_flaggle_game.h"
#include "Flaggle.h"
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
    , flag("default_path", "default_country")
{
    ui->setupUi(this);
    Flaggle c1("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Afghanistan.png", "Afghanistan");
    Flaggle c2("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Albania.png", "Albania");
    Flaggle c3("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Algeria.png", "Algeria");
    Flaggle c4("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Andorra.png", "Andorra");
    Flaggle c5("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Angola.png", "Angola");
    Flaggle c6("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Antigua and Barbuda.png", "Antigua and Barbuda");
    Flaggle c7("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Arab League.png", "Arab League");
    Flaggle c8("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Argentina.png", "Argentina");
    Flaggle c9("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Armenia.png", "Armenia");
    Flaggle c10("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Aruba.png", "Aruba");
    Flaggle c11("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Australia.png", "Australia");
    Flaggle c12("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Austria.png", "Austria");
    Flaggle c13("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Azerbaijan.png", "Azerbaijan");
    Flaggle c14("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Bahamas.png", "Bahamas");
    Flaggle c15("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Bahrain.png", "Bahrain");
    Flaggle c16("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Bangladesh.png", "Bangladesh");
    Flaggle c17("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Babados.png", "Babados");
    Flaggle c18("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Belarus.png", "Belarus");
    Flaggle c19("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Belgium.png", "Belgium");
    Flaggle c20("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Belize.png", "Belize");
    Flaggle c21("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Benin.png", "Benin");
    Flaggle c22("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Bhutan.png", "Bhutan");
    Flaggle c23("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Bolivia.png", "Bolivia");
    Flaggle c24("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Bonaire.png", "Bonaire");
    Flaggle c25("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Bosnia and Herzegovina.png", "Bosnia and Herzegovina");
    Flaggle c26("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Botswana.png", "Botswana");
    Flaggle c27("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Brazil.png", "Brazil");
    Flaggle c28("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Brunei.png", "Brunei");
    Flaggle c29("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Bulgaria.png", "Bulgaria");
    Flaggle c30("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Burkina Faso.png", "Burkina Faso");
    Flaggle c31("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Burundi.png", "Burundi");
    Flaggle c32("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Cambodia.png", "Cambodia");
    Flaggle c33("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Cameroon.png", "Cameroon");
    Flaggle c34("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Canada.png", "Canada");
    Flaggle c35("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Cape Verde.png", "Cape Verde");
    Flaggle c36("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Chad.png", "Chad");
    Flaggle c37("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Chile.png", "Chile");
    Flaggle c38("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/China.png", "China");
    Flaggle c39("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Colombia.png", "Colombia");
    Flaggle c40("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Comoros.png", "Comoros");
    Flaggle c41("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Costa Rica.png", "Costa Rica");
    Flaggle c42("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Cote De Ivoire.png", "Cote De Ivoire");
    Flaggle c43("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Croatia.png", "Croatia");
    Flaggle c44("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Cuba.png", "Cuba");
    Flaggle c45("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Curacao.png", "Curacao");
    Flaggle c46("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Cyprus.png", "Cyprus");
    Flaggle c47("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Denmark.png", "Denmark");
    Flaggle c48("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Djibouti.png", "Djibouti");
    Flaggle c49("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Dominica.png", "Dominica");
    Flaggle c50("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/East Timor.png", "East Timor");
    Flaggle c51("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Ecuador.png", "Ecuador");
    Flaggle c52("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Egypt.png", "Egypt");
    Flaggle c53("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/El Salvador.png", "El Salvador");
    Flaggle c54("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/England.png", "England");
    Flaggle c55("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Equatorial Guinea.png", "Equatorial Guinea");
    Flaggle c56("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Eritrea.png", "Eritrea");
    Flaggle c57("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Estonia.png", "Estonia");
    Flaggle c58("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Ethiopia.png", "Ethiopia");
    Flaggle c59("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Faroe Islands.png", "Faroe Islands");
    Flaggle c60("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Fiji.png", "Fiji");
    Flaggle c61("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Finland.png", "Finland");
    Flaggle c62("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/France.png", "France");
    Flaggle c63("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Gabon.png", "Gabon");
    Flaggle c64("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Gambia.png", "Gambia");
    Flaggle c65("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Georgia.png", "Georgia");
    Flaggle c66("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Germany.png", "Germany");
    Flaggle c67("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Ghana.png", "Ghana");
    Flaggle c68("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Greece.png", "Greece");
    Flaggle c69("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Greenland.png", "Greenland");
    Flaggle c70("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Grenada.png", "Grenada");
    Flaggle c71("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Guam.png", "Guam");
    Flaggle c72("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Guatemala.png", "Guatemala");
    Flaggle c73("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Guinea.png", "Guinea");
    Flaggle c74("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Guinea-Bissau.png", "Guinea-Bissau");
    Flaggle c75("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Guyana.png", "Guyana");
    Flaggle c76("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Haiti.png", "Haiti");
    Flaggle c77("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Honduras.png", "Honduras");
    Flaggle c78("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Hongkong.png", "Hongkong");
    Flaggle c79("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Hungary.png", "Hungary");
    Flaggle c80("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Iceland.png", "Iceland");
    Flaggle c81("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/India.png", "India");
    Flaggle c82("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Indonesia.png", "Indonesia");
    Flaggle c83("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Iran.png", "Iran");
    Flaggle c84("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Iraq.png", "Iraq");
    Flaggle c85("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Ireland.png", "Ireland");
    Flaggle c86("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Israel.png", "Israel");
    Flaggle c87("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Italy.png", "Italy");
    Flaggle c88("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Jamaica.png", "Jamaica");
    Flaggle c89("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Japan.png", "Japan");
    Flaggle c90("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Jordan.png", "Jordan");
    Flaggle c91("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Kazakhstan.png", "Kazakhstan");
    Flaggle c92("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Kenya.png", "Kenya");
    Flaggle c93("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Kiribati.png", "Kiribati");
    Flaggle c94("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Kosovo.png", "Kosovo");
    Flaggle c95("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Kuwait.png", "Kuwait");
    Flaggle c96("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Kyrgyzstan.png", "Kyrgyzstan");
    Flaggle c97("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Laos.png", "Laos");
    Flaggle c98("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Latvia.png", "Latvia");
    Flaggle c99("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Lebanon.png", "Lebanon");
    Flaggle c100("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Lesotho.png", "Lesotho");
    Flaggle c101("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Liberia.png", "Liberia");
    Flaggle c102("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Libya.png", "Libya");
    Flaggle c103("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Liechtenstein.png", "Liechtenstein");
    Flaggle c104("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Lithuania.png", "Lithuania");
    Flaggle c105("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Luxembourg.png", "Luxembourg");
    Flaggle c106("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Macedonia.png", "Macedonia");
    Flaggle c107("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Madagascar.png", "Madagascar");
    Flaggle c108("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Malawi.png", "Malawi");
    Flaggle c109("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Malaysia.png", "Malaysia");
    Flaggle c110("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Maldives.png", "Maldives");
    Flaggle c111("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Mali.png", "Mali");
    Flaggle c112("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Malta.png", "Malta");
    Flaggle c113("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Mauritania.png", "Mauritania");
    Flaggle c114("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Mauritius.png", "Mauritius");
    Flaggle c115("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Mexico.png", "Mexico");
    Flaggle c116("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Micronesia.png", "Micronesia");
    Flaggle c117("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Moldova.png", "Moldova");
    Flaggle c118("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Monaco.png", "Monaco");
    Flaggle c119("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Mongolia.png", "Mongolia");
    Flaggle c120("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Montenegro.png", "Montenegro");
    Flaggle c121("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Morocco.png", "Morocco");
    Flaggle c122("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Mozambique.png", "Mozambique");
    Flaggle c123("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Myanmar.png", "Myanmar");
    Flaggle c124("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Namibia.png", "Namibia");
    Flaggle c125("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Nauru.png", "Nauru");
    Flaggle c126("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Nepal.png", "Nepal");
    Flaggle c127("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Netherlands.png", "Netherlands");
    Flaggle c128("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/New Caledonia.png", "New Caledonia");
    Flaggle c129("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/New Zealand.png", "New Zealand");
    Flaggle c130("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Nicaragua.png", "Nicaragua");
    Flaggle c131("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Niger.png", "Niger");
    Flaggle c132("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Nigeria.png", "Nigeria");
    Flaggle c133("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Niue.png", "Niue");
    Flaggle c134("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/North Korea.png", "North Korea");
    Flaggle c135("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Northern Ireland.png", "Northern Ireland");
    Flaggle c136("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Northern Mariana Islands.png", "Northern Mariana Islands");
    Flaggle c137("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Norway.png", "Norway");
    Flaggle c138("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Oman.png", "Oman");
    Flaggle c139("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Pakistan.png", "Pakistan");
    Flaggle c140("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Palau.png", "Palau");
    Flaggle c141("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Palestine.png", "Palestine");
    Flaggle c142("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Panama.png", "Panama");
    Flaggle c143("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Papua New Guinea.png", "Papua New Guinea");
    Flaggle c144("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Paraguay.png", "Paraguay");
    Flaggle c145("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Peru.png", "Peru");
    Flaggle c146("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Poland.png", "Poland");
    Flaggle c147("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Portugal.png", "Portugal");
    Flaggle c148("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Puerto Rico.png", "Puerto Rico");
    Flaggle c149("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Qatar.png", "Qatar");
    Flaggle c150("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Romania.png", "Romania");
    Flaggle c151("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Russia.png", "Russia");
    Flaggle c152("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Rwanda.png", "Rwanda");
    Flaggle c153("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Saba.png", "Saba");
    Flaggle c154("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Saint Eustatius.png", "Saint Eustatius");
    Flaggle c155("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Saint Kitts and Nevis.png", "Saint Kitts and Nevis");
    Flaggle c156("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Saint Lucia.png", "Saint Lucia");
    Flaggle c157("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Saint Martin.png", "Saint Martin");
    Flaggle c158("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Saint Patrick.png", "Saint Patrick");
    Flaggle c159("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Saint Vincent and the Grenadines.png", "Saint Vincent and the Grenadines");
    Flaggle c160("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Samoa.png", "Samoa");
    Flaggle c161("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/San Marino.png", "San Marino");
    Flaggle c162("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Sao Tome and Principe.png", "Sao Tome and Principe");
    Flaggle c163("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Saudiarabia.png", "Saudiarabia");
    Flaggle c164("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Scotland.png", "Scotland");
    Flaggle c165("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Senegal.png", "Senegal");
    Flaggle c166("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Serbia.png", "Serbia");
    Flaggle c167("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Sierra Leone.png", "Sierra Leone");
    Flaggle c168("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Singapore.png", "Singapore");
    Flaggle c169("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Slovakia.png", "Slovakia");
    Flaggle c170("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Slovenia.png", "Slovenia");
    Flaggle c171("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Somalia.png", "Somalia");
    Flaggle c172("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/South Afica.png", "South Afica");
    Flaggle c173("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/South Korea.png", "South Korea");
    Flaggle c174("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/South Sudan.png", "South Sudan");
    Flaggle c175("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Spain.png", "Spain");
    Flaggle c176("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Sri Lanka.png", "Sri Lanka");
    Flaggle c177("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Sudan.png", "Sudan");
    Flaggle c178("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Suriname.png", "Suriname");
    Flaggle c179("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Swaziland.png", "Swaziland");
    Flaggle c180("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Sweden.png", "Sweden");
    Flaggle c181("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Switzerland.png", "Switzerland");
    Flaggle c182("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Syria.png", "Syria");
    Flaggle c183("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Taiwan.png", "Taiwan");
    Flaggle c184("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Tajikistan.png", "Tajikistan");
    Flaggle c185("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Tanzania.png", "Tanzania");
    Flaggle c186("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Thailand.png", "Thailand");
    Flaggle c187("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/the Central-Afican Republic.png", "The Central-Afican Republic");
    Flaggle c188("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/the Czech Republic.png", "The Czech Republic");
    Flaggle c189("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/the Democratic Republic of The Congo.png", "The Democratic Republic of the Congo");
    Flaggle c190("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/the Dominican Republic.png", "The Dominican Republic");
    Flaggle c191("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/the Marshall Islands.png", "The Marshall Islands");
    Flaggle c192("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/the Philippines.png", "The Philippines");
    Flaggle c193("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/the Republic of the Congo.png", "The Republic of the Congo");
    Flaggle c194("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/the Seychelles.png", "The Seychelles");
    Flaggle c195("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/the Solomon Islands.png", "The Solomon Islands");
    Flaggle c196("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/the United Arab Emirates.png", "The United Arab Emirates");
    Flaggle c197("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/the United Kingdom.png", "The United Kingdom");
    Flaggle c198("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/the United States.png", "The United States");
    Flaggle c199("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Togo.png", "Togo");
    Flaggle c200("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Tonga.png", "Tonga");
    Flaggle c201("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Trinidad and Tobago.png", "Trinidad and Tobago");
    Flaggle c202("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Tunisia.png", "Tunisia");
    Flaggle c203("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Turkey.png", "Turkey");
    Flaggle c204("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Turkmenistan.png", "Turkmenistan");
    Flaggle c205("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Tuvalu.png", "Tuvalu");
    Flaggle c206("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Uganda.png", "Uganda");
    Flaggle c207("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Ukraine.png", "Ukraine");
    Flaggle c208("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Uruguay.png", "Uruguay");
    Flaggle c209("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Uzbekistan.png", "Uzbekistan");
    Flaggle c210("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Vanuatu.png", "Vanuatu");
    Flaggle c211("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Vatican City.png", "Vatican City");
    Flaggle c212("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Venezuela.png", "Venezuela");
    Flaggle c213("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Vietnam.png", "Vietnam");
    Flaggle c214("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Wales.png", "Wales");
    Flaggle c215("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Yemen.png", "Yemen");
    Flaggle c216("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Zambia.png", "Zambia");
    Flaggle c217("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/Zimbabwe.png", "Zimbabwe");

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
               c210, c211, c212, c213, c214, c215, c216, c217};

    ui->guessFlagcomboBox->setEditable(true);

    for (int i = 0; i < VecFlag.size(); ++i) {
        ui->guessFlagcomboBox->addItem(QString::fromStdString(VecFlag[i].getCountryName()));
    }

    srand((unsigned) time(NULL));
    flag = VecFlag[rand()%(VecFlag.size())];
    QPixmap flagpic(QString::fromStdString(flag.getPath()));
    ui->flag->setPixmap(flagpic.scaled(ui->flag->size(), Qt::IgnoreAspectRatio));

    QPixmap picgray("/Users/gnar_p/KiddoQuest-main/image for c++ project/Geography/Flags/images.png");
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
                ui->gray1_2->clear();
                ui->gray1_3->clear();
                ui->gray1_4->clear();
                ui->gray2_1->clear();
                ui->gray2_2->clear();
                ui->gray2_3->clear();
                ui->gray2_4->clear();
                ui->gray3_1->clear();
                ui->gray3_2->clear();
                ui->gray3_3->clear();
                ui->gray3_4->clear();
                GameComplete gamecomplete;
                gamecomplete.setModal(true);
                gamecomplete.setScore(RoundGame-1);
                gamecomplete.exec();
                hide();
                GeographyWindow *geographyWindow = new GeographyWindow(this);
                geographyWindow->show();
            } else if (RoundGame == 0) {
                hide();
                GeographyWindow *geographyWindow = new GeographyWindow(this);
                geographyWindow->show();
            } else {
                switch(RoundGame) {
                case 0 :
                    ans = "12)" + ans;
                    ui->ans6_2->setText(QString::fromStdString(ans));
                    QMessageBox::information(this, tr("Show Answer"), tr(flag.getCountryName().c_str()));
                case 1 :
                    ui->gray2_3->clear();
                    ans = "11)" + ans;
                    ui->ans5_2->setText(QString::fromStdString(ans));
                    break;
                case 2 :
                    ui->gray1_3->clear();
                    ans = "10)" + ans;
                    ui->ans4_2->setText(QString::fromStdString(ans));
                    break;
                case 3 :
                    ui->gray3_4->clear();
                    ans = "9)" + ans;
                    ui->ans3_2->setText(QString::fromStdString(ans));
                    break;
                case 4 :
                    ui->gray3_2->clear();
                    ans = "8)" + ans;
                    ui->ans2_2->setText(QString::fromStdString(ans));
                    break;
                case 5 :
                    ui->gray2_4->clear();
                    ans = "7)" + ans;
                    ui->ans1_2->setText(QString::fromStdString(ans));
                    break;
                case 6 :
                    ui->gray2_1->clear();
                    ans = "6)" + ans;
                    ui->ans6->setText(QString::fromStdString(ans));
                    break;
                case 7 :
                    ui->gray3_3->clear();
                    ans = "5)" + ans;
                    ui->ans5->setText(QString::fromStdString(ans));
                    break;
                case 8 :
                    ui->gray1_2->clear();
                    ans = "4)" + ans;
                    ui->ans4->setText(QString::fromStdString(ans));
                    break;
                case 9 :
                    ui->gray3_1->clear();
                    ans = "3)" + ans;
                    ui->ans3->setText(QString::fromStdString(ans));
                    break;
                case 10 :
                    ui->gray2_2->clear();
                    ans = "2)" + ans;
                    ui->ans2->setText(QString::fromStdString(ans));
                    break;
                case 11 :
                    ui->gray1_4->clear();
                    ans = "1)" + ans;
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

