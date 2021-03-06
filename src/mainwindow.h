#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql/QSql>
#include <QtSql/QSqlDatabase>
#include <QtSql/QSqlTableModel>
#include <main_menu.h>
#include <QDesktopWidget>
#include <QMessageBox>
#include <QApplication>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_login_button_clicked();

private:
    Ui::MainWindow *ui;
    QString login;
    QString password;
    main_menu* mainMenu;
    QSqlDatabase db;
};
#endif // MAINWINDOW_H
