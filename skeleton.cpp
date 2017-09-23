#include <QMenu>
#include <QMenuBar>
#include <QAction>
#include <QGridLayout>

#include "editor.h"
#include "skeleton.h"

Skeleton::Skeleton(QWidget *parent) : QMainWindow(parent)
{

  QMenu *menu;
  QAction *action;


  action = new QAction("&Quitt",this);
  action->setMenuRole(QAction::NoRole);

  menu = menuBar()->addMenu("&Filee");
  menu->addAction(action);
  
  connect(action, SIGNAL(triggered()),qApp,SLOT(quit()));

  Editor *editor;
  editor = new Editor();
  
  setCentralWidget(editor);
  //mainLayout->addWidget(table,0,1);
  setWindowTitle(tr("Editor windowdsad"));
  resize(WINDOW_WIDTH,WINDOW_HEIGTH);

}
