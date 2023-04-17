#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QEvent>
#include <QMouseEvent>

#include "wgtserial.h"
#include "sqlmanage.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE


class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_pb_Serial_clicked();


    void on_pb_Min_clicked();

    void on_pb_Max_clicked();

    void on_pb_Close_clicked();

    void on_pb_sqlManager_clicked();

private:
    Ui::Widget *ui;

   WgtSerial* m_wgtSerial;
   SqlManage* m_sqlManage;
   void  Init();

private:

   bool m_isNormal = true;
   int boundaryWidth;
   QPoint clickPos;

 protected:
   //设置无边框，且可拉伸效果
   bool nativeEvent(const QByteArray& EventType, void* pMessage, long* pResult) override;
   void mousePressEvent(QMouseEvent* e) Q_DECL_OVERRIDE;
   //void mouseReleaseEvent(QMouseEvent* e) Q_DECL_OVERRIDE;
   void mouseMoveEvent(QMouseEvent* e) Q_DECL_OVERRIDE;
   //void mouseDoubleClickEvent(QMouseEvent *event) override;

   void mouseDoubleClickEvent(QMouseEvent *event) override;





#if 0
protected:
    bool eventFilter(QObject *obj, QEvent *event);
    bool winEvent(MSG *message,long *result);
    void mouseMoveEvent(QMouseEvent *e);
    void mousePressEvent(QMouseEvent *e);
    void mouseReleaseEvent(QMouseEvent *e);

private slots:
    void on_btnMenu_Close_clicked();

    void on_btnMenu_Max_clicked();

    void on_btnMenu_Min_clicked();

private:
    QPoint mousePoint;
    bool mousePressed;
#endif


};
#endif // WIDGET_H
