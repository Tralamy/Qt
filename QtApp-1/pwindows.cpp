#include "pwindows.h"

pWindow::pWindow(/* int x, int y */) : QWidget()
{
    /*
     *
//    setMinimumSize(x, y);

//    // Construction du bouton
//    m_bouton = new QPushButton("Quit", this);

//    m_bouton->setFont(QFont("Comic Sans MS", 14));
//    m_bouton->setCursor(Qt::PointingHandCursor);
//    m_bouton->move(250, 250);

//    connect(m_bouton, SIGNAL(clicked()),qApp, SLOT(quit())); */

    // Progress BAR
    O_QP = new QProgressBar(this);
    O_QP -> setGeometry(70,20,150,20);
    O_QP -> setRange(0, 100);
    O_QP-> setValue(100);
    // QLCD Number
    O_lcd = new QLCDNumber(this);
    O_lcd->setSegmentStyle(QLCDNumber::Flat);
    O_lcd->move(95, 50);
    O_lcd->display(100);
    // OSlider Horizontal
    O_slider = new QSlider(Qt::Horizontal, this);
    O_slider->setGeometry(50, 80, 150, 20);
    O_slider-> setRange(0, 100);
    O_slider->setValue(30);
    // OSlider Horizontal -> Singal Slot
    QObject::connect(O_slider, SIGNAL(valueChanged(int)), O_QP, SLOT(setValue(int))) ;
    QObject::connect(O_slider, SIGNAL(valueChanged(int)), O_lcd, SLOT(display(int))) ;

    O_sliderV = new QSlider(Qt::Vertical, this);
    O_sliderV->setGeometry(35, 5, 20, 75);
    O_sliderV-> setRange(0, 100);

    QObject::connect(O_sliderV, SIGNAL(valueChanged(int)), O_QP, SLOT(setValue(int))) ;
    QObject::connect(O_sliderV, SIGNAL(valueChanged(int)), O_lcd, SLOT(display(int))) ;
}
