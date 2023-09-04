#ifndef TEAM_MAKER_H
#define TEAM_MAKER_H

#include <QWidget>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QFile>
#include <QString>
#include <QListWidget>
#include <QLabel>


QT_BEGIN_NAMESPACE
namespace Ui { class Team_maker; }
QT_END_NAMESPACE

class Team_maker : public QWidget
{
    Q_OBJECT

public:
    Team_maker(QWidget *parent = nullptr);
    ~Team_maker();

    QWidget main_body;

    //member_variables

    QLabel m_team_lb;
    QLabel m_sumpoint_lb;

    QTextEdit m_teamRed_te;
    QTextEdit m_teamBlue_te;

    QPushButton m_maketeam_pb;
    QPushButton m_savelist_pb;
    QPushButton m_openlist_pb;

    QListWidget m_totalplayer_lw;
    QListWidget m_nowplayer_lw;





    //function
    void initialize();
    void Maketxt();
    void Readtxt();

    void team_make_start();


private:
    Ui::Team_maker *ui;
};
#endif // TEAM_MAKER_H
