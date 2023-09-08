#include "authwindow.hh"
#include "ui_authwindow.h"
#include <QString>
#include <QMessageBox>
#include <QAudio>
#include <QAudioOutput>
#include <QMediaPlayer>

AuthWindow::AuthWindow(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::AuthWindow)
{
    ui->setupUi(this);
}

AuthWindow::~AuthWindow()
{
    delete ui;
}


void AuthWindow::on_exitBtn_clicked()
{
    close();
}


void AuthWindow::on_confirmBtn_clicked()
{
    QString loginField = ui->loginField->text();
    QString passField = ui->passField->text();

    if(loginField == "User" && passField == "123")
    {
        QMediaPlayer* player = new QMediaPlayer(this);
        QAudioOutput* output = new QAudioOutput(this);
        player->setAudioOutput(output);
        player->setSource(QUrl("/SoundsQt/free-sound-1674707458.mp3"));
        output->setVolume(30);
        player->play();
        QMessageBox::information(this, "Thanks", "That was my first c++ qt app :)");
    } else {
        QMediaPlayer* player = new QMediaPlayer(this);
        QAudioOutput* output = new QAudioOutput(this);
        player->setAudioOutput(output);
        player->setSource(QUrl("/SoundsQt/free-sound-1674743940.mp3"));
        output->setVolume(30);
        player->play();
        QMessageBox::critical(this, "Fail", "That was my first c++ qt app :(");
    }
}

void AuthWindow::on_infobtn_clicked()
{
    QMediaPlayer* player = new QMediaPlayer(this);
    QAudioOutput* output = new QAudioOutput(this);
    player->setAudioOutput(output);
    player->setSource(QUrl("/SoundsQt/free-sound-1674784791.mp3"));
    output->setVolume(30);
    player->play();
    QMessageBox::warning(this, "Info", "next time i am ad sql to this project and reload it on github; than i delete this button! I want to say because in my .pro file i add multimedia and sql libraries; Thanks for information!!! :)");
}

