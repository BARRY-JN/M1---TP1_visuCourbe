#ifndef DISCRETISATION_H
#define DISCRETISATION_H

#include <QVector>
#include "segment.h"


class Discretisation
{
public:
    Discretisation();
    QVector<Point> discretisation(Segment seg, int start, int end, float pas);
    QVector<float> toOpenGL(QVector<Point> points);
};

#endif // DISCRETISATION_H
