function doOp(op) {
    if (op.toString().length === 1 && (op >= "0" && op <= "9")) {
        if((displayInput.text.toString() === "0" && op === "0") || (displayInput.text.toString().length >= 9)) {
            return;
        }
        if(displayInput.text.toString() === "0" && (op > "0" && op <= "9")) {
            displayInput.text = op;
        } else if(displayInput.text.toString() !== "0") {
            displayInput.text += op;
        }
    } else if (op === "\u2190") {
        displayInput.text = displayInput.text.toString().slice(0, -1)
        if (displayInput.text.length === 0) {
            displayInput.text = "0"
        }
    } else if (op === "Borrar") {
        displayInput.text = "0"
    } else if (op === "Nueva") {
        displayInput.text ="0"
        appModel.begin = true;
        displayOutput.result = "";
        mcdButton.enabledButton = true;
        mcmButton.enabledButton = true;
        labelTitle.text = titleOriginal;
    } else if (op === "MCD") {
        if(displayInput.text.toString() !== "0") {
            appModel.value = Number(displayInput.text);
            displayOutput.result = appModel.mcd;
            displayInput.text ="0";
            mcmButton.enabledButton = false;
            labelTitle.text = qsTr("M\u00E1ximo Com\u00FAn Divisor");
        }
    } else if (op === "MCM") {
        if(displayInput.text.toString() !== "0") {
            appModel.value = Number(displayInput.text);
            displayOutput.result = appModel.mcm;
            displayInput.text ="0"
            mcdButton.enabledButton = false;
            labelTitle.text = qsTr("M\u00EDnimo Com\u00FAn M\u00FAltiplo");
        }
    }
}
