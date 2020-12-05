#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <model/mcdmcmmodel.h>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    calMcdMcm::model::McdMcmModel model;

    QQmlApplicationEngine engine;
    engine.addImportPath("qrc:/");
    QQmlContext *context = engine.rootContext();
    context->setContextProperty("appModel", &model);
    engine.load(QUrl(QStringLiteral("qrc:/views/main.qml")));
    if (engine.rootObjects().isEmpty())
        return -1;

    return app.exec();
}
