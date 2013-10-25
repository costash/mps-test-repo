var player = 1;

function cellClick() {
	if (this.hasAttribute('null') === true)
		return;
	this.setAttribute('null', 'false');
	this.setAttribute('player', player);
	player = 1 - player;
	var x = this.getAttribute('row')
	var y = this.getAttribute('column');
	console.log(x | 0, y | 0);
}

function createCell(posX, posY) {
	var x = document.createElement('div');
	x.className = 'cell';
	x.onclick = cellClick;
	x.style.left = posX * 50 + 'px';
	x.style.top = posY * 50 + 'px';
	x.setAttribute('row', posY);
	x.setAttribute('column', posX);
	
	return x;
	console.log(x);
}

function initGame() {
	var game = document.getElementById("game");
	game.style.width = 12 * 50 + 'px';
	game.style.height = 12 * 50 + 'px';
	console.log(game);
	var i, j;
	for (i=0; i<12; i++) {
		for (j=0; j<12; j++) {
			var z = createCell(i, j);
			game.appendChild(z);
			}
	}
}


function win(player) {
	var win = document.getElementById('win');
	win.style.display = 'block';
	win.textContent = 'Player ' + player + 'wins!';
}


initGame();
