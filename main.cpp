/*
        An aid to training the ear to detect feedback
        Copyright (C) 2019  Neil Stoker

        This program is free software: you can redistribute it and/or modify
        it under the terms of the GNU General Public License as published by
        the Free Software Foundation, either version 3 of the License, or
        (at your option) any later version.

        This program is distributed in the hope that it will be useful,
        but WITHOUT ANY WARRANTY; without even the implied warranty of
        MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
        GNU General Public License for more details.

        You should have received a copy of the GNU General Public License
        along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#include "MainWindow.h"
#include <QApplication>
#include <QCommandLineParser>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setApplicationVersion(VERSION_STRING);
    QCommandLineParser parser;
    parser.addVersionOption();
    parser.process(a);

    MainWindow w;
    w.show();

    return a.exec();
}
