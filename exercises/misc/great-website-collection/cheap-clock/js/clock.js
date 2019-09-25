

! function fastCreate() {
	main = document.querySelector("main")
	time = document.querySelector(".time")
	date = new Date()
	hour = date.getHours()
	minutes = date.getMinutes()
	seconds = date.getSeconds()
	time.innerText = `${hour.toString().length == 1 ? "0" + hour.toString() : hour}:${minutes.toString().length == 1 ? "0" + minutes.toString() : minutes }:${seconds.toString().length == 1 ? "0" + seconds.toString() : seconds}`
	main.style.backgroundColor = getRandomColor('hex')
}();

! function create(){ 
	main = document.querySelector("main")
	time = document.querySelector(".time")
	inter = setInterval( (e) => {
		date = new Date()
		hour = date.getHours()
		minutes = date.getMinutes()
		seconds = date.getSeconds()
		time.innerText = `${hour.toString().length == 1 ? "0" + hour.toString() : hour}:${minutes.toString().length == 1 ? "0" + minutes.toString() : minutes }:${seconds.toString().length == 1 ? "0" + seconds.toString() : seconds}`
		main.style.backgroundColor = getRandomColor('hex')
	}, 1000)
} ();

function getRandomIntInclusive(min, max) {
  min = Math.ceil(min);
  max = Math.floor(max);
  return Math.floor(Math.random() * (max - min + 1)) + min;
}

//@returns string : colour
//hex format = #ffffff
function getRandomColor(type) {
	if(type === "hex") {
		hex1 = getRandomIntInclusive(0, 255).toString(16)
		hex2 = getRandomIntInclusive(0, 255).toString(16)
		hex3 = getRandomIntInclusive(0, 255).toString(16)
		hex1 = hex1.length == 1 ? "0"+hex1 : hex1
		hex2 = hex2.length == 1 ? "0"+hex2 : hex2
		hex3 = hex3.length == 1 ? "0"+hex3 : hex3
		return `#${hex1 + hex2 + hex3}`
	} else {
		return getRandomIntInclusive(0, 255)
	}

}