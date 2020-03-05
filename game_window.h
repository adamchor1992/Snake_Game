#pragma once

#include <QMainWindow>
#include <QGraphicsScene>
#include <QDebug>
#include <QTimer>
#include <QKeyEvent>
#include <QMessageBox>

#include <snake.h>
#include <food.h>

namespace Ui {
class MainWindow;
}

class GameWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

    void InitializeGameplayScene();

private:
    Ui::MainWindow* m_pUi;
    QGraphicsScene m_Scene;
    QTimer m_UpdaterTimer;
    Snake m_Snake;
    Food m_Food;

    void DrawAllSquares();
    void DrawGameArena();
    void RestartGame();
    void CheckSnakeCollisionWithWall();
    void CheckSnakeCollisionWithFoodSquare();
    void CheckSnakeCollisionWithItself();
    void RedrawSnake();

        void keyPressEvent(QKeyEvent *event) override;

private slots:
    void GameTick();
};
