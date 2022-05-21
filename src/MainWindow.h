//
// Created by PoteznyDominator on 21.05.2022.
//

#ifndef GITHUB_PROFILES_MAINWINDOW_H
#define GITHUB_PROFILES_MAINWINDOW_H

#include <QLineEdit>
#include <QMainWindow>
#include <QPushButton>

class MainWindow : public QMainWindow {
  Q_OBJECT

public:
  MainWindow(QWidget *parent = nullptr);

private:
  QLineEdit *searchBar_;
  QPushButton *searchBtn_;

  void initializeUI();
};


#endif//GITHUB_PROFILES_MAINWINDOW_H
