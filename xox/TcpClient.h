#ifndef TCPCLIENT_H
#define TCPCLIENT_H

#include <QObject>
#include <QTcpSocket>
#include <QTimer>
#include "data.h"
#include "BoardModel.h"
#include "Message.h"

class TcpClient : public QObject
{
    Q_OBJECT
public:
    TcpClient();

    bool isConnected();
    void connectToServer();
    void disconnectFromServer();
    void sendMessage(Message msg);

signals:
    void report(QString);
    void receivedData(QByteArray data);
    void connected();
    void disconnected();
    void error(QAbstractSocket::SocketError);

private slots:
    void onSocketConnected();
    void onSocketDisconnected();
    void onReadyRead();
    void onSocketError(QAbstractSocket::SocketError err);
    void onFlushTimerTick();

private:
    QTcpSocket socket;
    QTimer flush_timer;

};

#endif // MYTCPCLIENT_H
