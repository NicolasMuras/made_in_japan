#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "windows.h"
#include <iostream>
#include <stdio.h>
#include <QDir>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>
#include <QDirIterator>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    if(!QDir(QDir::currentPath() + "\\modules\\").exists())
    {
        QDir().mkdir(QDir::currentPath() + "\\modules\\");
    }
    QDirIterator it(QDir::currentPath() + "\\modules\\", QDirIterator::Subdirectories);
    int counter = -1;
    while (it.hasNext())
    {
        it.next();

        if(counter == 1)
        {
            QString croped_fileName=it.fileName().section(".",0,0);
            ui->label_chip_1->setText(croped_fileName);
        }
        else if(counter == 2)
        {
            QString croped_fileName=it.fileName().section(".",0,0);
            ui->label_chip_2->setText(croped_fileName);
        }
        else if(counter == 3)
        {
            QString croped_fileName=it.fileName().section(".",0,0);
            ui->label_chip_3->setText(croped_fileName);
        }
        else if(counter == 4)
        {
            QString croped_fileName=it.fileName().section(".",0,0);
            ui->label_chip_4->setText(croped_fileName);
        }
        else if(counter == 5)
        {
            QString croped_fileName=it.fileName().section(".",0,0);
            ui->label_chip_5->setText(croped_fileName);
        }
        else if(counter == 6)
        {
            QString croped_fileName=it.fileName().section(".",0,0);
            ui->label_chip_6->setText(croped_fileName);
        }
        else if(counter == 7)
        {
            QString croped_fileName=it.fileName().section(".",0,0);
            ui->label_chip_7->setText(croped_fileName);
        }
        else if(counter == 8)
        {
            QString croped_fileName=it.fileName().section(".",0,0);
            ui->label_chip_8->setText(croped_fileName);
        }
        else if(counter == 9)
        {
            QString croped_fileName=it.fileName().section(".",0,0);
            ui->label_chip_9->setText(croped_fileName);
        }
        else if(counter == 10)
        {
            QString croped_fileName=it.fileName().section(".",0,0);
            ui->label_chip_10->setText(croped_fileName);
        }
        counter++;
    }

}
void MainWindow::on_button_unregister_clicked()
{
    if(ui->radioButton->isChecked())
    {
        if(!QDir(QDir::currentPath() + "//modules//" + ui->label_chip_1->text() + ".txt").exists())
        {
            QFile file (QDir::currentPath() + "//modules//" + ui->label_chip_1->text() + ".txt");
            file.remove();
        }
        ui->label_chip_1->setText("EMPTY. . . . . . .");
    }
    else if(ui->radioButton_2->isChecked())
    {
        if(!QDir(QDir::currentPath() + "//modules//" + ui->label_chip_2->text() + ".txt").exists())
        {
            QFile file (QDir::currentPath() + "//modules//" + ui->label_chip_2->text() + ".txt");
            file.remove();
        }
        ui->label_chip_2->setText("EMPTY. . . . . . .");
    }
    else if(ui->radioButton_3->isChecked())
    {
        if(!QDir(QDir::currentPath() + "//modules//" + ui->label_chip_3->text() + ".txt").exists())
        {
            QFile file (QDir::currentPath() + "//modules//" + ui->label_chip_3->text() + ".txt");
            file.remove();
        }
        ui->label_chip_3->setText("EMPTY. . . . . . .");
    }
    else if(ui->radioButton_4->isChecked())
    {
        if(!QDir(QDir::currentPath() + "//modules//" + ui->label_chip_4->text() + ".txt").exists())
        {
            QFile file (QDir::currentPath() + "//modules//" + ui->label_chip_4->text() + ".txt");
            file.remove();
        }
        ui->label_chip_4->setText("EMPTY. . . . . . .");
    }
    else if(ui->radioButton_5->isChecked())
    {
        if(!QDir(QDir::currentPath() + "//modules//" + ui->label_chip_5->text() + ".txt").exists())
        {
            QFile file (QDir::currentPath() + "//modules//" + ui->label_chip_5->text() + ".txt");
            file.remove();
        }
        ui->label_chip_5->setText("EMPTY. . . . . . .");
    }
    else if(ui->radioButton_6->isChecked())
    {
        if(!QDir(QDir::currentPath() + "//modules//" + ui->label_chip_6->text() + ".txt").exists())
        {
            QFile file (QDir::currentPath() + "//modules//" + ui->label_chip_6->text() + ".txt");
            file.remove();
        }
        ui->label_chip_6->setText("EMPTY. . . . . . .");
    }
    else if(ui->radioButton_7->isChecked())
    {
        if(!QDir(QDir::currentPath() + "//modules//" + ui->label_chip_7->text() + ".txt").exists())
        {
            QFile file (QDir::currentPath() + "//modules//" + ui->label_chip_7->text() + ".txt");
            file.remove();
        }
        ui->label_chip_7->setText("EMPTY. . . . . . .");
    }
    else if(ui->radioButton_8->isChecked())
    {
        if(!QDir(QDir::currentPath() + "//modules//" + ui->label_chip_8->text() + ".txt").exists())
        {
            QFile file (QDir::currentPath() + "//modules//" + ui->label_chip_8->text() + ".txt");
            file.remove();
        }
        ui->label_chip_8->setText("EMPTY. . . . . . .");
    }
    else if(ui->radioButton_9->isChecked())
    {
        if(!QDir(QDir::currentPath() + "//modules//" + ui->label_chip_9->text() + ".txt").exists())
        {
            QFile file (QDir::currentPath() + "//modules//" + ui->label_chip_9->text() + ".txt");
            file.remove();
        }
        ui->label_chip_9->setText("EMPTY. . . . . . .");
    }
    else if(ui->radioButton_10->isChecked())
    {
        if(!QDir(QDir::currentPath() + "//modules//" + ui->label_chip_10->text() + ".txt").exists())
        {
            QFile file (QDir::currentPath() + "//modules//" + ui->label_chip_10->text() + ".txt");
            file.remove();
        }
        ui->label_chip_10->setText("EMPTY. . . . . . .");
    }
}

