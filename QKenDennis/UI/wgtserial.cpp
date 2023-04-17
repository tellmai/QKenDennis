#include "wgtserial.h"
#include "ui_wgtserial.h"

WgtSerial::WgtSerial(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WgtSerial)
{
    ui->setupUi(this);


    //setAttribute(Qt::WA_ShowModal, true);//展示为 模态对话框
    //setWindowFlags (Qt::CustomizeWindowHint);

    Init();
}

WgtSerial::~WgtSerial()
{
    delete ui;
}


void WgtSerial::Init()
{
    //代码布局发送窗口
    QHBoxLayout* m_hlayoutF = new QHBoxLayout;
    m_hlayoutF->setContentsMargins(0, 0, 0, 0);
    m_hlayoutF->addWidget(ui->te_send);
    ui->wgt_send->setLayout(m_hlayoutF);


}
