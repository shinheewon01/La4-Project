#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_btn_add_text_clicked();

    void on_btn_remove_clicked();

    void on_btn_exit_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H