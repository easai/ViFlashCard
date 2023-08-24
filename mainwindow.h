#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QNetworkAccessManager>

#define AUTHOR "easai"
#define APPNAME "ViFlash"
#define WINDOW "Window"
#define GEOMETRY "Geometry"

QT_BEGIN_NAMESPACE
namespace Ui {
class ViFlash;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);
  ~MainWindow();

public slots:
  void dataReadyToRead();
  void dataReadFinished();

private slots:
  void refresh();
  void about();

private:
  Ui::ViFlash *ui;
  QNetworkAccessManager *net_manager;
  QNetworkReply *net_reply;
  QByteArray *m_data_buffer;
  void saveSettings();
  void loadSettings();
};
#endif // MAINWINDOW_H
