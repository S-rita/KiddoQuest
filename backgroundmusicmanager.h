#ifndef BACKGROUNDMUSICMANAGER_H
#define BACKGROUNDMUSICMANAGER_H

#include <QObject>
#include <QMediaPlayer>
#include <QAudioOutput>

class BackgroundMusicManager : public QObject {
    Q_OBJECT

public:
    explicit BackgroundMusicManager(QObject *parent = nullptr);
    ~BackgroundMusicManager();
    void setVolume(int volume);


private:
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
};

#endif // BACKGROUNDMUSICMANAGER_H