void MainWindow::on_button_register_clicked()
{
    QString filename = QDir::currentPath() + "\\modules\\" + ui->text_desc_name->toPlainText() + ".txt";
    QFile file(filename);
    if (file.open(QIODevice::ReadWrite))
    {
        QTextStream stream(&file);
        stream << ui->text_code->toPlainText() << endl;
    }
    file.close();

    filename = QDir::currentPath() + "\\modules\\" + ui->text_desc_name->toPlainText()+ "_desc" + ".txt";
    QFile file2(filename);
    if (file.open(QIODevice::ReadWrite))
    {
        QTextStream stream(&file2);
        stream << ui->text_desc_name->toPlainText() + ";" + ui->text_desc_type->toPlainText() + ";" + ui->text_desc_os->toPlainText() + ";" + ui->text_desc_version->toPlainText() + ";" + ui->text_desc_description->toPlainText()<< endl;
    }
    file2.close();

    if(ui->radioButton->isChecked())
    {
        ui->label_chip_1->setText(ui->text_desc_name->toPlainText());
    }
    else if(ui->radioButton_2->isChecked())
    {
        ui->label_chip_2->setText(ui->text_desc_name->toPlainText());
    }
    else if(ui->radioButton_3->isChecked())
    {
        ui->label_chip_3->setText(ui->text_desc_name->toPlainText());
    }
    else if(ui->radioButton_4->isChecked())
    {
        ui->label_chip_4->setText(ui->text_desc_name->toPlainText());
    }
    else if(ui->radioButton_5->isChecked())
    {
        ui->label_chip_5->setText(ui->text_desc_name->toPlainText());
    }
    else if(ui->radioButton_6->isChecked())
    {
        ui->label_chip_6->setText(ui->text_desc_name->toPlainText());
    }
    else if(ui->radioButton_7->isChecked())
    {
        ui->label_chip_7->setText(ui->text_desc_name->toPlainText());
    }
    else if(ui->radioButton_8->isChecked())
    {
        ui->label_chip_8->setText(ui->text_desc_name->toPlainText());
    }
    else if(ui->radioButton_9->isChecked())
    {
        ui->label_chip_9->setText(ui->text_desc_name->toPlainText());
    }
    else if(ui->radioButton_10->isChecked())
    {
        ui->label_chip_10->setText(ui->text_desc_name->toPlainText());
    }
}

