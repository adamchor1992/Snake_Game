#pragma once

#include <QObject>
#include <QVector>
#include <QPoint>
#include <QDebug>
#include "utilities.h"

class Snake
{
public:
    Snake();
    void Move();
    bool IsMovePossible();
    void Grow();
    void Reset();

    void SetHeadPosition(QPoint headPosition) {m_HeadPosition = headPosition;}
    void SetDirection(Direction direction) {m_Direction = direction;}
    void SetNextDirection(Direction nextDirection) {m_NextDirection = nextDirection;}

    QVector<QPoint>& GetPositions() {return m_Positions;}
    QPoint& GetHeadPosition() {return m_HeadPosition;}
    Direction& GetDirection() {return m_Direction;}
    Direction& GetNextDirection() {return m_NextDirection;}

private:
    Direction m_Direction;
    Direction m_NextDirection;
    QPoint m_HeadPosition;
    QVector<QPoint> m_Positions;

    QVector<QPoint> m_StartingPositions = {QPoint(25,12), QPoint(24,12), QPoint(23,12)};
};
