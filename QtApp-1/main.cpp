#include <QtWidgets>
#include "pwindows.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
/*
    QFont pDefault("Futura", 24);

    // Window ->
    QWidget window;
    // Window size ->
    window.setMinimumSize(300,150);
    // Window icon ->

    // Buton ->
    QPushButton button("Salamy", &window);
    // Bunton deco ->
    button.setFont(pDefault);
    button.setToolTip("Samy");
    //Buton move ->
    button.move(60,50);

    QObject::connect(&window, SIGNAL(clicked()), qApp, SLOT(quit()));


    window.show(); */
    pWindow mY;
    mY.show();

    return app.exec();
}
