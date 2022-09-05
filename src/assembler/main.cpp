#include <QApplication>
#include <QQmlApplicationEngine>

int main(int argc, char *argv[])
{
    const QUrl url(QStringLiteral("qrc:assembler-qml/App.qml"));
    QApplication app(argc, argv);
    QQmlApplicationEngine engine;
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
    
    // engine.rootContext()->setContextProperty("ctx-app", ctx);
    engine.load(url);
    app.setApplicationName("XUL-LAB");
    return app.exec();
}
