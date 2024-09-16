#ifndef WORD_H
#define WORD_H

#include <string>

class Word
{
private:
    std::string Object;
    std::string PartofSpeech;
public:
    Word(std::string obj = "default", std::string pos = "default");

    std::string getWord();
    std::string getPartofSpeech();
    int getWordlength();
};

#endif // WORD_H
