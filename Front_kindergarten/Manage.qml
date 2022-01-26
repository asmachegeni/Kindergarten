import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12
import QtGraphicalEffects 1.0

ApplicationWindow {
    visible: true
    width: Screen.width
    height: Screen.height
    signal exit
    Connections {
        target: MyHandler
        onDeleteSuccessful: {
            element10.text = "User successfully removed"
            image10.opacity = 1
            element10.opacity = 1
            rectangle10.opacity = 1
        }
        onDeleteUnsuccessful: {
            element10.text = "There is no user with this username"
            image10.opacity = 1
            element10.opacity = 1
            rectangle10.opacity = 1
        }
        onAddSuccessful: {
            element10.text = "User successfully added"
            image10.opacity = 1
            element10.opacity = 1
            rectangle10.opacity = 1
        }
        onAddUnsuccessful: {
            element10.text = "The information entered is not valid"
            image10.opacity = 1
            element10.opacity = 1
            rectangle10.opacity = 1
        }
        onEditSuccessful: {
            element10.text = "Changes applied successfully"
            image10.opacity = 1
            element10.opacity = 1
            rectangle10.opacity = 1
        }
        onEditUnsuccessful: {
            element10.text = "username or information entered is incorrect"
            image10.opacity = 1
            element10.opacity = 1
            rectangle10.opacity = 1
        }
    }
    Rectangle {
        id: rectangle
        x: 1595
        y: 0
        width: 325
        height: 1080
        color: "#673AB7"

        Image {
            id: image
            x: 0
            y: 851
            width: 325
            height: 231
            source: "../assets/wave2.png"
            opacity: .3
        }
        Image {
            id: image1
            x: 0
            y: 851
            width: 325
            height: 231
            source: "../assets/wave1.png"
            opacity: .3
        }

        Image {
            id: image2
            x: 0
            y: 0
            width: 325
            height: 149
            opacity: .3
            source: "../assets/wave3.png"
        }
        Image {
            id: image3
            x: 0
            y: -6
            width: 580
            height: 189
            opacity: .3
            source: "../assets/wave4.png"

            MouseArea {
                id: mouseArea1
                x: 103
                y: 169
                width: 127
                height: 62
                onClicked: {
                    element4.visible = true
                    textField.visible = true
                    button1.visible = true
                    image4.visible = true

                    comboBox.visible = false
                    textField6.visible = false
                    textField7.visible = false
                    button3.visible = false
                    element6.visible = false
                    element7.visible = false
                    element8.visible = false
                    image6.visible = false

                    element5.visible = false
                    textField1.visible = false
                    textField2.visible = false
                    textField3.visible = false
                    textField4.visible = false
                    textField5.visible = false
                    button2.visible = false
                    image5.visible = false

                    image10.visible = false
                    element10.visible = false
                    rectangle10.visible = false
                }
            }
        }

        Text {
            id: element
            x: 121
            y: 174
            text: qsTr("Delete")
            font.pixelSize: 28
            color: "#fff"
            font.bold: true
        }

        Text {
            id: element1
            x: 136
            y: 321
            text: qsTr("Add")
            font.pixelSize: 28
            color: "#fff"
            font.bold: true
        }

        Text {
            id: element2
            x: 136
            y: 473
            text: qsTr("Edit")
            font.pixelSize: 28
            color: "#fff"
            font.bold: true
        }

        //        Text {
        //            id: element3
        //            x: 129
        //            y: 645
        //            text: qsTr("Print")
        //            font.pixelSize: 28
        //            color: "#fff"
        //            font.bold: true
        //        }
        Button {
            id: button
            x: 113
            y: 873
            width: 113
            height: 47
            text: qsTr("Exit")
            font.pixelSize: 20
            palette {
                buttonText: "white"
            }
            background: Rectangle {
                radius: 10
                color: "#7E57C2"
            }
            onClicked: exit()
        }

        MouseArea {
            id: mouseArea2
            x: 113
            y: 307
            width: 100
            height: 62
            onClicked: {
                element5.visible = true
                textField1.visible = true
                textField2.visible = true
                textField3.visible = true
                textField4.visible = true
                textField5.visible = true
                button2.visible = true
                image5.visible = true

                comboBox.visible = false
                textField6.visible = false
                textField7.visible = false
                button3.visible = false
                element6.visible = false
                element7.visible = false
                element8.visible = false
                image6.visible = false

                element4.visible = false
                textField.visible = false
                button1.visible = false
                image4.visible = false

                image10.opacity = 0
                element10.opacity = 0
                rectangle10.opacity = 0
            }
        }

        MouseArea {
            id: mouseArea3
            x: 121
            y: 465
            width: 100
            height: 61
            onClicked: {

                comboBox.visible = true
                textField6.visible = true
                textField7.visible = true
                button3.visible = true
                element6.visible = true
                element7.visible = true
                element8.visible = true
                image6.visible = true

                element5.visible = false
                textField1.visible = false
                textField2.visible = false
                textField3.visible = false
                textField4.visible = false
                textField5.visible = false
                button2.visible = false
                image5.visible = false

                element4.visible = false
                textField.visible = false
                button1.visible = false
                image4.visible = false

                image10.opacity = 0
                element10.opacity = 0
                rectangle10.opacity = 0
            }
        }
    }

    Rectangle {
        id: rectangle10
        x: 1036
        y: 46
        width: 504
        height: 165
        color: "#673AB7"
        radius: 10
        opacity: 0

        Text {
            id: element10
            x: 37
            y: 63
            text: qsTr("There is no user with this username")
            font.pixelSize: 25
            color: "#fff"
            visible: false
        }

        Image {
            id: image10
            x: 461
            y: 8
            width: 43
            height: 33
            source: "../assets/close.png"
            fillMode: Image.PreserveAspectFit
            visible: false
        }

        MouseArea {
            id: mouseArea
            x: 465
            y: 8
            width: 35
            height: 43
            onClicked: {
                image10.opacity = 0
                element10.opacity = 0
                rectangle10.opacity = 0
            }
        }
    }
    //----------------------------------------------------------------------------------------------------------------
    //----------------------------------------------------------------------------------------------------------------
    //for delete
    Text {
        id: element4
        x: 889
        y: 313
        text: qsTr("Enter Username :")
        font.pixelSize: 30
        color: "#311B92"
        visible: false
    }

    TextField {
        id: textField
        x: 889
        y: 417
        width: 246
        height: 52
        placeholderText: qsTr("")
        visible: false
    }

    Button {
        id: button1
        x: 889
        y: 557
        width: 246
        height: 56
        visible: false
        font.pixelSize: 25
        text: qsTr("Delete")
        palette {
            buttonText: "white"
        }
        background: Rectangle {
            radius: 10
            color: "#673AB7"
        }
        onClicked: MyHandler.deleteuser(textField.text)
    }

    Image {
        id: image4
        x: 130
        visible: false
        y: 200
        width: 606
        height: 595
        source: "../assets/delete.png"
        fillMode: Image.PreserveAspectFit
    }
    //----------------------------------------------------------------------------------------------------------------
    //----------------------------------------------------------------------------------------------------------------
    //for add
    TextField {
        id: textField1
        x: 429
        y: 207
        width: 230
        height: 50
        visible: false
        placeholderText: qsTr("FirstName")
    }

    TextField {
        id: textField2
        x: 429
        y: 350
        width: 230
        height: 50
        visible: false
        placeholderText: qsTr("LastName")
    }

    TextField {
        id: textField3
        x: 795
        y: 207
        width: 230
        height: 50
        visible: false
        placeholderText: qsTr("UserName")
    }

    TextField {
        id: textField4
        x: 795
        y: 350
        width: 230
        height: 50
        visible: false
        placeholderText: qsTr("Password")
    }

    TextField {
        id: textField5
        x: 429
        y: 491
        width: 230
        height: 50
        visible: false
        placeholderText: qsTr("Age")
    }

    Button {
        id: button2
        x: 795
        y: 491
        width: 230
        height: 50
        visible: false
        text: qsTr("Add")
        palette {
            buttonText: "white"
        }
        background: Rectangle {
            radius: 10
            color: "#673AB7"
        }
        onClicked: MyHandler.adduser(textField1.text, textField2.text,
                                     textField5.text, textField3.text,
                                     textField4.text)
    }

    Text {
        id: element5
        x: 434
        y: 82
        text: qsTr("Enter the requested information")
        font.pixelSize: 25
        visible: false
        color: "#311B92"
    }

    Image {
        id: image5
        x: -24
        y: 580
        width: 548
        height: 469
        visible: false
        source: "../assets/Add.png"
        fillMode: Image.PreserveAspectFit
    }

    //----------------------------------------------------------------------------------------------------------------
    //----------------------------------------------------------------------------------------------------------------
    //for edit
    ComboBox {
        id: comboBox
        x: 649
        y: 144
        visible: false
        textRole: "text"
        valueRole: "value"
        width: 230
        height: 50
        model: [{
                "text": qsTr("UserName")
            }, {
                "text"//                    "value": Qt.ShiftModifier,
                : qsTr("Password")
            }, {
                "text"//                    "value": Qt.ControlModifier,
                : qsTr("FirstName")
            }, {
                "text"//                    "value": Qt.ShiftModifier,
                : qsTr("LastName")
            }, {
                "text"//                    "value": Qt.ShiftModifier,
                : qsTr("Age")
            }]
    }

    TextField {
        id: textField6
        x: 649
        y: 251
        width: 230
        visible: false
        height: 50
        placeholderText: qsTr("New Value")
    }
    TextField {
        id: textField7
        x: 649
        y: 375
        width: 230
        height: 50
        visible: false
        placeholderText: qsTr("UserName")
    }
    Button {
        id: button3
        x: 649
        y: 503
        width: 230
        height: 50
        visible: false
        text: qsTr("Apply")
        palette {
            buttonText: "white"
        }
        background: Rectangle {
            radius: 10
            color: "#673AB7"
        }
        onClicked: MyHandler.edituser(textField7.text, textField6.text,
                                      comboBox.currentIndex)
    }

    Text {
        id: element6
        x: 318
        y: 157
        visible: false
        text: qsTr("What do you want to change?")
        font.pixelSize: 20
        color: "#311B92"
    }

    Text {
        id: element7
        x: 427
        y: 264
        visible: false
        text: qsTr("Enter new value :")
        font.pixelSize: 20
        color: "#311B92"
    }

    Text {
        id: element8
        x: 479
        y: 383
        visible: false
        text: qsTr("UserName :")
        font.pixelSize: 20
        color: "#311B92"
    }

    Image {
        id: image6
        x: 13
        y: 460
        width: 521
        height: 540
        visible: false
        source: "../assets/edit.png"
        fillMode: Image.PreserveAspectFit
    }
}
