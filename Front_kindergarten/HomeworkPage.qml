import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

ApplicationWindow {
    width: Screen.width
    height: Screen.height
    visible: true
    color: "#673AB7"
    signal backselect

    Connections {
        target: MyHandler
        onCorrectdohomework: {
            rectangle.visible = true
            image1.opacity = 1
            element4.opacity = 1
            element5.opacity = 0
        }
        onWrongdohomework: {
            rectangle.visible = true
            image1.opacity = 0
            element4.opacity = 0
            element5.opacity = 1
        }
    }
    Rectangle {
        x: 165
        y: 78
        width: (Screen.width * 4) / 5
        height: (Screen.height * 4) / 5
        color: "#fff"
        radius: 15
        Text {
            id: element
            x: 243
            y: 402
            text: MyHandler.getnum1()
            font.pixelSize: 50
            color: "#311B92"

            Text {
                id: element1
                x: 94
                y: 0
                text: qsTr("+")
                font.pixelSize: 55
                color: "#311B92"
            }

            Text {
                id: element2
                x: 204
                y: 0
                text: MyHandler.getnum2()
                font.pixelSize: 50
                color: "#311B92"
            }

            Text {
                id: element3
                x: 291
                y: 0
                text: qsTr("=")
                font.pixelSize: 55
                color: "#311B92"
            }

            TextField {
                id: textField
                x: 380
                y: 13
                placeholderText: qsTr("Answer")
            }
        }

        Button {
            x: 21
            y: 785
            width: 105
            height: 47
            id: button
            text: qsTr("Back")
            font.pixelSize: 20
            palette {
                buttonText: "white"
            }
            background: Rectangle {

                radius: 15
                color: "#673AB7"
            }
        }
        Connections {
            target: button
            onClicked: backselect()
        }

        Image {
            id: image
            x: 894
            y: 410
            width: 780
            height: 454
            fillMode: Image.PreserveAspectFit
            source: "../assets/homework.png"
        }

        Rectangle {
            id: rectangle
            x: 1033
            y: 39
            width: 376
            height: 161
            color: "#673AB7"
            radius: 10
            visible: false

            Text {
                id: element4
                x: 21
                y: 58
                text: qsTr("Your answer was correct!")
                color: "#fff"
                font.pixelSize: 25
                opacity: 0
            }
            Image {
                id: image1
                x: 209
                y: -25
                width: 301
                height: 296
                fillMode: Image.PreserveAspectFit
                source: "../assets/happy1.png"
                opacity: 0
            }

            Text {
                id: element5
                x: 29
                y: 66
                text: qsTr("Your answer was incorrect!")
                color: "#fff"
                font.pixelSize: 25
                opacity: 0
            }
        }
    }

    Image {
        id: image2
        x: 228
        y: 389
        width: 877
        height: 562
        fillMode: Image.PreserveAspectFit
        source: "../assets/plus.png"

        Image {
            id: image3
            x: -249
            y: -93
            width: 712
            height: 619
            fillMode: Image.PreserveAspectFit
            source: "../assets/miness.png"
        }

        Button {
            id: button1
            x: 792
            y: 103
            width: 150
            height: 44
            text: qsTr("submit")
            font.pixelSize: 20
            palette {
                buttonText: "white"
            }
            background: Rectangle {

                radius: 15
                color: "#673AB7"
            }
        }
        Connections {
            target: button1
            onClicked: MyHandler.doHomework(textField.text)
        }
    }
}
