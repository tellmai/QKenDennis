#include "sqlmanage.h"
#include "ui_sqlmanage.h"

#include <QMessageBox>

#include <QFile>
#include <QTextStream>
#include <QSqlError>
#include <QFileDialog>
#include <QDebug>

#pragma execution_character_set("utf-8")

SqlManage::SqlManage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SqlManage)
{
    ui->setupUi(this);
}

SqlManage::~SqlManage()
{
    delete ui;
}

void SqlManage::on_pb_linkDatabase_clicked()
{
    // 连接数据库
    m_database=QSqlDatabase::addDatabase("QMYSQL","connect1");
    m_database.setHostName("localhost");             // 数据库服务器IP。
    m_database.setUserName("root");                  // 设置数据库用户名
    m_database.setPassword("123456");                  // 设置密码
    // 设置数据库名，使用哪个数据库，数据库要本来就有
    m_database.setDatabaseName("SimulatedTraining");
    //m_database.open();                              // 使用当前设置的连接值（就是上面设置的那些值），打开数据库连接
    if  (m_database.open())
    {
         QMessageBox::information(this,"提示","连接数据库成功！",QMessageBox::Ok);
    }
    else
    {
         QMessageBox::information(this,"提示","连接数据库失败！",QMessageBox::Ok);
         return;
    }


}


//特别注意  ： 要把数据库的bin目录（D:\Program Files\MySQL\MySQL Server 8.0\bin）添加到系统的path环境变量中，不然总是链接失败（20221017一上午的经验）。
void SqlManage::on_pb_createDatabase_clicked()
{
    QString creteSql = "";
    QString databaseName = "";
     databaseName = ui->le_databaseName->text();
     if (databaseName =="")
     {
         QMessageBox::information(this,"提示","请输入想创建的数据库名称！",QMessageBox::Ok);
         return;
     }

    // 连接数据库
    m_database=QSqlDatabase::addDatabase("QMYSQL","Database");
    m_database.setHostName("localhost");     // 数据库服务器IP。设置数据库主机名，数据库支持远程连接，这里是本地数据库 // 127.0.01
    m_database.setUserName("root");          // 设置数据库用户名
    m_database.setPassword("123456");          // 设置密码
    //m_database.open();                      // 使用当前设置的连接值（就是上面设置的那些值），打开数据库连接
    if  (m_database.open() == false)
    {
        QMessageBox::information(this,"提示","连接数据库失败！","确定");
        return;
    }
    QSqlError sql_error = m_database.lastError();
    qDebug() << sql_error;
     //QString cmd = "select * from information_schema.SCHEMATA where SCHEMA_NAME = 'simulatedtraining'";
    QString cmd = "show databases;";
    QSqlQuery query(cmd,m_database);
    while (query.next()) {
        if ( query.value(0).toString() == databaseName)
        {
              QMessageBox::information(this,"提示","gai数据库已存在！",QMessageBox::Ok);

              return;
        }
        qDebug() << "database name:" << query.value(0).toString();
    }


    // 创建数据库。
    creteSql = QString("create database if not exists %1").arg(databaseName);
    m_database.exec(creteSql);

    // 连接上刚刚创建好的数据库
    m_database.setDatabaseName(databaseName);
    // 必须重新调用一遍.open()，这里不加这一句，后面就会报错"QSqlQuery::exec: database not open"
   if  (m_database.open())
   {
        QMessageBox::information(this,"提示","创建并打开数据库成功！",QMessageBox::Ok);
   }
   else
   {
        QMessageBox::information(this,"提示","创建并打开数据库失败！",QMessageBox::Ok);
        return;
   }

    // =====然后再在这个数据库里创建表格之类的，下面任意发挥==========================
//    query1 = QSqlQuery(m_database);
//    // 创建表前先查询表是否已存在，若存在则先删除再创建，若不存在则创建。
//    query1.exec("drop table if exists table_component_name");
//    query1.exec("create table if not exists table_component_name(all_component_name varchar(30) primary key,component_type varchar(50))");


}

//选择文件
void SqlManage::on_pb_executeDataBase_clicked()
 {
     QString readFile;
     readFile = QFileDialog::getOpenFileName(nullptr, "选择Excel文件", "", tr("Exel file(*.sql)"));
     if (readFile == "")
     {
         return;
     }
    excute_sql_file1(readFile.toStdString().c_str());

 }


 int SqlManage::excute_sql_file1(const char * sql_file_path)
 {
     int iRet = 0;
     QFile qfile(sql_file_path);
     if (!qfile.exists()) {
         return -1;
     }
     if (!qfile.open(QIODevice::ReadOnly | QIODevice::Text)) {
         return -1;
     }
     QTextStream in(&qfile);
     in.setCodec("UTF-8");
     QString qstr_file_data = in.readAll();
     QSqlQuery qsql(m_database);
     QStringList qstrlist_sql =  qstr_file_data.split(";");
     for (int i = 0; i < qstrlist_sql.size() - 1; i++) {
         QString qstr_sql_part = qstrlist_sql.at(i).toUtf8();
         bool sql_result = qsql.exec(qstr_sql_part);
         if (!sql_result) {
             QSqlError sql_error = qsql.lastError();
             //std::cout << sql_error.text().toStdString() << std::endl;
             //std::cout << sql_error.number() << std::endl;
             qDebug()<<sql_error;
             QMessageBox::information(this,"提示","sql文件运行出错！",QMessageBox::Ok);
             iRet = -1;
             break;
         }
     }

     QMessageBox::information(this,"提示","sql文件运行完毕！",QMessageBox::Ok);
     return iRet;
 }



 /// <summary>
 /// 获取数据库信息
 /// </summary>
void SqlManage::on_pb_readDataBase_clicked()
{

}


/// <summary>
///添加数据
/// </summary>
void SqlManage::on_pb_addData_clicked()
{

}


/// <summary>
///删除数据
/// </summary>
void SqlManage::on_pb_delData_clicked()
{

}


/// <summary>
///编辑数据
/// </summary>
void SqlManage::on_pb_editData_clicked()
{

}


/// <summary>
///提交数据到数据库
/// </summary>
void SqlManage::on_pb_submitData_clicked()
{

}


/// <summary>
///取消相关数据的操作
/// </summary>
void SqlManage::on_pb_cancelData_clicked()
{

}
