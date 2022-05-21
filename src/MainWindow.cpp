//
// Created by PoteznyDominator on 21.05.2022.
//

#include "MainWindow.h"
#include <QGridLayout>

MainWindow::MainWindow(QWidget *parent) : QMainWindow(parent) { initializeUI(); }

void MainWindow::initializeUI() {
  auto* gridLayout = new QGridLayout();

  searchBar_ = new QLineEdit();
  searchBar_->setPlaceholderText("Enter github profile");
  searchBar_->setMinimumWidth(200);
  searchBtn_ = new QPushButton("Search");

  gridLayout->addWidget(searchBar_, 0, 0, 1, 1);
  gridLayout->addWidget(searchBtn_, 0, 1, 1, 1);

  setCentralWidget(new QWidget);
  centralWidget()->setLayout(gridLayout);
}
