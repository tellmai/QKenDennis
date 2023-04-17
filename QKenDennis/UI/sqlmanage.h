#ifndef SQLMANAGE_H
#define SQLMANAGE_H

#include <QWidget>

#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRecord>

namespace Ui {
class SqlManage;
}

class SqlManage : public QWidget
{
    Q_OBJECT

public:
    explicit SqlManage(QWidget *parent = nullptr);
    ~SqlManage();

private slots:
    void on_pb_linkDatabase_clicked();

    void on_pb_createDatabase_clicked();

    void on_pb_executeDataBase_clicked();

    void on_pb_readDataBase_clicked();

    void on_pb_addData_clicked();

    void on_pb_delData_clicked();

    void on_pb_editData_clicked();

    void on_pb_submitData_clicked();

    void on_pb_cancelData_clicked();

private:
    Ui::SqlManage *ui;


    QSqlDatabase m_database;

    int excute_sql_file1(const char * sql_file_path);
};

#endif // SQLMANAGE_H
