import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

ApplicationWindow {
    id: window
    visible: true
    width: Screen.width
    height: Screen.height
    title: qsTr("Kindergarten")
    color: "#673AB7"
    signal game
    signal homework
    signal backlogin
    Rectangle {
        id: rectangle1
        x: 998
        y: 200
        width: 395
        height: 550
        color: "#ffffff"
        radius: 10
        Image {
            id: image1
            x: 70
            y: 50
            source: "qrc/../assets/game.png"
            width: 255
            height: 285
        }
        Text {
            id: element1
            x: 144
            y: 400
            text: qsTr("Game :)")
            font.pixelSize: 25
            color: "#311B92"
        }

        MouseArea {
            id: mouseArea1
            x: 121
            y: 376
            width: 127
            height: 79
        }
        Connections {
            target: mouseArea1
            onClicked: game()
        }
    }

    Rectangle {
        id: rectangle2
        x: 454
        y: 200
        width: 395
        height: 550
        color: "#ffffff"
        radius: 10

        Image {
            id: image2
            x: 70
            y: 50
            source: "qrc/../assets/study.png"
            width: 255
            height: 285
        }

        Text {
            id: element
            x: 87
            y: 400
            text: qsTr("Do Homework -_-")
            font.pixelSize: 25
            color: "#311B92"
        }

        MouseArea {
            id: mouseArea2
            x: 70
            y: 377
            width: 261
            height: 83
        }
        Connections {
            target: mouseArea2
            onClicked: homework()
        }
    }

    Button {
        id: button
        x: 46
        y: 919
        width: 107
        height: 44
        text: qsTr("Back")
        palette {
            buttonText: "white"
        }
        background: Rectangle {

            radius: 15
            color: "#B39DDB"
        }
    }
    Connections {
        target: button
        onClicked: backlogin()
    }

    Rectangle {
        id: rectangle
        x: 72
        y: 184
        width: 200
        height: 200
        color: "#7E57C2"
        radius: 100
        opacity: .3
    }

    Rectangle {
        id: rectangle3
        x: 1583
        y: 171
        width: 250
        height: 250
        color: "#7E57C2"
        radius: 125
        opacity: .3
    }

    Rectangle {
        id: rectangle4
        x: 1593
        y: 365
        width: 100
        height: 100
        color: "#7E57C2"
        radius: 50
        opacity: .3
    }

    Rectangle {
        id: rectangle5
        x: 1578
        y: 740
        width: 200
        height: 200
        color: "#7E57C2"
        opacity: 0.3
        radius: 100
    }

    Rectangle {
        id: rectangle6
        x: 237
        y: 751
        width: 130
        height: 130
        color: "#7E57C2"
        opacity: .5
        radius: 65
    }

    Rectangle {
        id: rectangle7
        x: 133
        y: 763
        width: 200
        height: 200
        color: "#7E57C2"
        opacity: 0.4
        radius: 100
    }
}
