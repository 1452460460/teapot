#ifndef OPENGL_H
#define OPENGL_H

#include <QObject>
#include <QWidget>
#include <QOpenGLWidget>
#include <QOpenGLFunctions_3_3_Core>
#include <QGLWidget>
#include "teapot.h"

class OpenGl : public QOpenGLWidget,QOpenGLFunctions_3_3_Core
{
    Q_OBJECT
public:
    explicit OpenGl(QWidget *parent = nullptr);

    void draw(void);


protected:
    virtual void initializeGL();
    virtual void resizeGL(int w, int h);
    virtual void paintGL();

signals:

};

#endif // OPENGL_H
