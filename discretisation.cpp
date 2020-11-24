#include <QVector>
#include "discretisation.h"
#include "point.h"

Discretisation::Discretisation()
{


}

//discrétisation(Segment, ensemble de paramètres ou fonction d'évolution de paramètres)
QVector<Point> discretisation(Segment seg, int start, int end, float pas){
    QVector<Point> tmp;
    for(float i=start; i<end; i+=pas){
        tmp.push_back(seg.getValue(i));
    }
    return tmp;
}

QVector<float> toOpenGL(QVector<Point> points){
    QVector<float> fpoint;
    for(Point p:points){
        //ajout des coordonnées
        fpoint.push_back(p.getX());
        fpoint.push_back(p.getY());
        fpoint.push_back(p.getZ());
        //ajout des couleurs
        fpoint.push_back(0.5);
        fpoint.push_back(0);
        fpoint.push_back(0);
    }
    return fpoint;
}
