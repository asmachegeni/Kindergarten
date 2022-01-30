import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

ApplicationWindow {
    id: window
    width: Screen.width
    height: Screen.height
    visible: true
    color: "#EDE7F6"
    signal backhome

    Connections {
        target: MyHandler
        onCorrecthomework: {
            rectangle.visible = true
            element3.visible = true
            element2.visible = false
            image2.visible = true
        }

        onWronghomewotk: {
            rectangle.visible = true
            element2.visible = true
            element3.visible = false
            image2.visible = true
        }
    }
    Image {
        id: image
        x: 0
        y: 680
        width: Screen.width
        height: 400
        source: "qrc/../assets/wave.png"
    }

    TextField {
        id: textField
        x: 529
        y: 197
        width: 280
        height: 70
        placeholderText: qsTr("Number1")
    }
    TextField {
        id: textField1
        x: 529
        y: 396
        width: 280
        height: 70
        placeholderText: qsTr("Number2")
    }
    Button {
        id: button
        x: 529
        y: 577
        width: 280
        height: 70
        text: qsTr("Create assignment")
        background: Rectangle {
            radius: 10
            color: "#311B92"
        }
        palette {
            buttonText: "white"
        }
    }
    font.pixelSize: 22

    Connections {
        target: button
        onClicked: MyHandler.userteacher(textField.text, textField1.text)
    }

    Text {
        id: element
        x: 529
        y: 161
        text: qsTr("Enter number 1:")
        font.pixelSize: 20
        color: "#311B92"
    }

    Text {
        id: element1
        x: 536
        y: 360
        text: qsTr("Enter number 2:")
        font.pixelSize: 20
        color: "#311B92"
    }

    Image {
        id: image1
        x: 1135
        y: 186
        width: 510
        height: 510
        source: "qrc/../assets/Teaching1.png"
        fillMode: Image.PreserveAspectFit
    }

    Button {
        id: button1
        x: 35
        y: 611
        width: 65
        height: 36
        text: qsTr("Back")
        palette {
            buttonText: "#311B92"
        }
        background: Rectangle {

            radius: 15
            color: "#fff"
        }
    }
    Connections {
        target: button1
        onClicked: backhome()
    }
    Rectangle {
        visible: false
        id: rectangle
        x: 1500
        y: 38
        width: 361
        height: 118
        radius: 10
        color: "#311B92"

        MouseArea {
            id: mouseArea
            x: 319
            y: 8
            width: 34
            height: 40
        }
        Connections {
            target: mouseArea
            onClicked: {
                rectangle.visible = false
                element3.visible = false
                element2.visible = false
                image2.visible = false
            }
        }
        Image {
            visible: false
            id: image2
            x: 326
            y: 0
            width: 27
            height: 48
            source: "../assets/close.png"
            fillMode: Image.PreserveAspectFit
        }

        Text {
            visible: false
            id: element2
            x: 14
            y: 47
            text: qsTr("Numbers must be less than 20!")
            color: "#FFF"
            font.pixelSize: 20
            font.bold: true
        }
        Text {
            visible: false
            id: element3
            x: 5
            y: 47
            text: qsTr("Homework created successfully :))")
            color: "#FFF"
            font.pixelSize: 20
            font.bold: true
        }
    }
}
