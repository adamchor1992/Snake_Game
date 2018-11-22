#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QDebug>
#include <QTimer>
#include <QKeyEvent>
#include <QMessageBox>

#include <snake.h>
#include <drawer.h>
#include <food.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    void drawAllSquares();
    void drawArena();
    void restartGame();

private:
    Ui::MainWindow *ui;
    QGraphicsScene *scene;

    QTimer *updaterTimer;
    Drawer *drawer;
    Snake *snake;
    Food *food;

    int square_size = 29;

protected:
    void keyPressEvent(QKeyEvent *event);

private slots:
    void updater();
};

#endif // MAINWINDOW_H
