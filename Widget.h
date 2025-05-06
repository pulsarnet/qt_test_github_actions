#ifndef WIDGET_H
#define WIDGET_H

#include <iostream>
#include <QWidget>

class Widget : public QWidget {
    Q_OBJECT

public:

    explicit Widget(QWidget* parent = nullptr): QWidget(parent) {};

    void test_method() {
        std::cout << "test_method" << std::endl;
    }
};

#endif //WIDGET_H
