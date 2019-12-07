#ifndef DEF_MAFENETRE
#define DEF_MAFENETRE

#include <QApplication>
#include <QWidget>
#include <QPushButton>
#include <QLCDNumber>
#include <QSlider>
#include <QProgressBar>

class pWindow : public QWidget // On hérite de QWidget (IMPORTANT)
{
    /*
    public:
    pWindow(int x, int y);

    private:
    QPushButton *m_bouton; */

public:
    pWindow();
private:
    QLCDNumber *O_lcd;
    QSlider *O_slider;
    QSlider *O_sliderV;
    QProgressBar *O_QP;
};

#endif
