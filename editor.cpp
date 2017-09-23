#include <QtWidgets>

#include "editor.h"

Editor::Editor(QWidget *parent) : QWidget(parent)
{
  text = new QLabel();
  text->setText("hej hopp");

  table = new QTableWidget(4,2);

  QGridLayout *mainLayout = new QGridLayout(this);
  mainLayout->addWidget(text,0,0);
  mainLayout->addWidget(table,0,1);

  setWindowTitle(tr("Editor windowdsad"));
  resize(WINDOW_WIDTH,WINDOW_HEIGTH);
}
