#include <QCoreApplication>
#include <QDebug>
#include "jid.h"

int main(int argc, char *argv[])
{
	QCoreApplication a(argc, argv);

	Jid jid2("test@xmpp.org");

	Jid jid1("");

	qDebug() << jid1.full();
	qDebug() << jid2.full();


	return a.exec();
}
