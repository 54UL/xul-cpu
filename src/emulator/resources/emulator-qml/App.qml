import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Layouts 1.12
import Qt.labs.platform 1.1
import QtQuick.Window 2.12

ApplicationWindow 
{
	id: _root
	visible: true
    width: 760
    height: 540

    background: Rectangle{ color: "#333333"}

    ColumnLayout
    {
        anchors.horizontalCenter: parent.horizontalCenter
        spacing: 24

        Text
        {
            color: "white"
            text: qsTr("XUL-LAB")
            font.pointSize: 12
            horizontalAlignment: Text.AlignHCenter
            Layout.fillWidth: true
        }
    }
}
