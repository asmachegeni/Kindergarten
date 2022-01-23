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

            onUserteacher: myloader.sourceComponent = comp3
            //            onUsermanager: myloader.sourceComponent = comp3
            onUserchild: myloader.sourceComponent = comp2
        }
    }
    Component {
        id: comp2
        SelectPage {
            onGame: myloader.sourceComponent = comp1
            onHomework: myloader.sourceComponent = comp4
            onBacklogin: myloader.sourceComponent = comp1
        }
    }
    Component {
        id: comp3
        Teacher {
            onBackhome: myloader.sourceComponent = comp1
        }
    }
    Component {
        id: comp4
        HomeworkPage {
            onBackselect: myloader.sourceComponent = comp1
        }
    }
}
