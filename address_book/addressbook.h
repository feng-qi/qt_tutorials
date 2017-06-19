#include <QtGui>

class AddressBook : public QWidget
{
    Q_OBJECT

public:
    AddressBook(QWidget *parent = 0);

public slots:
    void addContact();
    void submitContact();
    void cancel();
    void next();
    void previous();

private:
    QLineEdit   *nameLine;
    QTextEdit   *addressText;
    QPushButton *addButton;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QPushButton *nextButton;
    QPushButton *previousButton;

    QMap<QString, QString> contacts;
    QString oldName;
    QString oldAddress;
};
