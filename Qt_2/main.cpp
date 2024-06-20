#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{ 
    QApplication a(argc, argv);
    MainWindow w;
    w.setGeometry(100, 100, 800, 600); // Set the window size
    // Set the background image using a stylesheet
    w.setStyleSheet("QMainWindow { background-image: url(D:/TicTacBoom-git/TicTacToe_Game/Qt_2/tictacboomback.jpeg); background-position: center; background-repeat: no-repeat; }");
    w.show();
    return a.exec();
}
