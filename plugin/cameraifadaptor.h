/*
 * Copyright 2011 Intel Corporation.
 *
 * This program is licensed under the terms and conditions of the
 * Apache License, version 2.0.  The full text of the Apache License is at 	
 * http://www.apache.org/licenses/LICENSE-2.0
 */

/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c CameraIfAdaptor -a cameraifadaptor.h:cameraifadaptor.cpp com.meego.app.camera.xml
 *
 * qdbusxml2cpp is Copyright (C) 2010 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef CAMERAIFADAPTOR_H_1297288255
#define CAMERAIFADAPTOR_H_1297288255

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface com.meego.app.camera
 */
class CameraIfAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.meego.app.camera")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.meego.app.camera\">\n"
"    <signal name=\"Captured\">\n"
"      <arg direction=\"out\" type=\"s\" name=\"filename\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    CameraIfAdaptor(QObject *parent);
    virtual ~CameraIfAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
Q_SIGNALS: // SIGNALS
    void Captured(const QString &filename);
};

#endif
