#include "View/MainView/mainview.h"
#include <QApplication>
#include <QCoreApplication>
#include "Common/Thread/examplethreads.h"

int main(int argc, char *argv[])
{
    //Масштабирование для экранов с высоким разрешением
    static const char ENV_VAR_QT_DEVICE_PIXEL_RATIO[] = "QT_DEVICE_PIXEL_RATIO";
    if (!qEnvironmentVariableIsSet(ENV_VAR_QT_DEVICE_PIXEL_RATIO)
            && !qEnvironmentVariableIsSet("QT_AUTO_SCREEN_SCALE_FACTOR")
            && !qEnvironmentVariableIsSet("QT_SCALE_FACTOR")
            && !qEnvironmentVariableIsSet("QT_SCREEN_SCALE_FACTORS")) {
        QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    }

    QApplication app(argc, argv);



   MainView view;
   new MainPresenter(&view);
   view.show();

   return app.exec();
}