void MainWindow::on_button_LOAD_clicked()
{
    if(ui->radioButton->isChecked())
    {
        QFile file(QDir::currentPath() + "\\modules\\" + ui->label_chip_1->text() +  ".txt");
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(0, "error", file.errorString());
        }

        QTextStream in(&file);
        ui->text_code->setText("");
        while(!in.atEnd())
        {
            QString line = in.readLine();
            ui->text_code->append(line);
        }

        file.close();
    }
    else if(ui->radioButton_2->isChecked())
    {
        QFile file(QDir::currentPath() + "\\modules\\" + ui->label_chip_2->text() +  ".txt");
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(0, "error", file.errorString());
        }

        QTextStream in(&file);
        ui->text_code->setText("");
        while(!in.atEnd())
        {
            QString line = in.readLine();
            ui->text_code->append(line);
        }

        file.close();
    }
    else if(ui->radioButton_3->isChecked())
    {
        QFile file(QDir::currentPath() + "\\modules\\" + ui->label_chip_3->text() +  ".txt");
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(0, "error", file.errorString());
        }

        QTextStream in(&file);
        ui->text_code->setText("");
        while(!in.atEnd())
        {
            QString line = in.readLine();
            ui->text_code->append(line);
        }

        file.close();
    }
    else if(ui->radioButton_4->isChecked())
    {
        QFile file(QDir::currentPath() + "\\modules\\" + ui->label_chip_4->text() +  ".txt");
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(0, "error", file.errorString());
        }

        QTextStream in(&file);
        ui->text_code->setText("");
        while(!in.atEnd())
        {
            QString line = in.readLine();
            ui->text_code->append(line);
        }

        file.close();
    }
    else if(ui->radioButton_5->isChecked())
    {
        QFile file(QDir::currentPath() + "\\modules\\" + ui->label_chip_5->text() +  ".txt");
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(0, "error", file.errorString());
        }

        QTextStream in(&file);
        ui->text_code->setText("");
        while(!in.atEnd())
        {
            QString line = in.readLine();
            ui->text_code->append(line);
        }

        file.close();
    }
    else if(ui->radioButton_6->isChecked())
    {
        QFile file(QDir::currentPath() + "\\modules\\" + ui->label_chip_6->text() +  ".txt");
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(0, "error", file.errorString());
        }

        QTextStream in(&file);
        ui->text_code->setText("");
        while(!in.atEnd())
        {
            QString line = in.readLine();
            ui->text_code->append(line);
        }

        file.close();
    }
    else if(ui->radioButton_7->isChecked())
    {
        QFile file(QDir::currentPath() + "\\modules\\" + ui->label_chip_7->text() +  ".txt");
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(0, "error", file.errorString());
        }

        QTextStream in(&file);
        ui->text_code->setText("");
        while(!in.atEnd())
        {
            QString line = in.readLine();
            ui->text_code->append(line);
        }

        file.close();
    }
    else if(ui->radioButton_8->isChecked())
    {
        QFile file(QDir::currentPath() + "\\modules\\" + ui->label_chip_8->text() +  ".txt");
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(0, "error", file.errorString());
        }

        QTextStream in(&file);
        ui->text_code->setText("");
        while(!in.atEnd())
        {
            QString line = in.readLine();
            ui->text_code->append(line);
        }

        file.close();
    }
    else if(ui->radioButton_9->isChecked())
    {
        QFile file(QDir::currentPath() + "\\modules\\" + ui->label_chip_9->text() +  ".txt");
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(0, "error", file.errorString());
        }

        QTextStream in(&file);
        ui->text_code->setText("");
        while(!in.atEnd())
        {
            QString line = in.readLine();
            ui->text_code->append(line);
        }

        file.close();
    }
    else if(ui->radioButton_10->isChecked())
    {
        QFile file(QDir::currentPath() + "\\modules\\" + ui->label_chip_10->text() +  ".txt");
        if(!file.open(QIODevice::ReadOnly))
        {
            QMessageBox::information(0, "error", file.errorString());
        }

        QTextStream in(&file);
        ui->text_code->setText("");
        while(!in.atEnd())
        {
            QString line = in.readLine();
            ui->text_code->append(line);
        }

        file.close();
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}
