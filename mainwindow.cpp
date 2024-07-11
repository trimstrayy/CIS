#include "mainwindow.h"
#include <QVBoxLayout>
#include <QWidget>
#include "searchbar.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), searchBar(new SearchBar(this))
{

    QWidget *centralWidget = new QWidget(this);    //-------------CENTRAL WIDGET---------


    QVBoxLayout *mainLayout = new QVBoxLayout(centralWidget);


    mainLayout->addWidget(searchBar);  //-----ADD SEARCH BAR TO TOP----



    mainLayout->addStretch();                //TO PUSH CONTENT TO TOP


    centralWidget->setLayout(mainLayout);
    setCentralWidget(centralWidget);
}

MainWindow::~MainWindow()
{
}
