/*
 * This file was generated by qdbusxml2cpp version 0.8
 * Command line was: qdbusxml2cpp -m -a statusnotifierwatcheradaptor -i src/systemtray/statusnotifierwatcher.h -l StatusNotifierWatcher /home/tokyo/Desktop/wayTo minions Os/minions/minions.statusbar/src/systemtray/org.kde.StatusNotifierWatcher.xml
 *
 * qdbusxml2cpp is Copyright (C) 2020 The Qt Company Ltd.
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "statusnotifierwatcheradaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class StatusNotifierWatcherAdaptor
 */

StatusNotifierWatcherAdaptor::StatusNotifierWatcherAdaptor(StatusNotifierWatcher *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

StatusNotifierWatcherAdaptor::~StatusNotifierWatcherAdaptor()
{
    // destructor
}

bool StatusNotifierWatcherAdaptor::isStatusNotifierHostRegistered() const
{
    // get the value of property IsStatusNotifierHostRegistered
    return qvariant_cast< bool >(parent()->property("IsStatusNotifierHostRegistered"));
}

int StatusNotifierWatcherAdaptor::protocolVersion() const
{
    // get the value of property ProtocolVersion
    return qvariant_cast< int >(parent()->property("ProtocolVersion"));
}

QStringList StatusNotifierWatcherAdaptor::registeredStatusNotifierItems() const
{
    // get the value of property RegisteredStatusNotifierItems
    return qvariant_cast< QStringList >(parent()->property("RegisteredStatusNotifierItems"));
}

void StatusNotifierWatcherAdaptor::RegisterStatusNotifierHost(const QString &service)
{
    // handle method call org.kde.StatusNotifierWatcher.RegisterStatusNotifierHost
    parent()->RegisterStatusNotifierHost(service);
}

void StatusNotifierWatcherAdaptor::RegisterStatusNotifierItem(const QString &service)
{
    // handle method call org.kde.StatusNotifierWatcher.RegisterStatusNotifierItem
    parent()->RegisterStatusNotifierItem(service);
}


#include "statusnotifierwatcheradaptor.moc"