#include "./view/mainwindow.h"
#include "./view/videoplayback.h"
#include "model/sqlconnector.h"
#include "controller/maincontroller.h"
#include "controller/sqlcontroller.h"
#include "model/sqlquery.h"

#include <QApplication>
#include <stdio.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    mainController::getInstance();


    sqlConnector::getInstance();
//    mainController::getInstance();
    sqlQuery::getInstance();
    sqlController::getInstance();

//    VideoPlayback::getInstance()->show();


//    char s[256];
//    char *p;
//    unsigned long long int h = 0;

//    sprintf(s,"administrator1234567");
//    for(p=s; *p; p++)
//    {
//        h = h*256 + *p;
//    }
//    qDebug()<<h;

    return a.exec();
}

