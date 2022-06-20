#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDateTime>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

QTime time = QTime::currentTime();
QString tstr = "Время: " + QString::number(time.hour()) + ":" + QString::number(time.minute());
setWindowTitle(tstr);

QDate date = QDate::currentDate();
const QString month[] = {"", " января " , " февраля ", " марта ", " апреля ", " мая ", " июня ", " июля ", " августа ", " сентября ", " октября ", " ноября ", " декабря "}; // Месяцы отсчитываются от 1, поэтому первый

QString dstr = QString::number(date.day()) + month[date.month()] +
QString::number(date.year());
setWindowTitle(dstr);

QDateTime dateTime = QDateTime::currentDateTime();
QTime time = dateTime.time();
QDate date = dateTime.date();
