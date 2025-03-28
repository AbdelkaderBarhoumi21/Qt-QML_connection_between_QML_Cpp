import QtQuick
import QtQuick.Controls

Window {
    width: 640
    height: 480
    visible: true
    title: qsTr("Hello World")
    // Button {
    //     anchors.centerIn: parent
    //     text: "click me"
    //     onClicked: cBackednHeleper.printText()
    // }
    Text {
        font.pointSize: 15
        anchors.centerIn: parent
        text: cBackednHeleper.getData()
    }
}
