import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

Window {
    id: window
    visible: true
    width: Screen.width
    height: Screen.height
    title: qsTr("Kindergarten")
    color: "#9575CD"
    signal userteacher
    signal userchild
    signal usermanager
    Connections {
        target: MyHandler
        onTeacher: {
            userteacher()
        }
        onManager: {
            usermanager()
        }
        onChild: {
            userchild()
        }
        onUnknown: {
            rectangle2.visible = true
            image2.opacity = 1
        }
    }
    Rectangle {
        id: rectangle
        width: (Screen.width * 4) / 5
        height: (Screen.height * 4) / 5
        anchors.centerIn: parent
        radius: 15
        anchors.verticalCenterOffset: -20
        anchors.horizontalCenterOffset: 6
        color: "#673AB7"
        Rectangle {
            id: rectangle1
            x: 768
            y: 0
            width: (Screen.width * 2) / 5
            height: (Screen.height * 4) / 5
            color: "#ffffff"
            radius: 15

            Image {
                id: image1
                x: -665
                y: 310
                width: 546
                height: 494
                opacity: 1
                source: "qrc/../assets/Teaching2.png"
            }

            Text {
                id: element2
                x: 322
                y: 83
                text: qsTr("Sign In")
                font.pixelSize: 40
                color: "#311B92"
            }
            Button {
                id: button
                x: 257
                y: 542
                width: 284
                height: 66
                text: qsTr("login")
                font.pixelSize: 20
                palette {
                    buttonText: "white"
                }
                background: Rectangle {
                    radius: 10
                    color: "#673AB7"
                }
                Connections {
                    target: button
                    onClicked: {
                        MyHandler.loginUser(textField.text, textField1.text)
                    }
                }
            }

            TextField {
                id: textField
                font.pixelSize: 20
                x: 257
                y: 219
                width: 284
                height: 66

                placeholderText: qsTr("Username")
            }

            TextField {
                id: textField1
                font.pixelSize: 20
                x: 257
                y: 360
                width: 287
                height: 66
                placeholderText: qsTr("Password")
            }
        }

        Text {
            id: element
            x: 88
            y: 81
            text: qsTr("Welcome to")
            font.pixelSize: 55
            color: "#fff"
        }
        Text {
            id: element1
            x: 95
            y: 182
            text: qsTr("Kindergarten  :)")
            font.pixelSize: 60
            color: "#fff"
            font.bold: true
        }
    }

    Rectangle {
        id: rectangle2
        visible: false
        x: 1488
        y: 35
        width: 387
        height: 146
        color: "#4527A0"
        radius: 10

        Text {
            id: element3
            x: 13
            y: 59
            text: qsTr("Username or password is incorrect !")
            font.pixelSize: 23
            color: "#fff"
        }
    }
    MouseArea {
        id: mouseArea
        x: 1824
        y: 35
        width: 51
        height: 48

        Image {
            id: image2
            x: 12
            y: 7
            width: 30
            height: 30
            opacity: 0
            source: "qrc/../assets/close.png"
            z: 6
        }
    }
    Connections {
        target: mouseArea
        onClicked: {
            image2.opacity = 0
            rectangle2.visible = false
        }
    }
}
