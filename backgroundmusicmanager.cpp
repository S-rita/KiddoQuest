#include "backgroundmusicmanager.h"

BackgroundMusicManager::BackgroundMusicManager(QObject *parent) : QObject(parent) {
    player = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);

    player->setAudioOutput(audioOutput);
    player->setSource(QUrl::fromLocalFile("C:/n/year1/cpp/pj/KiddoQuest-main/Audio/BackgroundMusic.mp3"));
    audioOutput->setVolume(0);
    player->play();
}

BackgroundMusicManager::~BackgroundMusicManager() {
    delete player;
    delete audioOutput;
}

void BackgroundMusicManager::setVolume(int volume) {
    audioOutput->setVolume(volume);
}

