#include <QApplication>
#include <GUI/Window.hpp>

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    app.setStyle("fusion");
    Window window;
    window.show();

    return app.exec();
}