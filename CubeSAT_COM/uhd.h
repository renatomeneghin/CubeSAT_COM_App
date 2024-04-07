#ifndef UHD_H
#define UHD_H

#include <QQuickItem>
#include <uhd/types/tune_request.hpp>
#include <uhd/utils/thread_priority.hpp>
#include <uhd/utils/safe_main.hpp>
#include <uhd/usrp/multi_usrp.hpp>
#include <uhd/exception.hpp>


class UHD : public QQuickItem
{
    QML_ELEMENT
public:
    UHD();

signals:
};

#endif // UHD_H
