#ifndef ADDRESSBOOK_H
#define ADDRESSBOOK_H


#include <QWidget>
#include <QtGui>
#include <QMap>

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

    Mode currentMode;

    QMap<QString, QString> contacts;
    QString oldName;
    QString oldAddress;
};


#endif /* ADDRESSBOOK_H */
