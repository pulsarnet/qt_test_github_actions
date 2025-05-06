
#include <QObject>
#include <Widget.h>
#include <QTest>

class Test : public QObject {
    Q_OBJECT

private slots:

    void initTestCase()
    {
        qDebug("Called before everything else.");
    }

    void myFirstTest() {
        Widget w;
        w.test_method();
        QVERIFY(1 == 1);
    }
};

QTEST_MAIN(Test);

#include <widget_test.moc>