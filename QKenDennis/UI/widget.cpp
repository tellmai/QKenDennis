#include "widget.h"
#include "ui_widget.h"

#include <QDebug>



#include <windows.h>
#include <windowsx.h>

#pragma comment(lib, "user32.lib")


Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    //setWindowFlags (Qt::CustomizeWindowHint);//隐藏标题栏可以拉伸
    //setWindowFlags(Qt::FramelessWindowHint);//隐藏标题栏不可拉伸

    boundaryWidth=4;// 注意设定初始值
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);  //设置为无边框窗口
    Init();

}

Widget::~Widget()
{
    delete ui;
}

/*
函数名称：Init（）
参数：无
说明：初始化
*/
void Widget::Init()
{
      m_wgtSerial = new  WgtSerial();
      m_sqlManage = new SqlManage();

}

void Widget::on_pb_Serial_clicked()
{

    m_wgtSerial->showNormal();

}


void Widget::on_pb_sqlManager_clicked()
{
    m_sqlManage->showNormal();
}


/*******************************************************************************
函数说明:	窗体最小化
参   数:
返   回:
*******************************************************************************/
void Widget::on_pb_Min_clicked()
{
    this->showMinimized();
}

/*******************************************************************************
函数说明:	窗体最大化
参   数:
返   回:
*******************************************************************************/
void Widget::on_pb_Max_clicked()
{
    WINDOWPLACEMENT ws;
    ws.length = sizeof(WINDOWPLACEMENT);
    GetWindowPlacement((HWND)(this->winId()), &ws);
    if (ws.showCmd == SW_SHOWMAXIMIZED)
    {
        this->showNormal();
    }
    else
    {
           //this->showFullScreen();//SHOW_FULLSCREEN
           this->showMaximized();//SW_SHOWMAXIMIZED
    }


}

/*******************************************************************************
函数说明:	关闭窗口
参   数:
返   回:
*******************************************************************************/
void Widget::on_pb_Close_clicked()
{
    this->close();
}


//窗口拉伸
bool Widget::nativeEvent(const QByteArray &eventType, void *message, long *result)
{
    Q_UNUSED(eventType);
    MSG* msg = (MSG*)message;
    switch(msg->message)
        {
        case WM_NCHITTEST:
            int xPos = GET_X_LPARAM(msg->lParam) - this->frameGeometry().x();
            int yPos = GET_Y_LPARAM(msg->lParam) - this->frameGeometry().y();
            if(xPos < boundaryWidth && yPos<boundaryWidth)                    //左上角
                *result = HTTOPLEFT;
            else if(xPos>=width()-boundaryWidth&&yPos<boundaryWidth)          //右上角
                *result = HTTOPRIGHT;
            else if(xPos<boundaryWidth&&yPos>=height()-boundaryWidth)         //左下角
                *result = HTBOTTOMLEFT;
            else if(xPos>=width()-boundaryWidth&&yPos>=height()-boundaryWidth)//右下角
                *result = HTBOTTOMRIGHT;
            else if(xPos < boundaryWidth)                                     //左边
                *result =  HTLEFT;
            else if(xPos>=width()-boundaryWidth)                              //右边
                *result = HTRIGHT;
            else if(yPos<boundaryWidth)                                       //上边
                *result = HTTOP;
            else if(yPos>=height()-boundaryWidth)                             //下边
                *result = HTBOTTOM;
            else              //其他部分不做处理，返回false，留给其他事件处理器处理
               return false;
            return true;
        }
        return false;         //此处返回false，留给其他事件处理器处理
}

void Widget::mousePressEvent(QMouseEvent *e)
{
    if(e->button()==Qt::LeftButton)
        clickPos=e->pos();
}
void Widget::mouseMoveEvent(QMouseEvent *e)
{
    if(e->buttons()&Qt::LeftButton)
        move(e->pos()+pos()-clickPos);
}

void Widget::mouseDoubleClickEvent(QMouseEvent *event)
{
        Q_UNUSED(event);
        if (m_isNormal == false)
        {
            this->showNormal();
            m_isNormal = true;
        }
        else
        {
            //this->showMaximized();
            this->showFullScreen();
             m_isNormal = false;
        }
}

