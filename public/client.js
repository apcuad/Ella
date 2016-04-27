var socket = io();

// send out message over socket
function play(id) {
    socket.emit('play', id);
}

$(document).keydown(function(e){
    if (e.keyCode == 83) {
        socket.emit('tiltDown');
        console.log("tilt down");
        return false;
    }
});

$(document).keydown(function(e){
    if (e.keyCode == 87) {
        socket.emit('tiltUp');
        console.log("tilt up");
        return false;
    }
});

$(document).keydown(function(e){
    if (e.keyCode == 65) {
        socket.emit('panLeft');
        console.log("pan left");
        return false;
    }
});

$(document).keydown(function(e){
    if (e.keyCode == 68) {
        socket.emit('panRight');
        console.log("pan right");
        return false;
    }
});