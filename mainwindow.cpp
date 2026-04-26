#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->AXON_logo->setScaledContents(true);
    ui->AXON_logo->setPixmap(QPixmap(":/images/AXON_HMS_logo.jpg"));
    ui->AXON_logo->lower();

    // AUTH label
    ui->QLabel_auth->raise();
    ui->QLabel_auth->setStyleSheet("color: black; font-size: 40px; font-weight: bold;");

    // SELECT ROLE label
    ui->Qlabel_sel_role->raise();
    ui->Qlabel_sel_role->setStyleSheet("color: black; font-size: 20px;");

    // ComboBox items
    // Set the size of the icons shown inside the combo box items
    ui->comboBox_Roles->setIconSize(QSize(20, 20));


    // Apply styling to the combo box
    ui->comboBox_Roles->setStyleSheet(
        // Set text color and font size for selected item
        "QComboBox { color: black; font-size: 16px; }"

        // Set text color for items inside the dropdown list
        "QComboBox QAbstractItemView { color: black; }"
        );


    // Add role items with icons

    // Admin role with icon
    ui->comboBox_Roles->addItem(QIcon(":/images/admin.png"), "Admin");

    // Doctor role with icon
    ui->comboBox_Roles->addItem(QIcon(":/images/doctor.png"), "Doctor");

    // Receptionist role with icon
    ui->comboBox_Roles->addItem(QIcon(":/images/receptionist.png"), "Receptionist");
    ui->comboBox_Roles->setStyleSheet(
        "QComboBox {"
        "   color: black;"
        "   font-size: 16px;"
        "   qproperty-alignment: AlignCenter;"   // centers displayed text
        "}"
        "QComboBox QAbstractItemView {"
        "   text-align: center;"                 // centers dropdown items
        "}"
        );
    //username password
    ui->label_username->raise();
    ui->label_username->setStyleSheet("color: black; font-size: 20px;");
    ui->label_password->raise();
    ui->label_password->setStyleSheet("color: black; font-size: 20px;");
    ui->lineEdit_username->setStyleSheet(
        "QLineEdit {"
        "   color: black;"
        "   background-color: white;"
        "   font-size: 16px;"
        "   border: 1px solid gray;"
        "}"
        );

    ui->lineEdit_password->setStyleSheet(
        "QLineEdit {"
        "   color: black;"
        "   background-color: white;"
        "   font-size: 16px;"
        "   border: 1px solid gray;"
        "}"
        );

    //login button
    ui->pushButton_login->raise();
    ui->pushButton_login->setStyleSheet(
        "QPushButton{"
        "   color: black;"
        "   background-color:#6473c6;"
        "   font-size: 16px;"
        "}"
        );


}

MainWindow::~MainWindow()
{
    delete ui;
}
