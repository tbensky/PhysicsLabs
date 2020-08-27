# Advanced Physics Labs


This repository conatains "virtualized" advanced physics labs. They were made during the Spring and Fall of 2020, to allow physics majors at [Cal Poly, San Luis Obispo](https://physics.calpoly.edu) to continue their degree progress during the world-wide COVID-19 pandemic. 

There are no data-derived results here, but everything posted allows one to arrive at a results themselves. In other words, one must engage in each lab, "take data" from any videos or images, understand how each works, and do the analysis to arrive at a given result.

It is hoped the "quaratine versions" of the labs will allow the student to have as full of a "lab experience" as possible, minus (unfortunately) pushing the buttons on the equipment. 

## Lab 1: Cratering

Craters made by a projectile (like a small metal ball) in a porous material (like sand) follow a scaling law. Here is a [video](Labs/Cratering/Apparatus/slmo_crater.mov) of a crater being formed. This scaling law also includes large cratering events, like that of the Barringer Crater.  

The scaling is between the ingoing (kinetic) energy of the projectile vs the diameter of the eventual crater.  The scaling law involves a fractional power.  In the case where energies of in the ingoing projectile do not vaporize the sand/crater (i.e. all energy is mechanical), the power is 0.25.  See [this paper](Labs/Cratering/Info/crater_paper.pdf).  


### Equipment Tour

The apparatus used here looks [like this.](Labs/Cratering/Apparatus/app01.jpg)  Operating it is straightforward: the ball is loaded into a spring-loaded clamp. When released, the ball falls into a bucket of sand below.

* Iron ball, mass=65.29 +/- 0.01 g, dia=25.81 +/- 0.01 cm
* Al ball, mass=22.7 +/- 0.01 g, dia=25.64 +/- 0.01 cm

### Data Taking

The Data folder contains pairs of images, like `001_drop.jpg` and `001_crater.jpg`.  Each pair shows the drop height of a small metal ball and an image of the resulting crater, with a ruler placed on top of it.  Ball parameters:

* Record all uncertainties in the drop height and crater diameter.

### Data Analysis

* Plot log of diameter (y-axis) vs log of projectile energy. Slope should be the scaling-law power.
* Include data point of Barringer Crater on the plot (look it up somewhere).


## Lab 2: Speed of Light

The speed of light here is measured using a time-of-flight measurement of a pulse of light then using

<p align="center">
<img src="https://render.githubusercontent.com/render/math?math=c=\frac{d}{t}">
</p>

to find c, the speed of light from the throw distance d and the flight time t.

The pulse is emitted from an LED, bounced off of a retroreflecting mirror, and detected back near the emission point. We use [this apparatus, by Leybold](https://www.leybold-shop.com/vp5-6-2-1.html), which is a remarkably robust apparatus.  Very large throw distances are possible and the optical alignment is straightforward. (In this case, it was done in the author's driveway during quarantine.)


### Equipment Tour

Here are some videos to tour the apparatus.

* [Equipment tour](https://youtu.be/ECmtT5igG9U)
* [A look at the electronic signals](https://youtu.be/v5UShpYjyic)
* [A quick sample of data taking](https://youtu.be/q8Z7qvWdWgA)

### Data Taking

The Data folder contains pairs of images, like `01_oscope.jpg` and `01_retro.jpg`.  Each pair shows the pulses received from the speed of light module and the location (distance) of the retromirror relative to the module.

* Record all uncertainties in times and retromirror distances.

### Data Analysis

Data should be analyzed in two ways:

* A curve fit of travel distance vs t and slope is speed. Get uncertainty in slope from fit routine.

* Since the data allows for repeated individual c (=d/t) computations, the average of these and standard deviation of the mean should also be computed, and compared to the curve fit.


## Magnetic Torque

A cue ball riding on an air bearing is made to oscillate and precess in a magnetic field

### Equipment Tour

* Cue ball mass: 141.60 +/- 0.01 g.
* Cue ball radius: 53.5 +/- 0.2 mm
* Magnetic field: B(I)=(1.36 +/- 0.03) x 10^-3 T/A
* Coils: radius=0.109 m, diameter=0.138 m

### Data Taking

#### Precessional motion
* Data comes in video pairs. 
	* spinXX.mov is a SLOMO (240 fps) shot to determine to ball's spin speed.  
	* precXX.mov is the ball subsequently precessing in the magnetic field (be sure to read current from analog meter).
* Use [Tracker](https://physlets.org/tracker/) to find spin speed the ball. 
	* Open spinXX.mov into Tracker.
	* Be sure to set in "Clip Settings" (little film-strip icon in toolbar) to 240 fps or 1/240=0.004167 s per frame.
	* Determine ball's spin period (Ts):
		1. Load in video
		1. Set Frame dt to 0.004167s (film strip icon).
		1. Pulldown Track->New->Point mass...
		1. Click on to give it focus
		1. Hold down Shift key (mouse icon becomes a cross hair).
		1. Click on white dot on the ball as many times as needed so you can determine it's spin speed (Ts).
	* Determine ball's precessional period (Tp):
		1. You don't need tracker for this.
		1. Just play a precXX.mov video.
			1. Read the current off of the analog meter. Get the B field from the relation above.
			1. Time the precessional period of the ball (Tp).
	* B, Ts and Tp become a data point triplet for the ball.

##### Data Analysis
	* Plot precessional frequency (y) vs B (x). 
	* Slope is <img src="https://render.githubusercontent.com/render/math?math=\mu/L"> where L=angular momentum of the ball, and <img src="https://render.githubusercontent.com/render/math?math=c=\mu"> is its magnetic moment.
	* Find <img src="https://render.githubusercontent.com/render/math?math=c=\mu">


#### Ball as a spherical pendulum
* Watch osc01.mov and osc02.mov. Find period of pendulum's oscillation.
* Note many periods are possible in osc02 as current is changed periodically.
* Read the current off of the analog meter. Get the B field from the relation above.
* Plot <img src="https://render.githubusercontent.com/render/math?math=T^2"> vs. <img src="https://render.githubusercontent.com/render/math?math=1/B">. Slope is <img src="https://render.githubusercontent.com/render/math?4\pi^2I/(\mu B)"/>, where I is the moment of intertia. 
* Find <img src="https://render.githubusercontent.com/render/math?math=c=\mu">












