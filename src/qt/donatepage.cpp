#include "donatepage.h"
#include "ui_donatepage.h"
#include "main.h"
#include "wallet.h"
#include "base58.h"
#include "clientmodel.h"
#include "bitcoinrpc.h"


#include <sstream>
#include <string>

using namespace json_spirit;

DonatePage::DonatePage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::DonatePage)
{
    ui->setupUi(this);
    
    setFixedSize(400, 420);
    
}



void DonatePage::setModel(ClientModel *model)
{
    this->model = model;
}

DonatePage::~DonatePage()
{
    delete ui;
}
