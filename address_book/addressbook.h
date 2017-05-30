#include <QtGui>

class AddressBook : public QWidget
{
    Q_OBJECT

public:
    AddressBook(QWidget *parent = 0);

private:
    QLineEdit *nameLine;
    QTextEdit *addressText;
};
