import QtQuick 2.12
import QtQuick.Controls 1.2
import QtQuick.Layouts 1.3
import QtQuick.Controls.Styles 1.4
import assets 1.0

Rectangle {
    id: window;
    property alias stateValue: window.state;
    property bool landscapeWindow: width > height;
    property real baseWidth: landscapeWindow ? width : height;
    property real baseHeight: landscapeWindow ? height : width;
    property real rotationDelta: landscapeWindow ? Style.myKeyboardRotationHorizontal
                                                 : Style.myKeyboardRotationVertical;

    rotation: rotationDelta;

    color: Style.myKeyboardColourBackground;

    Column {
        id: box;
        spacing: Style.myKeyboardBoxSpacings;

        anchors {
            fill: parent;
            margins: Style.myKeyboardBoxAnchorsMargins;
        }
        MyDisplayInput {
            id: displayInput;
            width: window.width - 2 * box.spacing;
            height: window.height / 10 - box.spacing;
        }
        NumberPad {
            width: window.width - box.spacing;
            height: 7 * window.height / 10 - 2 * box.spacing;
        }
        MyDisplayOutput {
            id: displayOutput;
            width: window.width - 2 * box.spacing;
            height: 2 * window.height / 10 - box.spacing;
        }
    }
    states: [
        State {
            name: Style.myKeyboardStateHorizontal;
            PropertyChanges {
                target: window;
                rotation: 90 + rotationDelta;
                width: baseHeight;
                height: baseWidth;
            }
        }
    ]
    // Pequeña animación para cuando cambia de estado
    transitions: Transition {
        SequentialAnimation {
            RotationAnimation {
                direction: RotationAnimation.Shortest;
                duration: Style.myKeyboardAnimationDuration;
                easing.type: Easing.InOutQuint
            }
            NumberAnimation {
                properties: "x,y,width,height";
                duration: Style.myKeyboardAnimationDuration;
                easing.type: Easing.InOutQuint
            }
        }
    }
}
