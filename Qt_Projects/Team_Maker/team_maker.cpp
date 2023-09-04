#include "team_maker.h"
#include "ui_team_maker.h"

Team_maker::Team_maker(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Team_maker)
{
    ui->setupUi(this);
}


void Team_maker::initialize()
{
    main_body.setGeometry(100,100,50,50);





}


void Team_maker::Maketxt()
{

}
void Team_maker::Readtxt()
{

}
void Team_maker::team_make_start()
{

}




Team_maker::~Team_maker()
{
    delete ui;
}

