#ifndef AUTHWINDOW_HH
#define AUTHWINDOW_HH

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class AuthWindow; }
QT_END_NAMESPACE

class AuthWindow : public QWidget
{
    Q_OBJECT

public:
    AuthWindow(QWidget *parent = nullptr);
    ~AuthWindow();

private slots:
    void on_exitBtn_clicked();

    void on_confirmBtn_clicked();

    void on_infobtn_clicked();

private:
    Ui::AuthWindow *ui;
};
#endif // AUTHWINDOW_HH
