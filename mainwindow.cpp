#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    scene = new QGraphicsScene(this);
    ui->graphicsView->setScene(scene);
    scene->setBackgroundBrush(QBrush(Qt::black)); //background is black
    scene->setSceneRect(0,0,1560,810);

    QPen red_pen(Qt::red);
    QBrush red_brush(Qt::red);

    QPen green_pen(Qt::green);
    QBrush green_brush(Qt::green);

    QPen blue_pen(Qt::blue);
    QBrush blue_brush(Qt::blue);

    int square_count=0;
    int square_size = 29;

//    for(int i=0 ; i<52; i++)
//    {
//        for(int j=0; j<27; j++)
//        {
//            if(i==51 && j == 26)
//            {
//                scene->addRect(i*30,j*30,30,30, red_pen, blue_brush);
//                continue;
//            }
//            if(i%2 ==0)  //even
//            {
//                scene->addRect(i*30,j*30,square_size,square_size, red_pen, green_brush);
//            }
//            else //odd
//            {
//                scene->addRect(i*30,j*30,square_size,square_size, blue_pen, green_brush);
//            }

//            square_count++;
//        }
//    }

    scene->addLine(15,15,1560-15,15, QPen(Qt::white,30));
    scene->addLine(15,15,15,810-15, QPen(Qt::white,30));

    scene->addLine(1560-15,15,1560-15,810-15, QPen(Qt::white,30));
    scene->addLine(15,810-15,1560-15,810-15, QPen(Qt::white,30));

    qDebug() << "Liczba kwadratow: " << square_count;

}

MainWindow::~MainWindow()
{
    delete ui;
}
