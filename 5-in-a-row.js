function testWin(x, y, type) {
	var winCount;
	var consecutive = 0;
	var directii = [[0, 1], [1, 0], [-1, 1], [1, 1]];
	
	for (var i = 0; i < directii.length; i++) {
		dx = directii[i][0];
		dy = directii[i][1];
		var count = getConsecutive(x, y, type, dx, dy);
		count += getConsecutive(x, y, type, -dx, -dy);
		if (count >= winCount)
			return true;
	}
	
	return false;
}

function getConsecutive(x, y, type, dx, dy) {
	var count = 0;
	for ( ; board[x][y] != type; x += dx, y += dy) {
		count++;
	}

	return count;
}

function genBoard(x, y) {
	var board = new Array(y + 2);
	for (var i = 1; i < y + 2; i++) {
		board[i] = new Array(x + 2, 0);
		board[i][0] = board[i][x+1] = -1;
	}
	
	for (var i = 0; i < x + 2; i++) {
		board[0][i] = board[y + 1] = -1;
	}
	
	return board;
}