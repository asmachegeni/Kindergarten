import QtQuick 2.12
import QtQuick.Controls 2.12
import QtQuick.Window 2.12

ApplicationWindow {
    Component.onCompleted: myloader.sourceComponent = comp1
    Loader {
        id: myloader

        anchors.fill: parent
    }
    Component {
        id: comp1
        LoginPage {
            //            onUserteacher: myloader.sourceComponent = comp2
            //            onUsermanager: myloader.sourceComponent = comp3
            onUsermanager: console.log("manager")
        }
    }
}
