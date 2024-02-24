#include "word.h"

Word::Word(std::string obj, std::string pos) : Object(obj), PartofSpeech(pos){}

std::string Word::getWord() {
    return Object;
}

std::string Word::getPartofSpeech() {
    return PartofSpeech;
}

int Word::getWordlength() {
    return Object.length();
}
