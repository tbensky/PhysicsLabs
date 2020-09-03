# Advanced Physics Labs


This repository conatains "virtualized" advanced physics labs. They were made during the Spring and Fall of 2020, to allow physics majors at [Cal Poly, San Luis Obispo](https://physics.calpoly.edu) to continue their degree progress during the world-wide COVID-19 pandemic. 

No data analysis is done here. This is left to the student. However, everything posted under a given experiment should allow one to "take data," then arrive at results themselves. In other words, one must engage in each lab, "take data" from any videos or images, understand how each works, and do the analysis to arrive at a given result. 

We emphasize proper handling of uncertainty and error analysis in this work. In other words, don't just report a result. Report it's uncertainty too.

It is hoped the "quaratine versions" of the labs will allow the student to have as full of a lab experience as possible, minus (unfortunately) pushing the buttons on the equipment. 

# Table of contents

* [Cratering](https://github.com/tbensky/PhysicsLabs#lab-1-cratering)
* [Speed of light](https://github.com/tbensky/PhysicsLabs#lab-2-speed-of-light)
* [Photoelectric Effect](https://github.com/tbensky/PhysicsLabs#lab-3-the-photoelectric-effect)
* [Charge-to-mass ratio for an electron](https://github.com/tbensky/PhysicsLabs#lab-4-charge-to-mass-ratio-qm-for-the-electron)
* [Magnetic Torque](https://github.com/tbensky/PhysicsLabs#lab-magnetic-torque)
* [Gamma Ray Scintillation](https://github.com/tbensky/PhysicsLabs#lab-4-gamma-ray-scintillation)


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

## Lab 3: The photoelectric effect

Light of variable wavelength strikes a photocathode in a vacuum ejecting electrons, which may travel through a gap to a collection electrode making a photocurrent flow. A stopping voltage may be applied to squelch the current. The magnitude of the voltage required to do this is a proxy for the kinetic energy at which the electrons leave the photocathode. Planck's constant may be found by finding many stopping voltages as a function of wavelength.

### Equipment Tour

* [Equipment tour](https://youtu.be/UlnR3R9Wb0A)

* [How the stopping potential works](https://youtu.be/q1B6ereb1_g)

* [What's in the silver box](https://youtu.be/uJn7wfEf6sY)

* [Overall equipment tour](https://youtu.be/t-pkfaNB3oE)

### Data Taking

Data is in the form of videos. Watch carefully to find the stopping voltage found at each wavelength.

* [Data 1](https://youtu.be/Yk_55XE365Y), [Data 2](https://youtu.be/rjwunOPkKFM), [Data 3](https://youtu.be/u1Hmcje58ZI)

### Data Analysis


* The govering equation is <img src="https://render.githubusercontent.com/render/math?math=qV_%7Bstop%7D%3Dh%5Cnu-\phi">, where <img src="https://render.githubusercontent.com/render/math?math=V_{stop}"> is the stopping potential, <img src="https://render.githubusercontent.com/render/math?math=h\nu"> is the photon energy, and <img src="https://render.githubusercontent.com/render/math?math=\phi"> is the work function of the photocathode. Find a linearized version of this equation and fit it to your data.

* Find the fit, find <img src="https://render.githubusercontent.com/render/math?math=h">, or Planck's constant.  Your error vs. the known value should be <5%.

* Find the work function  <img src="https://render.githubusercontent.com/render/math?math=\phi"> and identify the material of the photocathode.

## Lab 4: Charge to mass ratio (q/m) for the electron

A beam of electrons are sent through an evacualted glass sphere containing a trace amount of Helium gas, causing the beam track to be visible. The sphere sits at the center of a Helmholtz coil. An accelerating potential sets the speed at which the electrons in the beam travel. The magnetic field generated by the Helmholtz coil allows one to introduce a curvature into the beam.  Finding the beam radius as a function of accelerating potential and magnetic field allows one to determine the charge-to-mass ratio (q/m) for an electron.

### Equipment Tour


* [Equipment Tour](https://youtu.be/bee7VRBN7Vw)

* [Tour showing effects of magnetic field and stopping potential](https://youtu.be/zPv0aICY5GU)

### Data Taking

#### Notes

* Data folder has the subfolders of 1000, 1500, 2000, 2500, 3000 
* These numbers are the value the accelerating potential in Volts used in that image.
* Within each folder are images showing the electron beam against a calibrated grid (larger squares a 1 cm on a side).
* A given "up" file is when the magnetic field direction steers the electron beam upward.
* A given "down" file is when the magnetic field direction steers the electron beam downward.
* Meters show accelerating potential and current through helmholtz coil.
* See equipment tour for characteristics of helmholtz coil.

#### Suggestion

Use [ImageJ](https://imagej.nih.gov/ij/download.html) to load in images and pick (x,y) points off of beam for analysis, as follows:

1. Load image into ImageJ
1. Set distance scale for image
	1. Draw a line covering a known distance
	1. Image->Scale
1. On the tool bar, right click on "point tool" to make it into "multipoint" tool.
1. Click along electron beam path. Small yellow numbered point/placeholders should appear.
1. Edit->Selection->Select None (if needed to clear/start over)
1. File->Save As...->XY Coordinates

### Data Analysis

* Load (x,y) coordinates from beam into curve fitting software.
* y values should be found at some common x, by averaging the y-values for an "up" and "down" image.
* Up and down radii should be equivalent, but are not in general due to biases in the equipment.
* Fit a circle of the form <img src="https://render.githubusercontent.com/render/math?math=(x-x_0)^2%2B(y-y_0)^2=R^2"> to the data to determine R, the beam radius.
* Use R, B, and V to compute q/m as in <img src="https://render.githubusercontent.com/render/math?math=q/m=\frac{2V}{R^2B^2}">
* Find uncertainty in q/m by propagating the uncertainty in your values of R, B, and V.
* Since you are able to compute many q/m values, average all q/m results and do an SDOM analysis for the uncertainty.

## Lab 4: Gamma Ray Scintillation

"Scintillation" is a detection technique for gamma-rays.  Technically, it is the process of a gamma ray depositing its energy into a NaI(Tl) detector, and causing a flash of UV light to be produced (via crystal properties and the Tl doping).  The crystal is transparent to the UV light, so the light can travel through it, to a collection cathode at one end of the detector. This causes an electron to be ejected from the photocathode (as in the photoelectric effect). Electron amplification occurs with dynodes in the detector.  A photocurrent is output from the detector, which is "the signal." 

Note the advantage of scitillation is that the photocurrent is proportional to the gamma ray energy. Thus scintillation detectors allow for the study of not just the presence of a gamma ray, but its energy as well.

This lab has two parts.

* Part I: Use and understand the equipment used to "do" gamma-ray scintillation.

* Part II: Use variety of gamma-ray sources and produce an energy-axis calibrated spectrum of Cs137

### Equipment Tour

Gamma ray scintillation. See https://github.com/tbensky/PhysicsLabs

* [Equipment tour](https://youtu.be/DQU8kMIjicE)
* [Different gamma-ray sources available](https://youtu.be/ENBQokl2bQk)
* [Seeing an initial gamma-ray detection signal](https://youtu.be/7dQqvlEldsE)
* [Meaning of the gamma-ray signal](https://youtu.be/U07gfZyLwBU)
* [Introduction to the Multichannel Analyzer (MCA) and software](https://youtu.be/C3aaIfmzRAA)
* [Testing the MCA with a pulse generator](https://youtu.be/czzf1ww_Oq4)
* [Once going, don't touch the amplifier](https://youtu.be/lRGfHgcT8OY)
* [Setting the amplifier for Cs137](https://youtu.be/k0UNZJETSQ0)

### Gamma-ray spectra


Here are several different gamma-ray placed in front of the detector, showing the MCA response. Note: These were all taken with the same amplifier gain.

* [Cs137](https://youtu.be/4LSs1RD3HZo)
* [Co60](https://youtu.be/xfGyGzG8dLY)
* [Na22](https://youtu.be/hM8fxFAVcXo)
* [Ba133](https://youtu.be/qluonEki0FI)
* [Mn54](https://youtu.be/8-BW4moMXl4)
* [Am241](https://youtu.be/72ZYOrn5Uo8)



### Data Taking

Data files (CSV files, counts vs. channel number or a "spectrum") for each are in the Data folder for this lab.

### Data Analysis

#### Part I: Produce an energy-calibrated Cs137 spectrum

* Find a catalog of gamma-ray specta on the web somewhere.
* Find the channel number of (all) distinct photopeaks in each source's spectrum.
* Compile a list of channel number vs. energy.
* Find a fit equation that gives a correspondence between channel number and energy
* Produced an energy-axis calibrated Cs137 spectrum.

#### Part II: Identify the effects of Compton Scattering in a Cs137 Spectrum

A gamma-ray with energy E can Compton scatter within the detector (or its surroundings) to produce a lower energy gamma ray, E' that then may be detected and subsequently generate the signal. E' is a function of E via the Compton Scattering formula

<img src="https://render.githubusercontent.com/render/math?math=E'=\frac{E}{1%2B\frac{E}{mc^2}(1-\cos\theta)}">

Here E and E' are the gamma-ray energies, m is the electron mass and c is the speed of light (note: <img src="https://render.githubusercontent.com/render/math?math=mc^2=511 keV"> for an electron).

Using your calibrated Cs137 spectrum, identify all peaks/features caused by Compton Scattering.


## Lab: Magnetic Torque

A cue ball has a magnet embedded in it.  It rides on an air bearing is made to oscillate and precess in a magnetic field.  This is a great introduction to ESR and NMR, where it's not a cue ball, but electrons and protons in a magnetic field.

### Equipment Tour

* Cue ball mass: 141.60 +/- 0.01 g.
* Cue ball radius: 53.5 +/- 0.2 mm
* Magnetic field: B(I)=(1.36 +/- 0.03) x 10^-3 T/A
* Coils: radius=0.109 m, diameter=0.138 m
* Moment of inertia of the ball: <img src="https://render.githubusercontent.com/render/math?math=I=\frac{2}{5}mr^2">

### Data Taking

#### Precessional motion
* In folder `SpinPrecess` data comes in video pairs: 
	* `spinXX.mov` is a SLOMO (240 fps) video to determine to ball's spin speed.  
	* `precXX.mov` is the ball subsequently precessing (due to spinXX's spin speed) in the magnetic field (be sure to read current from analog meter).
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
		* You don't need tracker for this.
		* Just play a `precXX.mov` video.
			* Read the current off of the analog meter. Get the B field from the relation above.
			* Time the precessional period of the ball (Tp) (With your phone's stopwatch? Video playback time?)
	* B, Ts and Tp become a data point triplet for the ball.

##### Data Analysis
* The theory says that <img src="https://render.githubusercontent.com/render/math?math=\Omega_p=\frac{\mu}{L}B"> where <img src="https://render.githubusercontent.com/render/math?math=\Omega_p"> is the precessional frequency in rad/s, L is the angular momentum of the ball, B the magnetic field, and <img src="https://render.githubusercontent.com/render/math?math=\mu"> is the ball's magnetic moment.
* Find a linearized form of the theory. Plot data to match and do a linear curve fit to find <img src="https://render.githubusercontent.com/render/math?math=\mu">. Compare with below.


#### Ball as a spherical pendulum
* In folder `Pendulum` watch `osc01.mov` and `osc02.mov`. 
	* Find period of pendulum's oscillation (<img src="https://render.githubusercontent.com/render/math?math=T_{osc}">).
	* Note many periods are possible in `osc02` as current is changed periodically.
	* Read the current off of the analog meter. Get the B field from the relation above.
	* B and each T become a data pair for the ball.

##### Data Analysis
* The theory says that <img src="https://render.githubusercontent.com/render/math?math=T_{osc}^2=\frac{4\pi^2I}{\mu%20B}"> with <img src="https://render.githubusercontent.com/render/math?math=I=\frac{2}{5}mr^2">, B the magnetic field, <img src="https://render.githubusercontent.com/render/math?math=T_{osc}"> the pendulum's period, and and <img src="https://render.githubusercontent.com/render/math?math=\mu"> is the ball's magnetic moment.
* Find a linearized form of the theory. Plot data to match and do a linear curve fit to find <img src="https://render.githubusercontent.com/render/math?math=\mu">. Compare with above.












