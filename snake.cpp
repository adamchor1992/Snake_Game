#include "snake.h"

Snake::Snake()
{
    positions.append(QPoint(25,12));
    positions.append(QPoint(24,12));
    positions.append(QPoint(23,12));
    positions.append(QPoint(22,12));
    positions.append(QPoint(21,12));
    positions.append(QPoint(20,12));
    positions.append(QPoint(19,12));
    positions.append(QPoint(18,12));
    positions.append(QPoint(17,12));
    positions.append(QPoint(16,12));

    headPosition.setX(positions.front().x()); //initial head position x
    headPosition.setY(positions.front().y()); //initial head position y

    setDirection(right);
    setNextDirection(right);
}

void Snake::move(int direction)
{
    switch(direction)
    {
    case left:
        positions.removeLast(); //delete last element
        positions.prepend(QPoint(headPosition.x() - 1, headPosition.y()));
        setHeadPosition(QPoint(positions.front()));
        break;
    case up:
        positions.removeLast(); //delete last element
        positions.prepend(QPoint(headPosition.x(), headPosition.y() - 1));
        setHeadPosition(QPoint(positions.front()));
        break;
    case down:
        positions.removeLast(); //delete last element
        positions.prepend(QPoint(headPosition.x(), headPosition.y() + 1));
        setHeadPosition(QPoint(positions.front()));
        break;
    case right:
        positions.removeLast(); //delete last element
        positions.prepend(QPoint(headPosition.x() + 1, headPosition.y()));
        setHeadPosition(QPoint(positions.front()));
        break;
    default:
        qDebug() << "Wrong direction in Snake::move(int direction)";
    }
}

void Snake::setHeadPosition(QPoint headPoint)
{
    headPosition = headPoint;
}

void Snake::setDirection(int dir)
{
    direction = dir;
}

void Snake::setNextDirection(int nextdir)
{
    nextDirection = nextdir;
}
