#include <QApplication>
#include "BlackjackWindow.h"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);

    BlackjackWindow window;
    window.show();

    return app.exec();
}