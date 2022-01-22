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

            //            onUserteacher:
            //            onUsermanager: myloader.sourceComponent = comp3
            onUserchild: myloader.sourceComponent = comp2
        }
    }
    Component {
        id: comp2
        SelectPage {
            onGame: myloader.sourceComponent = comp1
            onBacklogin: myloader.sourceComponent = comp1
            //            onHomework: console.log("home work")
        }
    }
}
