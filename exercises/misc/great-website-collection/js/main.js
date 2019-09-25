!function generateBase() {
    buttons = document.querySelectorAll(".link");
    buttons.forEach(element => {
        element.addEventListener('click', event => {
            event.preventDefault();
            content = document.querySelector(".content");
            content.innerHTML = `<iframe class="content-frame" src="${element.dataset.link}"></iframe>`
        });
    });
}();