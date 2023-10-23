#include "OpenGl.h"

OpenGl::OpenGl(QWidget *parent) : QOpenGLWidget(parent)
{

}

void OpenGl::draw()
{
     drawingTeapot();
}

void OpenGl::initializeGL()
{
    //启动显卡
    this->initializeOpenGLFunctions();
    //清空背景
    glClearColor(0.2f, 0.2f, 0.2f, 1.0f);

    //启动深度测试
    glEnable(GL_DEPTH_TEST);
    glEnable(GL_LIGHT0);//启动0号光源
    glEnable(GL_LIGHTING);//启用灯源
}

void OpenGl::resizeGL(int width, int height)
{

    //重置当前的视口
    glViewport(0, 0, (GLint)width, (GLint)height);
//    glViewport((width - side) / 2, (height - side) / 2, side, side);

    //选择投影矩阵
    glMatrixMode(GL_PROJECTION);
    //设置窗口大小 左，右，下，上，前，后
    glOrtho(-7, +7, -2, +5, 1.0, 25.0);
    glMatrixMode(GL_MODELVIEW);
}

void OpenGl::paintGL()
{
    //清除缓冲
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT | GL_STENCIL_BUFFER_BIT);
    //平移
    glTranslatef(0.0, 0.0, -10.0);
    //绘制茶壶
    draw();
}
