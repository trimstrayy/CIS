#include "searchbar.h"
#include <QIcon>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLineEdit>
#include <QPushButton>
#include <QLabel>
#include <QWidget>

SearchBar::SearchBar(QWidget *parent) : QWidget(parent)
{
    //-----------------------------------------------------------------------------------------
    searchLineEdit = new QLineEdit(this);
    searchLineEdit->setPlaceholderText("Search...");


    searchLineEdit->setFixedWidth(200);     //SEARCH BAR WIDTH

    //----------------------------------------------------------------------------------------

    searchButton = new QPushButton(this);
    searchButton->setIcon(QIcon("home/sryn/downloads/bg1.jpg"));          //-----SEARCH BUTTON--------
    searchButton->setFlat(true);
    searchButton->setStyleSheet("background-color: transparent; border: none;");


    mainLayout = new QVBoxLayout(this);


    //---------------------------------------------------------------------------------
    /* QHBoxLayout *navbarLayout = new QHBoxLayout;

    menuButton = new QPushButton(this);
    menuButton->setIcon(QIcon("/home/sryn/downloads/"));  // MENU BUTTON
    menuButton->setFlat(true);                                                       //ICON
    menuButton->setStyleSheet("background-color: transparent; border: none;");

*/
    setupNavbar();


    setLayout(mainLayout);
}

void SearchBar::setupNavbar()
{
    //---------------------------------------------------------------------------------
    QHBoxLayout *navbarLayout = new QHBoxLayout;


    menuButton = new QPushButton(this);
    menuButton->setIcon(QIcon(":/icons/menu.png"));                     //----MENU BUTTON----
    menuButton->setFlat(true);
    menuButton->setStyleSheet("background-color: transparent; border: none;");

    //-----------------------------------------------------------------------------------

    titleLabel = new QLabel("Forecast", this);       //----TITLE BANAKO----
    titleLabel->setAlignment(Qt::AlignCenter);


    QFont titleFont("Baskerville", 14, QFont::Bold);   //----FONT----
    titleLabel->setFont(titleFont);
    titleLabel->setStyleSheet("color: white;");
    //----------------------------------------------------------------------------------

    navbarLayout->addWidget(menuButton);
    navbarLayout->addWidget(titleLabel);

    navbarLayout->addStretch();


    navbarLayout->addWidget(searchLineEdit);


    navbarLayout->addWidget(searchButton);               //-----SEARCH BAR BUTTON-----

    //--------------------------------------------------------------------------------------

    QWidget *navbarWidget = new QWidget(this);
    navbarWidget->setLayout(navbarLayout);              //-----NAVBAR WIDGET-----

    //-------BG GRADIENT---------
    navbarWidget->setStyleSheet("background: qlineargradient(spread:pad, x1:0, y1:0, x2:1, y2:1, stop:0 rgba(0, 0, 0, 0), stop:1 rgba(15, 42, 67, 255));");


    mainLayout->addWidget(navbarWidget);
}
