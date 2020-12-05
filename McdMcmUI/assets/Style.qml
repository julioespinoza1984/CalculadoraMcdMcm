pragma Singleton
import QtQuick 2.12

QtObject {
    readonly property real widthWindow: 320;
    readonly property real heightWindow: 480;
    readonly property real minWidthWindow: 320;
    readonly property real minHeightWindow: 480;
    readonly property real mainToolBarBorderButton: 4;

    readonly property string titleWindow: qsTr('M\u00E1ximo Com\u00FAn Divisor - M\u00EDnimo Com\u00FAn M\u00FAltiplo');
    readonly property string titleWindowShort: qsTr('MCD - MCM');
    readonly property string aboutTitle: qsTr('Acerca de...');
    readonly property string aboutText: qsTr('Calculadora McdMcm');
    readonly property string about: "Calculadora que permite obtener el M\u00E1ximo Com\u00FAn Divisor y el M\u00EDnimo Com\u00FAn M\u00FAltiplo "
                       + " de varios enteros positivos.\n\nRealizada para Distribuci\u00F3n Gratuita como un aporte de herramientas "
                       + "educativas para nuestros muchachos que son el futuro de Latinoam\u00E9rica."
                       + "\n\nIng. Julio Espinoza\nC.I.V. Nº 271678";

    // Propiedades MyButton
    readonly property color myButtonColourStyleRectangle: 'transparent';
    readonly property color myButtonBorderColourStyleRectangle: '#aaffffff';
    readonly property color myButtonColourTextButton: '#000000';
    readonly property color myButtonColourStyleTextButton: '#FFFFFF';

    readonly property int myButtonRadiusStyleRectangle: 10;
    readonly property int myButtonAnchorMarginsStyleRectangle: 1;
    readonly property int myButtonBorderStyle: 10;

    // Propiedades NumberPad
    readonly property int numberPadRows: 5;
    readonly property int numberPadColumns: 3;
    readonly property int numberPadSpacing: 6;
    readonly property string numberPadColourClearButton: 'green';
    readonly property string numberPadColourNumberButton: 'blue';
    readonly property string numberPadColourOperationButton: 'purple';
    readonly property string numberPadOperationNew: qsTr('Nueva');
    readonly property string numberPadOperationClearAll: qsTr('Borrar');
    readonly property string numberPadOperationClear: '\u2190';
    readonly property string numberPadOperationMcd: qsTr('MCD');
    readonly property string numberPadOperationMcm: qsTr('MCM');
    readonly property string numberPadOperation0: '0';
    readonly property string numberPadOperation1: '1';
    readonly property string numberPadOperation2: '2';
    readonly property string numberPadOperation3: '3';
    readonly property string numberPadOperation4: '4';
    readonly property string numberPadOperation5: '5';
    readonly property string numberPadOperation6: '6';
    readonly property string numberPadOperation7: '7';
    readonly property string numberPadOperation8: '8';
    readonly property string numberPadOperation9: '9';

    // Propiedades MyDisplayInput
    readonly property int myDisplayInputOpacity: 1;
    readonly property int myDisplayInputBorder: 10;
    readonly property int myDisplayInputDisplayTextVerticalCenterOffset: -1;
    readonly property int myDisplayInputDisplayTextRightMargin: 6;
    readonly property string myDisplayInputDisplayText: '0';
    readonly property color myDisplayInputDisplayTextColor: '#343434';
    readonly property bool myDisplayInputDisplayTextBold: true;

    // Propiedades MyDisplayOutput
    readonly property int myDisplayOutputBorder: 10;
    readonly property int myDisplayOutputDisplayTextVerticalCenterOffset: -1;
    readonly property int myDisplayOutputDisplayTextLeftMargin: 6;
    readonly property color myDisplayOutputDisplayTextColor: '#343434';
    readonly property bool myDisplayOutputDisplayTextBold: true;
    
    // Propiedades MyKeyboard
    readonly property color myKeyboardColourBackground: '#282828';
    readonly property int myKeyboardBoxAnchorsMargins: 10;
    readonly property int myKeyboardBoxSpacings: 10;
    readonly property string myKeyboardStateHorizontal: 'landscape';
    readonly property int myKeyboardRotationHorizontal: -90;
    readonly property string myKeyboardStateVertical: 'portrait';
    readonly property int myKeyboardRotationVertical: 0;
    readonly property real myKeyboardAnimationDuration: 300;
}