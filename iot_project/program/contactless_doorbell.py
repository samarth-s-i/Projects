#Libraries
import RPi.GPIO as GPIO
import time
 
#GPIO Mode (BOARD / BCM)
GPIO.setmode(GPIO.BCM)

#Set Buzzer 
GPIO.setup(3,GPIO.OUT,initial=0)
 
#set GPIO Pins
GPIO_TRIGGER = 18
GPIO_ECHO = 24
GPIO.setup(23, GPIO.IN) #PIR
#set GPIO direction (IN / OUT)
GPIO.setup(GPIO_TRIGGER, GPIO.OUT)
GPIO.setup(GPIO_ECHO, GPIO.IN)
 
def distance():
    # set Trigger to HIGH
    GPIO.output(GPIO_TRIGGER, True)
 
    # set Trigger after 0.01ms to LOW
    time.sleep(0.00001)
    GPIO.output(GPIO_TRIGGER, False)
 
    StartTime = time.time()
    StopTime = time.time()
 
    # save StartTime
    while GPIO.input(GPIO_ECHO) == 0:
        StartTime = time.time()
 
    # save time of arrival
    while GPIO.input(GPIO_ECHO) == 1:
        StopTime = time.time()
 
    # time difference between start and arrival
    TimeElapsed = StopTime - StartTime
    # multiply with the sonic speed (34300 cm/s)
    # and divide by 2, because there and back
    distance = (TimeElapsed * 34300) / 2
 
    return distance
 
if __name__ == '__main__':
    try:
        while True:
            dist = distance()
            print ("Person is at Distance of = %.1f cm" % dist)
            time.sleep(1)
            while dist<50:
                    if GPIO.input(23):
                        print('Buzzer is off')
                        GPIO.output(3,GPIO.LOW)
                        time.sleep(1)
                    else:
                        print('Buzzer is on ')
                        GPIO.output(3,GPIO.HIGH)
                        time.sleep(1)
 
        # Reset by pressing CTRL + C
    except KeyboardInterrupt:
        print("Stopped by User")
        GPIO.cleanup()
