# Advanced Physics Labs


This repository conatains "virtualized" advanced physics labs. They were made during the Spring and Fall of 2020, to allow physics majors at [Cal Poly, San Luis Obispo](https://physics.calpoly.edu) to continue their degree progress during the world-wide COVID-19 pandemic. 

There are no data-derived results here, but everything posted allows one to arrive at a results themselves. In other words, one must engage in each lab, "take data" from any videos or images, understand how each works, and do the analysis to arrive at a given result.

It is hoped the "quaratine versions" of the labs will allow the student to have as full of a "lab experience" as possible, minus (unfortunately) pushing the buttons on the equipment. 

## Lab 1: Cratering

Craters made by a projectile (like a small metal ball) in a porous material (like sand) follow a scaling law. Here is a [video](Labs/Cratering/Apparatus/slmo_crater.mov) of a crater being formed. This scaling law also includes large cratering events, like that of the Barringer Crater.  

The scaling is between the ingoing (kinetic) energy of the projectile vs the diameter of the eventual crater.  The scaling law involves a fractional power.  In the case where energies of in the ingoing projectile do not vaporize the sand/crater (i.e. all energy is mechanical), the power is 0.25.  See [this paper](Labs/Cratering/Info/crater_paper.pdf).  


### Equipment Tour

The apparatus used here looks [like this.](Labs/Cratering/Apparatus/app01.jpg)  Operating it is straightforward: the ball is loaded into a spring-loaded clamp. When released, the ball falls into a bucket of sand below.

### Data Taking

The Data folder contains pairs of images, like 001_drop.jpg and 001_crater.jpg.  Each pair shows the drop height of a small metal ball and an image of the resulting crater, with a ruler placed on top of it.  Ball parameters:

* Iron ball, mass=65.29 +/- 0.01 g, dia=25.81 +/- 0.01 cm
* Al ball, mass=22.7 +/- 0.01 g, dia=25.64 +/- 0.01 cm

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

The Data folder contains pairs of images, like 01_oscope.jpg and 01_retro.jpg.  Each pair shows the pulses received from the speed of light module and the location (distance) of the retromirror relative to the module.

### Data Analysis

Data should be analyzed in two ways:

* A curve fit of travel distance vs t and slope is speed.

* The data allows for repeated individual d/t computations, so the average of these and standard deviation of the mean should be computed.






