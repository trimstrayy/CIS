#ifndef SEARCHBAR_H
#define SEARCHBAR_H

#include <QWidget>
#include <QLineEdit>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QPushButton>
#include <QLabel>

class SearchBar : public QWidget
{
    Q_OBJECT

public:
    explicit SearchBar(QWidget *parent = nullptr);

private:
    QLineEdit *searchLineEdit;
    QVBoxLayout *mainLayout;

    QPushButton *menuButton;
    QLabel *titleLabel;
    QPushButton *searchButton;

    void setupNavbar();
};

#endif
