#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H


#include <QWidget>
#include <QtGui>
#include <QMap>
#include "finddialog.h"

class AddressBook : public QWidget
{
    Q_OBJECT

public:
    AddressBook(QWidget *parent = 0);
    enum Mode { NavigationMode, AddingMode, EditingMode };

public slots:
    void addContact();
    void submitContact();
    void cancel();
    void next();
    void previous();
    void editContact();
    void removeContact();
    void findContact();

private:
    void updateInterface(Mode mode);

    QLineEdit   *nameLine;
    QTextEdit   *addressText;
    QPushButton *addButton;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QPushButton *nextButton;
    QPushButton *previousButton;
    QPushButton *editButton;
    QPushButton *removeButton;
    QPushButton *findButton;
    FindDialog  *dialog;

    Mode currentMode;

    QMap<QString, QString> contacts;
    QString oldName;
    QString oldAddress;
};


#endif /* ADDRESSBOOK_H */
