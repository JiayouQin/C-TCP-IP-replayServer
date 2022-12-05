#pragma once
#include "Server.h"
#include <QtWidgets/QMainWindow>
#include "ui_ServerWithGUI.h"

class ServerWithGUI : public QMainWindow
{
    Q_OBJECT


public:
    ServerWithGUI(ServerWithGUI&) = delete;
    ServerWithGUI operator=(ServerWithGUI&) = delete;

    static ServerWithGUI& get(){
        static ServerWithGUI instance = ServerWithGUI();
        return instance;
    }
    static void serverConnected() {
        ServerWithGUI::get().ui.btnRun->setStyleSheet("background-color: rgb(0, 255, 0);");

    }
private:
    ServerWithGUI(QWidget* parent = 0) {
        ui.setupUi(this);
        QObject::connect(ui.btnRun, &QPushButton::clicked, this, [=]() {
            ServerClass::get().connect();
            ui.btnRun->setEnabled(false);  });
        
    };
    ~ServerWithGUI() {
    
    };



private:
    Ui::ServerWithGUIClass ui;
};

