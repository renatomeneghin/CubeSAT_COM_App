#ifndef CONSOLE_H
#define CONSOLE_H

#include <QPlainTextEdit>

class Console : public QPlainTextEdit
{
    Q_OBJECT

public:
    explicit Console(QPlainTextEdit *parent = nullptr);

    void insertText(const QByteArray &);

signals:
    void getData(const QByteArray &);

protected:
    void keyPressEvent(QKeyEvent *e) override;
    void mousePressEvent(QMouseEvent *e) override;
    void mouseDoubleClickEvent(QMouseEvent *e) override;
    void contextMenuEvent(QContextMenuEvent *e) override;
};

#endif // CONSOLE_H
