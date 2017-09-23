#include <QWidget>

#define WINDOW_WIDTH 600
#define WINDOW_HEIGTH 400

class QLabel;

//text properties
class QTextEdit;
class QSize

//table
class QTableWidget;

class Editor : public QWidget
{
    Q_OBJECT

    public:
    Editor(QWidget *parent = 0);

    private slots:
      //functions
      //
    
    private:
      QLabel *text;
      QTableWidget *table;

};

