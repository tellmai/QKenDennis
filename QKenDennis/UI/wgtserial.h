#ifndef WGTSERIAL_H
#define WGTSERIAL_H

#include <QWidget>

namespace Ui {
class WgtSerial;
}

class WgtSerial : public QWidget
{
    Q_OBJECT

public:
    explicit WgtSerial(QWidget *parent = nullptr);
    ~WgtSerial();

private:
    Ui::WgtSerial *ui;

private:
        void Init();
};

#endif // WGTSERIAL_H
