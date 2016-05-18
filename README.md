# Ella

To run Ella:

1. Clone the repo onto your Pi's home folder
2. Upload the `pan_tilt.ino` to your Arduino
3. Run your server using node while in the Ella folder: `node server.js /dev/ttyAMA0`
4. In a separate terminal window cd into the mjep folder: `~/ella/mjpg-streamer-master/mjpg-streamer-experimental` and run the pi cam `./mjpg_streamer -o "output_http.so -w ./www" -i "input_raspicam.so"`