var numButtons = [];
var miniAnswerBoxes = []
var boxes;
var i = 0;
var j = 0;
var totalNumAnswerBox0 = '';
var totalNumAnswerBox1 = '';
var numberChangeEvent = new Event("numberChange");
boxes = document.querySelectorAll(".number-box");


! function generateBinaryButtons() {
    boxes.forEach(element => {
        element.className += ' ' + j;
        for(let j = 0; j < 16; j++) {
            numButtons.push(document.createElement("button"));
            numButtons[j+i].dataset.number = j;
            numButtons[j+i].innerText = 0;
            element.appendChild(numButtons[j+i]);
        }
        i = 16;
        j = 1;
        miniAnswerBox = document.createElement("div")
        miniAnswerBoxes.push(miniAnswerBox);
    })
    miniAnswerBoxes.forEach(element => {
        element.className = "mini-answer-box";
        element.addEventListener("numberChange", event => {
            element.innerText = 5;
            console.log("here:", event.target)
        })
    })
    boxes.forEach((element, index) => {
        element.appendChild(miniAnswerBoxes[index])
    })
}();

numButtons.forEach(button => {
    button.addEventListener('click', event => {
        event.preventDefault();
        event.target.innerText = event.target.innerText == "1" ? '0' : '1';
        totalNumAnswerBox0 = '';
        totalNumAnswerBox1 = '';
        if (button.parentNode.className.includes('0')) {
            button.parentNode.childNodes.forEach( element => {
                if (element.className == "") {
                    totalNumAnswerBox0 += element.innerText;
                }
            })                                                                                  
            miniAnswerBoxes[0].innerText = totalNumAnswerBox0;
        } else if (button.parentNode.className.includes('1')) {
            button.parentNode.childNodes.forEach( element => {
                if (element.className == "") {
                    totalNumAnswerBox1 += element.innerText;
                }
            })                                                                                  
            miniAnswerBoxes[1].innerText = totalNumAnswerBox1;
        }
    })
})
