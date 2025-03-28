#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include<backendhelper.h>
#include<QQmlContext>

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    backendHelper obj;
    engine.rootContext()->setContextProperty("cBackednHeleper",&obj);

    QObject::connect(
        &engine,
        &QQmlApplicationEngine::objectCreationFailed,
        &app,
        []() { QCoreApplication::exit(-1); },
        Qt::QueuedConnection);
    engine.loadFromModule("QML_connection_between_QML_Cpp", "Main");

    return app.exec();
}
