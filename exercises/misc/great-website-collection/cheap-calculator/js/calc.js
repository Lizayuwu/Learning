buttons = [
    "C", "()", "%", "÷",
    "7", "8", "9", "x",
    "4", "5", "6", "-",
    "1", "2", "3", "+",
    "+/-", "0", ".", "="
];
calc = document.querySelector(".calc");

! function generate() {
    for( let i = 0; i < buttons.length;i++) {
        let element = document.createElement("div");
        element.className = "calc-button " + i;
        element.innerText = buttons[i];
        calc.appendChild(element);
    }
}();