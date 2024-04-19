# Mars-TASK2
# Stepper Motor Direction Controller

Objective - The program changes the direction of rotation of a stepper motor based on which ir sensor gets triggered. If neither of the ir sensor gets triggered the stepper motor does not uneccessarily spin.

Procedure - 
1. Stepper driver connections are made and connected to the stepper motor, the colour coding is strictly followed.
2. PUL+ and DIR+ are connected to the 3 and 4 pins respectively.
3. PUL- and DIR- are connected to the GND.
4. The IR connections are then made - Vcc and GND are given to both
5. IR_L's output is connected to 10th pin of arduino
6. IR_R's output is connected to 9th pin of arduino
7. The circuit is coded with the following logic -

If no object is detected on both the irs, the stepper motor is given a low from the arduino. Otherwise if one of the irs detect an object, the dir pin is activated either as HIGH or LOW based on which IR gets triggered. Thus, with the help of dir pin the direction is controlled. Lastly, stepper motor is given high from the arduino so that the motor can rotate.

Note: Both the IR sensors used work on Negative logic

Resources - 
1. stepper - https://www.makerguides.com/tb6600-stepper-motor-driver-arduino-tutorial/#:~:text=Wiring%20%E2%80%93%20Connecting%20TB6600%20to%20stepper%20motor%20and%20Arduino&text=The%20wiring%20diagram%20below%20shows%20you%20which%20connections%20you%20need%20to%20make.&text=In%20this%20tutorial%2C%20we%20will,control%20signal%20connections%20to%20ground.
2. ir - https://circuitdigest.com/microcontroller-projects/interfacing-ir-sensor-module-with-arduino

Thought process/learnings - 

Firstly, I never knew that different sensors worked on different logics. I was very confused in the start because I did not realise that there were sensors which worked in Negative logic.
Secondly, I learnt that connecting wires in real life is slightly messy and hard. A good chunk of my time went in unscrewing the driver screws in order to make the required connections and also I had slight troubles finding enough Vcc and Grounds for all the sensors and the drivers.
Thirdly, I learnt that buck converters might sometimes retain charge even after you switch it off due the the capacito, therefore you should be careful while removing the buck converter to avoid damaging it.

