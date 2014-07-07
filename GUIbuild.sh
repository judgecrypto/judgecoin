#!/bin/sh
# Builds the RELEASE version of Judgecoin-Qt.dmg for OS X
echo "OS X build coming right up!"
export QTDIR=/opt/local/share/qt4
T=$(contrib/qt_translations.py $QTDIR/translations src/qt/locale)
python2.7 contrib/macdeploy/macdeployqtplus  -add-qt-tr $T -dmg -fancy contrib/macdeploy/fancy.plist Judgecoin-Qt.app

