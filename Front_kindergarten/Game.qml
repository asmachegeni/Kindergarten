import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12
import QtGraphicalEffects 1.0

ApplicationWindow {
    visible: true
    width: Screen.width
    height: Screen.height
    property double a: 0
    property double num1: 0
    property double num2: 0
    property double click: 0
    property double test: 0
    property QtObject imag1: name
    property QtObject imag2: name
    property QtObject imagc1: name
    property QtObject imagc2: name
    property QtObject item1: ani
    property QtObject item2: ani
    property QtObject ci1: ani
    property QtObject ci2: ani
    Timer {
        id: timer
        repeat: false
        interval: 1500
        running: true
        onTriggered: MyHandler.game(num1, num2)
    }

    function assign(img, imgc, i, c, text0, flag) {
        if (flag === 0) {
            imag1 = img
            imagc1 = imgc
            item1 = i
            ci1 = c
            num1 = text0.text
        } else if (flag === 1) {
            imag2 = img
            imagc2 = imgc
            item2 = i
            ci2 = c
            num2 = text0.text
        }
    }
    Connections {
        target: MyHandler
        onGameSuccessful: {
            imag1.opacity = 0
            imag2.opacity = 0
            imagc1.opacity = 0
            imagc2.opacity = 0
            imagc2.opacity = 0
        }
        onGameUnsuccessful: {

            imagc1.opacity = 0
            imagc2.opacity = 0
            item1.running = false
            item2.running = false
            ci1.running = true
            ci2.running = true
        }
    }
    signal backpage
    color: "#fff"
    Image {
        id: name
        opacity: 0
        NumberAnimation {
            id: ani
        }
    }
    Image {
        id: img
        x: 508
        y: 58
        z: 5
        width: 165
        height: 205
        source: "../assets/game1.jpg"
        transform: Rotation {
            id: yRot
            origin.x: img.width / 2
            origin.y: img.height / 2
            angle: 0
            axis {
                x: 0
                y: 1
                z: 0
            }
        }

        NumberAnimation {
            id: i
            running: false
            loops: 1
            target: yRot
            property: "angle"
            from: 0
            to: 90
            duration: 700
            onFinished: imgc.opacity = 1
        }
        NumberAnimation {
            id: c
            running: false
            loops: 1
            target: yRot
            property: "angle"
            from: 90
            to: 0
            duration: 700
            onFinished: imgc.opacity = 0
        }
        Text {
            id: text0
            text: qsTr("1")
            opacity: 0
        }
    }
    Image {
        id: imgc
        x: 508
        y: 58
        width: 165
        height: 205
        opacity: 0
        source: "../assets/5.jpg"
    }
    Image {
        id: img1
        x: 508
        y: 321
        z: 5
        width: 165
        height: 205
        source: "../assets/game1.jpg"
        transform: Rotation {
            id: yRot1
            origin.x: img1.width / 2
            origin.y: img1.height / 2
            angle: 0
            axis {
                x: 0
                y: 1
                z: 0
            }
        }

        NumberAnimation {
            id: i1
            running: false
            loops: 1
            target: yRot1
            property: "angle"
            from: 0
            to: 90
            duration: 700
            onFinished: imgc1.opacity = 1
        }
        NumberAnimation {
            id: c1
            running: false
            loops: 1
            target: yRot1
            property: "angle"
            from: 90
            to: 0
            duration: 700
            onFinished: imgc1.opacity = 0
        }
        Text {
            id: text1
            text: qsTr("5")
            opacity: 0
        }
    }
    Image {
        id: imgc1
        x: 508
        y: 321
        width: 165
        height: 205
        opacity: 0
        source: "../assets/6.jpg"
    }

    Image {
        id: img2
        x: 508
        y: 584
        z: 5
        width: 165
        height: 205
        source: "../assets/game1.jpg"
        transform: Rotation {
            id: yRot2
            origin.x: img2.width / 2
            origin.y: img2.height / 2
            angle: 0
            axis {
                x: 0
                y: 1
                z: 0
            }
        }

        NumberAnimation {
            id: i2
            running: false
            loops: 1
            target: yRot2
            property: "angle"
            from: 0
            to: 90
            duration: 700
            onFinished: imgc2.opacity = 1
        }
        NumberAnimation {
            id: c2
            running: false
            loops: 1
            target: yRot2
            property: "angle"
            from: 90
            to: 0
            duration: 700
            onFinished: imgc2.opacity = 0
        }
        Text {
            id: text2
            text: qsTr("9")
            opacity: 0
        }
    }

    Image {
        id: imgc2
        x: 508
        y: 584
        width: 165
        height: 205
        opacity: 0
        source: "../assets/4.jpg"
    }

    Image {
        id: img3
        x: 744
        y: 58
        z: 5
        width: 165
        height: 205
        source: "../assets/game1.jpg"
        transform: Rotation {
            id: yRot3
            origin.x: img3.width / 2
            origin.y: img3.height / 2
            angle: 0
            axis {
                x: 0
                y: 1
                z: 0
            }
        }

        NumberAnimation {
            id: i3
            running: false
            loops: 1
            target: yRot3
            property: "angle"
            from: 0
            to: 90
            duration: 700
            onFinished: imgc3.opacity = 1
        }
        NumberAnimation {
            id: c3
            running: false
            loops: 1
            target: yRot3
            property: "angle"
            from: 90
            to: 0
            duration: 700
            onFinished: imgc3.opacity = 0
        }
        Text {
            id: text3
            text: qsTr("2")
            opacity: 0
        }
    }
    Image {
        id: imgc3
        x: 744
        y: 58
        width: 165
        height: 205
        opacity: 0
        source: "../assets/6.jpg"
    }

    Image {
        id: img4
        x: 986
        y: 58
        z: 5
        width: 165
        height: 205
        source: "../assets/game1.jpg"
        transform: Rotation {
            id: yRot4
            origin.x: img4.width / 2
            origin.y: img4.height / 2
            angle: 0
            axis {
                x: 0
                y: 1
                z: 0
            }
        }

        NumberAnimation {
            id: i4
            running: false
            loops: 1
            target: yRot4
            property: "angle"
            from: 0
            to: 90
            duration: 700
            onFinished: imgc4.opacity = 1
        }
        NumberAnimation {
            id: c4
            running: false
            loops: 1
            target: yRot4
            property: "angle"
            from: 90
            to: 0
            duration: 700
            onFinished: imgc4.opacity = 0
        }
        Text {
            id: text4
            text: qsTr("3")
            opacity: 0
        }
    }
    Image {
        id: imgc4
        x: 986
        y: 58
        width: 165
        height: 205
        opacity: 0
        source: "../assets/4.jpg"
    }
    Image {
        id: img5
        x: 744
        y: 321
        z: 5
        width: 165
        height: 205
        source: "../assets/game1.jpg"
        transform: Rotation {
            id: yRot5
            origin.x: img5.width / 2
            origin.y: img5.height / 2
            angle: 0
            axis {
                x: 0
                y: 1
                z: 0
            }
        }

        NumberAnimation {
            id: i5
            running: false
            loops: 1
            target: yRot5
            property: "angle"
            from: 0
            to: 90
            duration: 700
            onFinished: imgc5.opacity = 1
        }
        NumberAnimation {
            id: c5
            running: false
            loops: 1
            target: yRot5
            property: "angle"
            from: 90
            to: 0
            duration: 700
            onFinished: imgc5.opacity = 0
        }
        Text {
            id: text5
            text: qsTr("6")
            opacity: 0
        }
    }
    Image {
        id: imgc5
        x: 744
        y: 321
        width: 165
        height: 205
        opacity: 0
        source: "../assets/2.jpg"
    }

    Image {
        id: img6
        x: 986
        y: 321
        z: 5
        width: 165
        height: 205
        source: "../assets/game1.jpg"
        transform: Rotation {
            id: yRot6
            origin.x: img6.width / 2
            origin.y: img6.height / 2
            angle: 0
            axis {
                x: 0
                y: 1
                z: 0
            }
        }

        NumberAnimation {
            id: i6
            running: false
            loops: 1
            target: yRot6
            property: "angle"
            from: 0
            to: 90
            duration: 700
            onFinished: imgc6.opacity = 1
        }
        NumberAnimation {
            id: c6
            running: false
            loops: 1
            target: yRot6
            property: "angle"
            from: 90
            to: 0
            duration: 700
            onFinished: imgc6.opacity = 0
        }
        Text {
            id: text6
            text: qsTr("7")
            opacity: 0
        }
    }
    Image {
        id: imgc6
        x: 986
        y: 321
        width: 165
        height: 205
        opacity: 0
        source: "../assets/2.jpg"
    }
    Image {
        id: img7
        x: 744
        y: 584
        z: 5
        width: 165
        height: 205
        source: "../assets/game1.jpg"
        transform: Rotation {
            id: yRot7
            origin.x: img7.width / 2
            origin.y: img7.height / 2
            angle: 0
            axis {
                x: 0
                y: 1
                z: 0
            }
        }

        NumberAnimation {
            id: i7
            running: false
            loops: 1
            target: yRot7
            property: "angle"
            from: 0
            to: 90
            duration: 700
            onFinished: imgc7.opacity = 1
        }
        NumberAnimation {
            id: c7
            running: false
            loops: 1
            target: yRot7
            property: "angle"
            from: 90
            to: 0
            duration: 700
            onFinished: imgc7.opacity = 0
        }
        Text {
            id: text7
            text: qsTr("10")
            opacity: 0
        }
    }
    Image {
        id: imgc7
        x: 744
        y: 584
        width: 165
        height: 205
        opacity: 0
        source: "../assets/3.jpg"
    }
    Image {
        id: img8
        x: 986
        y: 584
        z: 5
        width: 165
        height: 205
        source: "../assets/game1.jpg"
        transform: Rotation {
            id: yRot8
            origin.x: img8.width / 2
            origin.y: img8.height / 2
            angle: 0
            axis {
                x: 0
                y: 1
                z: 0
            }
        }

        NumberAnimation {
            id: i8
            running: false
            loops: 1
            target: yRot8
            property: "angle"
            from: 0
            to: 90
            duration: 700
            onFinished: imgc8.opacity = 1
        }
        NumberAnimation {
            id: c8
            running: false
            loops: 1
            target: yRot8
            property: "angle"
            from: 90
            to: 0
            duration: 700
            onFinished: imgc8.opacity = 0
        }
        Text {
            id: text8
            text: qsTr("11")
            opacity: 0
        }
    }
    Image {
        id: imgc8
        x: 986
        y: 584
        width: 165
        height: 205
        opacity: 0
        source: "../assets/1.jpg"
    }
    Image {
        id: img9
        x: 1234
        y: 58
        z: 5
        width: 165
        height: 205
        source: "../assets/game1.jpg"
        transform: Rotation {
            id: yRot9
            origin.x: img9.width / 2
            origin.y: img9.height / 2
            angle: 0
            axis {
                x: 0
                y: 1
                z: 0
            }
        }

        NumberAnimation {
            id: i9
            running: false
            loops: 1
            target: yRot9
            property: "angle"
            from: 0
            to: 90
            duration: 700
            onFinished: imgc9.opacity = 1
        }
        NumberAnimation {
            id: c9
            running: false
            loops: 1
            target: yRot9
            property: "angle"
            from: 90
            to: 0
            duration: 700
            onFinished: imgc9.opacity = 0
        }
        Text {
            id: text9
            text: qsTr("4")
            opacity: 0
        }
    }
    Image {
        id: imgc9
        x: 1234
        y: 58
        width: 165
        height: 205
        opacity: 0
        source: "../assets/1.jpg"
    }

    Image {
        id: img10
        x: 1242
        y: 321
        z: 5
        width: 165
        height: 205
        source: "../assets/game1.jpg"
        transform: Rotation {
            id: yRot10
            origin.x: img10.width / 2
            origin.y: img10.height / 2
            angle: 0
            axis {
                x: 0
                y: 1
                z: 0
            }
        }

        NumberAnimation {
            id: i10
            running: false
            loops: 1
            target: yRot10
            property: "angle"
            from: 0
            to: 90
            duration: 700
            onFinished: imgc10.opacity = 1
        }
        NumberAnimation {
            id: c10
            running: false
            loops: 1
            target: yRot10
            property: "angle"
            from: 90
            to: 0
            duration: 700
            onFinished: imgc10.opacity = 0
        }
        Text {
            id: text10
            text: qsTr("8")
            opacity: 0
        }
    }
    Image {
        id: imgc10
        x: 1242
        y: 321
        width: 165
        height: 205
        opacity: 0
        source: "../assets/3.jpg"
    }
    Image {
        id: img11
        x: 1234
        y: 584
        z: 5
        width: 165
        height: 205
        source: "../assets/game1.jpg"
        transform: Rotation {
            id: yRot11
            origin.x: img11.width / 2
            origin.y: img11.height / 2
            angle: 0
            axis {
                x: 0
                y: 1
                z: 0
            }
        }

        NumberAnimation {
            id: i11
            running: false
            loops: 1
            target: yRot11
            property: "angle"
            from: 0
            to: 90
            duration: 700
            onFinished: imgc11.opacity = 1
        }
        NumberAnimation {
            id: c11
            running: false
            loops: 1
            target: yRot11
            property: "angle"
            from: 90
            to: 0
            duration: 700
            onFinished: imgc11.opacity = 0
        }
        Text {
            id: text11
            text: qsTr("12")
            opacity: 0
        }
    }

    Image {
        id: imgc11
        x: 1234
        y: 584
        width: 165
        height: 205
        opacity: 0
        source: "../assets/5.jpg"
    }

    MouseArea {
        id: mouseArea
        x: 508
        y: 58
        width: 165
        height: 205
    }
    Connections {
        target: mouseArea
        onClicked: {
            i.running = true
            assign(img, imgc, i, c, text0, click)
            click++
            if (click == 2 && num1 != num2 && num1 && num2) {

                timer.start()
                click = 0
            }
        }
    }

    MouseArea {
        id: mouseArea1
        x: 744
        y: 58
        width: 165
        height: 205
    }
    Connections {
        target: mouseArea1
        onClicked: {
            i3.running = true
            assign(img3, imgc3, i3, c3, text3, click)
            click++
            if (click == 2 && num1 != num2 && num1 && num2) {

                timer.start()
                click = 0
            }
        }
    }
    MouseArea {
        id: mouseArea2
        x: 986
        y: 53
        width: 165
        height: 210
    }
    Connections {
        target: mouseArea2
        onClicked: {
            i4.running = true
            assign(img4, imgc4, i4, c4, text4, click)
            click++
            if (click == 2 && num1 != num2 && num1 && num2) {
                timer.start()
                click = 0
            }
        }
    }
    MouseArea {
        id: mouseArea4
        x: 503
        y: 316
        width: 170
        height: 210
    }
    Connections {
        target: mouseArea4
        onClicked: {
            i1.running = true
            assign(img1, imgc1, i1, c1, text1, click)
            click++
            if (click == 2 && num1 != num2 && num1 && num2) {
                timer.start()
                click = 0
            }
        }
    }
    MouseArea {
        id: mouseArea3
        x: 1234
        y: 58
        width: 165
        height: 205
    }
    Connections {
        target: mouseArea3
        onClicked: {
            i9.running = true
            assign(img9, imgc9, i9, c9, text9, click)
            click++
            if (click == 2 && num1 != num2 && num1 && num2) {
                timer.start()
                click = 0
            }
        }
    }

    MouseArea {
        id: mouseArea5
        x: 744
        y: 321
        width: 165
        height: 205
    }
    Connections {
        target: mouseArea5
        onClicked: {
            i5.running = true
            assign(img5, imgc5, i5, c5, text5, click)
            click++
            if (click == 2 && num1 != num2 && num1 && num2) {
                timer.start()
                click = 0
            }
        }
    }
    MouseArea {
        id: mouseArea6
        x: 986
        y: 321
        width: 165
        height: 205
    }
    Connections {
        target: mouseArea6
        onClicked: {
            i6.running = true
            assign(img6, imgc6, i6, c6, text6, click)
            click++
            if (click == 2 && num1 != num2 && num1 && num2) {
                timer.start()
                click = 0
            }
        }
    }
    MouseArea {
        id: mouseArea7
        x: 1242
        y: 321
        width: 165
        height: 205
    }
    Connections {
        target: mouseArea7

        onClicked: {
            i10.running = true
            assign(img10, imgc10, i10, c10, text10, click)
            click++
            if (click == 2 && num1 != num2 && num1 && num2) {
                timer.start()
                click = 0
            }
        }
    }
    MouseArea {
        id: mouseArea8
        x: 508
        y: 584
        width: 165
        height: 205
    }
    Connections {
        target: mouseArea8
        onClicked: {
            i2.running = true
            assign(img2, imgc2, i2, c2, text2, click)
            click++
            if (click == 2 && num1 != num2 && num1 && num2) {
                timer.start()
                click = 0
            }
        }
    }
    MouseArea {
        id: mouseArea9
        x: 744
        y: 584
        width: 165
        height: 205
    }
    Connections {
        target: mouseArea9
        onClicked: {
            i7.running = true
            assign(img7, imgc7, i7, c7, text7, click)
            click++
            if (click == 2 && num1 != num2 && num1 && num2) {
                timer.start()
                click = 0
            }
        }
    }
    MouseArea {
        id: mouseArea10
        x: 986
        y: 584
        width: 165
        height: 205
    }
    Connections {
        target: mouseArea10
        onClicked: {
            i8.running = true
            assign(img8, imgc8, i8, c8, text8, click)
            click++
            if (click == 2 && num1 != num2 && num1 && num2) {
                timer.start()
                click = 0
            }
        }
    }
    MouseArea {
        id: mouseArea11
        x: 1234
        y: 584
        width: 165
        height: 205
    }
    Connections {
        target: mouseArea11
        onClicked: {
            i11.running = true
            assign(img11, imgc11, i11, c11, text11, click)
            click++
            if (click == 2 && num1 != num2 && num1 && num2) {
                timer.start()
                click = 0
            }
        }
    }

    Button {
        id: button
        x: 106
        y: 874
        width: 118
        height: 47
        text: qsTr("Exit")
        font.pixelSize: 20
        palette {
            buttonText: "white"
        }
        background: Rectangle {

            radius: 15
            color: "#BA68C8"
        }
        onClicked: backpage()
    }
}
