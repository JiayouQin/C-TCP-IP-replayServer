#include "CompileHeader.h"

auto& params = Params::get();

int main(int argc, char *argv[])
{
    
    QApplication a(argc, argv);
    ServerWithGUI& w = ServerWithGUI::get();
    ServerClass::get().connectCallback = ServerWithGUI::get().serverConnected;


    w.show();
    return a.exec();
}
