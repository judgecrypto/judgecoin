#ifndef DONATEPAGE_H
#define DONATEPAGE_H

#include "clientmodel.h"
#include "main.h"
#include "wallet.h"
#include "base58.h"

#include <QWidget>

#include <QDir>
#include <QFile>
#include <QProcess>
#include <QTime>
#include <QTimer>
#include <QStringList>
#include <QMap>
#include <QSettings>
#include <QSlider>

namespace Ui {
class DonatePage;
}
class ClientModel;

class DonatePage : public QWidget
{
    Q_OBJECT

public:
    explicit DonatePage(QWidget *parent = 0);
    ~DonatePage();
    
    void setModel(ClientModel *model);
    
public slots:

private slots:

private:
    Ui::DonatePage *ui;
    ClientModel *model;
    
};

#endif // DONATEPAGE_H
