# Ella

To run Ella:

1. Clone the repo onto your Pi's home folder
2. Upload the `pan_tilt.ino` inside the pan-tilt folder to your Arduino
3. On terminal cd into the mjep folder: `~/Ella/mjpg-streamer-master/mjpg-streamer-experimental` and run the pi cam `./mjpg_streamer -o "output_http.so -w ./www" -i "input_raspicam.so -fps 15" &`
4. Navigate to the Ella folder and run the server: `node server.js /dev/ttyACM0`
5. In your browser go to http://andrea-pi.local:8000/
