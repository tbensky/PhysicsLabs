# Advanced Physics Labs


This repository contains "virtualized" advanced physics labs. They were made during the Spring, Summer and Fall of 2020, to allow physics majors at [Cal Poly, San Luis Obispo](https://physics.calpoly.edu) to continue their degree progress during the world-wide COVID-19 pandemic. 

No data analysis is done here. This is left to the student. However, everything posted under a given experiment should allow one to "take data," then arrive at results themselves. In other words, one must engage in each lab, "take data" from any videos or images, understand how each works, and do the analysis to arrive at a given result. 

We emphasize proper handling of uncertainty and error analysis in this work. In other words, don't just report a result. Report it's uncertainty too.

It is hoped the "quaratine versions" of the labs will allow the student to have as full of a lab experience as possible, minus (unfortunately) pushing the buttons on the equipment. 

# Table of contents

### Part I

* [Lab 1: Cratering](https://github.com/tbensky/PhysicsLabs#lab-1-cratering)
* [Lab 2: Speed of light](https://github.com/tbensky/PhysicsLabs#lab-2-speed-of-light)
* [Lab 3: Photoelectric Effect](https://github.com/tbensky/PhysicsLabs#lab-3-the-photoelectric-effect)
* [Lab 4: Charge-to-mass ratio for an electron](https://github.com/tbensky/PhysicsLabs#lab-4-charge-to-mass-ratio-qm-for-the-electron)
* [Lab 5: Gamma-ray Scintillation](https://github.com/tbensky/PhysicsLabs#lab-5-gamma-ray-scintillation)
* [Lab 6: Gamma-ray Scintillation: Counting Statistics](https://github.com/tbensky/PhysicsLabs#lab-6-gamma-ray-scintillation-high-and-low-count-statistics)
* [Lab 7: Gamma-ray attenuation](https://github.com/tbensky/PhysicsLabs#lab-7-gamma-ray-attenuation)
* [Lab 8: Waiting times between gamma-rays](https://github.com/tbensky/PhysicsLabs#lab-8-gamma-ray-waiting-times)
* [Lab 9: Magnetic Torque](https://github.com/tbensky/PhysicsLabs#lab-9-magnetic-torque)

### Part II

* [Lab 10: Detecting Muons](https://github.com/tbensky/PhysicsLabs#lab-10-detecting-muons)
* [Lab 11: Sun Photometry](https://github.com/tbensky/PhysicsLabs#lab-11-sun-photometry)
* [Lab 12: Pulsed NMR](https://github.com/tbensky/PhysicsLabs#lab-12-pulsed-nmr)
* [Lab 13: Single photon interference](https://github.com/tbensky/PhysicsLabs#lab-13-single-photon-interference)


## Lab 1: Cratering

Craters made by a projectile (like a small metal ball) in a porous material (like sand) follow a scaling law. Here is a [video](Labs/Cratering/Apparatus/slmo_crater.mov) of a crater being formed. This scaling law also includes large cratering events, like that of the Barringer Crater.  

The scaling is between the ingoing (kinetic) energy of the projectile vs the diameter of the eventual crater.  The scaling law involves a fractional power.  In the case where energies of in the ingoing projectile do not vaporize the sand/crater (i.e. all energy is mechanical), the power is 0.25.  See [this paper](Labs/Cratering/Info/crater_paper.pdf).  


### Equipment Tour

The apparatus used here looks [like this.](Labs/Cratering/Apparatus/app01.jpg)  Operating it is straightforward: the ball is loaded into a spring-loaded clamp. When released, the ball falls into a bucket of sand below.

* Iron ball, mass=65.29 +/- 0.01 g, dia=25.81 +/- 0.01 cm
* Al ball, mass=22.7 +/- 0.01 g, dia=25.64 +/- 0.01 cm

### Data Taking

The Data folder contains pairs of images, like `001_drop.jpg` and `001_crater.jpg`.  Each pair shows the drop height of a small iron ball and an image of the resulting crater, with a ruler placed on top of it.  Ball parameters:

* Record all uncertainties in the drop height and crater diameter.

### Data Analysis

* Plot ln of diameter (y-axis) vs ln of projectile energy (x-axis). Slope should be the scaling-law power.
* Include data point of Barringer Crater on the plot (look it up somewhere).
* Help on the data analysis: [Part I](https://youtu.be/5eSZBGsqpXY) and [Part II](https://youtu.be/qLKiolOsyIc)


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

A beam of electrons is sent through an evacualted glass sphere containing a trace amount of Helium gas, causing the beam track to be visible. The sphere sits at the center of a Helmholtz coil. An accelerating potential sets the speed at which the electrons in the beam travel. The magnetic field generated by the Helmholtz coil allows one to introduce a curvature into the beam.  Finding the beam radius as a function of accelerating potential and magnetic field allows one to determine the charge-to-mass ratio (q/m) for an electron.

### Equipment Tour


* [Equipment Tour](https://youtu.be/bee7VRBN7Vw)

* [Tour showing effects of magnetic field and accelerating potential](https://youtu.be/zPv0aICY5GU)

### Data Taking

#### Notes

* Data folder has the subfolders of 1000, 1500, 2000, 2500, 3000 
* These numbers are the value the accelerating potential in Volts used in that image.
* Within each folder are images showing the electron beam against a calibrated grid (larger squares a 1 cm on a side).
* A given "up" file is when the magnetic field direction steers the electron beam upward.
* A given "down" file is when the magnetic field direction steers the electron beam downward.
* Meters show accelerating potential and current through helmholtz coil.
* *Turns and diameter of Helmholtz Coils:* See equipment tour video.

#### Suggestion

Use [ImageJ](https://imagej.nih.gov/ij/download.html) to load in images and pick (x,y) points off of beam for analysis, as follows:

1. Load image into ImageJ
1. Set distance scale for image
	1. Draw a line covering a known physical distance
	1. Analyze->Set scale...
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
* The curve fit can be tough on this one!  Here are [some tips](https://docs.google.com/document/d/1VhEp9krV9-Pfam7U1_YknWdrqc8xfi4NZCUrR8dYSTo/edit?usp=sharing).

## Lab 5: Gamma Ray Scintillation

"Scintillation" is a detection technique for gamma-rays.  Technically, it is the process of a gamma ray depositing its energy into a NaI(Tl) detector, and causing a flash of UV light to be produced (via crystal properties and the Tl doping).  The crystal is transparent to the UV light, so the light can travel through it, to a collection cathode at one end of the detector. This causes an electron to be ejected from the photocathode (as in the photoelectric effect). Electron amplification occurs with dynodes in the detector.  A photocurrent is output from the detector, which is "the signal." 

Note the advantage of scitillation is that the photocurrent is proportional to the gamma ray energy. Thus scintillation detectors allow for the study of not just the presence of a gamma ray, but its energy as well.

This lab has two parts.

* Part I: Use and understand the equipment used to "do" gamma-ray scintillation.

* Part II: Use variety of gamma-ray sources and produce an energy-axis calibrated spectrum of Cs137

### Equipment Tour



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
* Your energy axis should be in KeV or MeV

#### Part II: Identify the effects of Compton Scattering in a Cs137 Spectrum

A gamma-ray with energy E can Compton scatter within the detector (or its surroundings) to produce a lower energy gamma ray, E' that then may be detected and subsequently generate the signal. E' is a function of E via the Compton Scattering formula

<img src="https://render.githubusercontent.com/render/math?math=E'=\frac{E}{1%2B\frac{E}{mc^2}\left[1-\cos\theta\right]}">

Here E and E' are the gamma-ray energies, m is the electron mass and c is the speed of light (note: <img src="https://render.githubusercontent.com/render/math?math=mc^2=511 keV"> for an electron).

Using your calibrated Cs137 spectrum, identify all peaks/features caused by Compton Scattering. For each feature, draw a "cartoon" containing a gamma-ray and electron (at rest) showing what scatter must have occurred to generate that feature.

## Lab 6: Gamma-ray Scintillation: high and low count statistics

The emission of a gamma-ray is a truly random process. Despite the "click-click-click" one hears on a handheld Geiger counter, no one can predict with certainty exactly when a gamma-ray will be emitted from a nucleus. This leaves any counting theory or prediction up to the laws of statistics. The best we can determine is a likelihood a decay will occur.

The probability of a gamma emission is dictated by the following: Suppose we have a series of n independent trials, each having the same probability p of success. (A trial is a nucleus, and a success is a gamma-ray emission.)  What is the probability of finding <img src="https://render.githubusercontent.com/render/math?math=\nu"> successes? Here the "n trials" are a group of nuclei wanting to decay, and each will decay with probability p. Of  the n trials, suppose <img src="https://render.githubusercontent.com/render/math?math=\nu"> actually emit a gamma ray.  This is all dictated by the binomial distribution, which is:

<img src="https://render.githubusercontent.com/render/math?math=P(\nu,n)=\begin{pmatrix}n\\\nu\end{pmatrix}p^\nu (1-p)^{n-\nu}">

The binomial distribution covers the occurrence of a "yes" or "no" type of event, where any event is independent of any other event.  It supposes there are n trials with probability p of succeeding and probability q=1-p of failing. Here <img src="https://render.githubusercontent.com/render/math?math=P(\nu,n)"> gives the chance of  <img src="https://render.githubusercontent.com/render/math?math=\nu"> successes given the n trials.

As you might guess, n for nuclear samples is quite large. Even though the chance of an individual nucleus decaying, p, is vanishingly small, there are a lot of nuclei in a sample, thus np is finite and constant. In this case, the binomial distribution can be approximated quite well by the normal (or Gaussian) distribution with the average value X=np and <img src="https://render.githubusercontent.com/render/math?math=\sigma=\sqrt{np(1-p)}"> (See pages 230 - 233 in Taylor (2nd).) You can see plots of the binomial distribution [here](https://en.wikipedia.org/wiki/Binomial_distribution#/media/File:Binomial_distribution_pmf.svg)--looks "bell shaped", no?

So, <img src="https://render.githubusercontent.com/render/math?math=P(\nu,n)"> above can be written as 


<img src="https://render.githubusercontent.com/render/math?math=P(\nu)=\frac{1}{\sqrt{2\pi np(1-p)}} e^{-(\nu-np)^2/2np(1-p)}">

Compare this to the standard form of the Gaussian, or

<img src="https://render.githubusercontent.com/render/math?math=P(\nu)=\frac{1}{\sqrt{2\pi\sigma^2}} e^{-(x-X)^2/2\sigma^2}">



There's one more adapatation.  When <img src="https://render.githubusercontent.com/render/math?math=\nu/n"> is small, the binomial distribution can be simplifed to a Poisson distribution, or

<img src="https://render.githubusercontent.com/render/math?math=P_\mu(\nu)=e^{-\mu}\frac{\mu^\nu}{\nu!}">

Here <img src="https://render.githubusercontent.com/render/math?math=\mu"> is the average number of counts. More on this simplification can be found [here](https://github.com/tbensky/PhysicsLabs/blob/master/Labs/GammaRayHighLowCounts/Resources/Derivation_of_Poisson.pdf).

## Equipment Tour


* [Introduction to the Single channel analyzer (SCA)](https://youtu.be/LQg4JgmPuFs)
* [See the SCA at work](https://youtu.be/20h5PCv3Lho)
* [Introduction to the Scalar](https://youtu.be/FpW7T-yTIV4)
* [Watch the software work in MCS mode](https://youtu.be/Uz11JOqhA3Q)

## Data Taking

* [Data taking: high counts coming in](https://youtu.be/83tOYpRW-_0)
* [Data taking: low counts coming in](https://youtu.be/iaoJs6MpPms)

### Deadtime

There can be an issue with deadtime in these experiments. This would cause the detector to underreport the actual number of emissions. This is very apparent when doing this experiment with a Geiger tube (while the plasma dissipates).  The scintillation detector used here shows no obvious deadtime, given the source intensity. See the two images in [the Resources](https://github.com/tbensky/PhysicsLabs/tree/master/Labs/GammaRayHighLowCounts/Resources) folder. 

## Data Analysis

### Part I

* Histogram both the high and low count data files
* Vary bin width or bin number until you have a reasonable histogram with no gaps or zero population bin between other populated bins.
* Fit a Gaussian to the high count histogram
* Fit a Poisson to the low count histogram
* You are to produce two key plots:
	1. The histogram for the high count data shown with bars, and a smooth line for the Gaussian fit.
	1. The histogram for the low count data shown with bars, and points for Poisson fit (evalutate the Poisson at the center x-coordinate for a given bar).
	1. Error bars to appear on the top of each histogram bar.
* In each of the two plots, the histogram and fit must appear on the same plot.
* Compute the Chi-squared for each histogram vs its fit.
* Compare the Chi-square to N, the number of bins in the histogram.


### Part II
* See the Data folder for this experiment for two files.
	1. `high_counts.csv` contains 8,000+ high count numbers
	1. `low_counts.csv` contains 8,000+ low count numbers

* Run each through the same histogram/fit/plot/Chi-square procedure as in Part I for your hand data.
* That is, generate two more plots each having a histogram and appropriate fit for both the high and low count data files.

## Lab 7: Gamma-ray attenuation

Attenuation means to make less, as in less intense.  So how would one make a flux of gamma-rays less intense? How would one attenuate gamma-rays? Answer: By putting some matter in the way, and the denser (i.e. more electrons), the better. Why electrons? Gamma-rays (on the order of 1 MeV or so) primarily react with matter by via the electrons in the matter (compton scattering and photoelectric absorption). If absorbed, a given gamma-ray will be removed from the original gamma-ray flux, attenuating the overall flux. This can also be called "shielding."

In this lab, we'll place thicker and thicker amounts of lead and aluminum between a source and detector, and measure the area under the primary photopeak for a set duration of time (5 min in this case). 

### Equipment tour

* [Introduction](https://youtu.be/_7Bly806NmE)
* [Monitoring only the photopeak](https://youtu.be/lTfeLD9MBi8)
* [Example of a timed run](https://youtu.be/a04dpPIwfgE)


### Data Taking

* In the `Data` folder, you'll find two sub-folders called Pb and Al (for lead and alumnium).  Each contains images of a total photopeak area after 5 minutes, with an increased number of lead or aluminum plates placed between the source and detector. 

* In the `Resources` folder you'll find measurements of the thicknesses of the plates.

* The source used was Cs137 (663 keV gamma emitter).

* Data would be photopeak area vs. total plate thickness.

### Data analysis

* Curve fitting should give the attenuation coefficient for lead and aluminum at 663 keV.

* From each coefficient, also find the "mass attenuation coefficient" to be compared with online references for such.


## Lab 8: Gamma-ray waiting times

When dealing with gamma-rays, we're most used to discussing how many our detection system detects in some time interval, like 845 counts/second, etc.  Suppose we instead wondered "once we detect a gamma ray, how long to we have to wait for the *next* gamma-ray?"  Would it be 1/845 seconds? If so, would this be a constant for a given source?  Measuring the "waiting time" between gamma-ray emissions is the goal of this experiment. An Arduino Uno will be used to do the timing.

### Equipment tour

* [Interfacing detection equipment to an Arduino](https://youtu.be/6kceZKelflE)
* [Introduction to TTL pulses](https://youtu.be/BcL3BDvsGlQ)
* [The Arduino off and running](https://youtu.be/NFApVXQNKZY)
* [Seeing multiple detection pulses on the oscilloscope](https://youtu.be/_bGbpDlWTOg)

### Data taking

In the `Data` folder you'll find two files:
1. `cps.csv:` this contains over 8,000 counts/second measured using a scalar for a Cs137 source.
1. `wait_times.csv:` contains over 8,000 microsecond wait times, measured by the Arduino, between successive pulses coming from the SCA.

### Data Analysis

* Histograms of the counts/second and waiting times should be made to reveal any distribution in long list of numbers.
* The counts/second should be normally distributed.
* The waiting times should show a [negative exponential distribution](https://en.wikipedia.org/wiki/Exponential_distribution).
* Data analysis should reveal a definitive connection between the fit parameters from each data sets.
* There is an interesting correspondence between the normally distributed counts/sec and the exponential "waiting time."


## Lab 9: Magnetic Torque

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



## Lab 10: Detecting Muons

All told, this experiment is advertised as "detecting muons."  In this case, muons are created when cosmic rays strike the earth’s atmosphere. Muons then shower down to earth, and will supposedly strike a scintillator (a "stop") then decay (a "decay"). The stop and decay each generate a flash of light in the scintillator and subsequently each a pulse into the detection electronics. The muon lifetime is shorter than the time it’ll take them to reach the earth’s surface, so we shouldn’t see them down here save for time dilation in our reference frame, at the near c speeds at which they travel.

For muon detection, one is always looking for pulse pairs in the detector (one for the stop, and one for the decay).  In operation, the apparatus used here only histograms times between pairs of events in a piece of scintillator plastic that are no more than 10 microseconds apart. It doesn’t do anything to somehow "identify and detect muons."  Perhaps a pulse pair within 10 microseconds is a fairly stringent "filter" of all events that are constantly appearing in a scintillator, as only 70 or so such pairs appear in 24 hours or so.  Are these pairs generated by muons? Who knows? No energy discrimination is done or anything else to probe that the pulse pairs are from indeed from Muons.  

Muons don’t interact with matter much, but there is one way of at least "proving" what stimulates the scintillator here comes from the sky above: put many layers of lead bricks on top of the detector as a shield, and see if the pulse pair arrival rate drops (you have the whole earth as a shield on the other side). This won’t be done in the virtual version of this lab, but the brick layers do decrease the muon detection rate. [This](https://github.com/tbensky/PhysicsLabs/blob/master/Labs/DetectingMuons/Resources/1.4996874.pdf) is the most rockin’ use of muons I’ve ever seen and makes me think “ya..they I guess maybe they are Muons.”

### Equipment Tour


* [Overview of the apparatus](https://youtu.be/Ff-cUSYJPec)
* [Signals coming in from the pre-amplifier](https://youtu.be/Pi8ZJyuR1xM)
* [The pulse and double pulse generator.](https://youtu.be/IOVGpj-H5HA)
* [Say hello to the TAC (time to amplitude converter).](https://youtu.be/Ttojyj1f3wk)
* [How data is taken.](https://youtu.be/uuMJVOvJwrA)
* [The PHA (pulse height analyzer) in action.](https://youtu.be/rMZe8BvGDr0)

### Data Taking

#### Videos on getting started

* [Calibrating the PHA channels.](https://youtu.be/LHXbTSJFRus)
* [Start taking data.](https://youtu.be/vFlitHeKAJg)
* [Our first muon detected!!!!!](https://youtu.be/fuepFNn6Cao)
* [Four muons detected.](https://youtu.be/hOvvBmsdxUU)
* [70 muons in 24 hours.](https://youtu.be/EcOoZQLWNtM)

#### Data files

* See the `Data` folder for counts vs. channels for increasing runs times of the experiment. The big number in the file name is the number of seconds the acquisition was running for.

* Do a curve fit to determine the Muon lifetime. Ignore the first 100 channels or so, which are due to some ill-formed pre-amp pulses causing the TAC to trigger on a single pulse.

### Resources

* See the `Resources` folder for a neat application of Muon detection.




## Lab 11: Sun Photometry

Sun photometry is about measuring the intensity of sunlight at a given wavelength, reaching the earth's surface, as a function of the [optical] thickness of the atmosphere. There are some good papers in the `Resources` folder for this experiment explaining it all. Also see:

* Mims, 20 Nov 1992, Vol 31, No. 33, Applied Optics, “Sun photometer with light-emitting...”
* Mims,Vol. 80, No. 7, July 1999, p.1421, Bulletin of the American Meteorological Society, “An International Haze-monitoring...”
* Brooks and Mims, Vol 106, No. D5, pp. 4733-4740, March 16, 2001, J. Geophys. Res., “Development of an inexpensive...”

### Equipment Tour


* [Tour of homemade sun photometer](https://youtu.be/dDpI8eVO0YE)
* [Inner circuitry of sun photometer](https://youtu.be/auxPMIlgAdE)
* [Taking data with the photometer](https://youtu.be/6iffG8b15iE)
* [Background light level (dark current measurement](https://youtu.be/vkprQa8H2Vo)



### Data Taking

* All data taken for this experiment was done from San Luis Obispo, CA, USA.
* For the Sun’s altitude at the time/date the data was taken, use: https://www.esrl.noaa.gov/gmd/grad/solcalc/azel.html. 
* Select “Enter lat/lng” for the city.
* San Luis Obispo is 8 hrs offset to UTC. 

#### Data taken on 30-Mar-2020 


* [9am](https://youtu.be/KprgqEzilF4)
* [10:30am](https://youtu.be/dtLajwvRXow)
* [11:20am](https://youtu.be/4JG3yA7refg)
* [12:20pm](https://youtu.be/4JG3yA7refg)
* [1:30pm](https://youtu.be/OdT4f6-nxe8)

#### 02-Apr-2020

* [8:57am](https://youtu.be/FM16MeE2BNU)
* [10:35am](https://youtu.be/jWge-FOl2j4)
* [12:15pm](https://youtu.be/wboRHxZHbqI)
* [1:50pm](https://youtu.be/sfkHK_dQn-g)
* [3:15pm](https://youtu.be/Xcw35FYam5E)
* [4:45pm](https://youtu.be/erqrfmgtj40)

#### 10-Apr-2020

* [1:28pm](https://youtu.be/0DRO9Kgbr2Q)
* [3:00pm](https://youtu.be/TD4Ue-PnPOM)
* [4:20pm](https://youtu.be/lktsS1X3WTo)
* [6:10pm](https://youtu.be/uOp8iR_hKL0)

#### 14-Apr-2020

* [8:23am](https://youtu.be/gNmv0MAEYj4)
* [9:40am](https://youtu.be/JJsOQOPvIqQ)
* [12:30pm](https://youtu.be/_WNt-0V5nHE)
* [3:30pm](https://youtu.be/XbSZJC4k45o)

### Data Analysis

Lots of possibilities, but to start, one wants to find the extinction coefficient at each wavelength for a given day.  Tips:

* The voltage each LED would read if the photometer was taken above the earth’s atmosphere (the extraterrestrial voltage for each LED).

* The distance a given red, green, or blue wavelength traveled through the atmosphere, at which its extraterrestrial voltage was reduced by 50%. (In other words, how far through the atmosphere does a given wavelength travel before its intensity is reduced by half?)

* Show one ‘Langley plot’ for each day with data for all three wavelengths plotted on the same Langley plot (see Fig 5 in Acharya--one of the papers above; make one of these for each day of data).

* For each wavelength on a given day, plot the ‘half voltage distance’ (y-axis) vs day (x-axis). Be sure your day scale is properly spaced (best to convert your days/times to seconds (may help). Plot all 3 wavelengths on a single plot, with clear annoations.

* Try to come up with some connection of trends in your data to local weather conditions in San Luis Obispo on the days data was taken.


## Lab 12: Pulsed NMR

You may already be familiar with just plain old "NMR." You can think of this as continuous NMR, since the RF field that did the spin flipping was always on.  This experiment is also NMR, but the RF field is *not* always on.  It is pulsed.  A pulse generator that you control can turn the RF fields on and off.  And, since the RF field is not on all of the time, time dynamics of the spin orientations are possible to see.  These time dynamics are a very very cool thing to see.  

Also the most important issue on the apparatus: the detector only tells you the component of the net magnetization of the sample perpendicular to the static B-field.

### Equipment Tour

* [Intro to Pulsed NMR](https://youtu.be/77h_4RWQkYg)
* [Pulse programmer](https://youtu.be/korWbEK5qhw)

### Data Taking

Here is the pulsed NMR running for Mineral Oil.

* [Finding T2\*](https://youtu.be/59g3X-U9fak)
* [Finding T2](https://youtu.be/7gzEo7-6FXA)
* [Finding T1](https://youtu.be/pgC89PQomK0)


### Data Analysis

Using curve fits of the data, report T2\*, T2 and T1

### Do you really understand what's going on here?

After your data analysis, hopefully you have some numerical values for T2\*, T2 and T1.  But what do they really mean?  Here's a test for you on *the physics* of these parameters.

* [Print this template](https://github.com/tbensky/PhysicsLabs/blob/master/Labs/PulsedNMR/arrows_and_check.pdf) and cut out the arrows and check marks.

* Now, [print this backdrop](https://github.com/tbensky/PhysicsLabs/blob/master/Labs/PulsedNMR/backdrop.pdf) 

* Attach the tails of all 3 arrows to the black dot shown in the backdrop so that they may rotate around the dot (see sample below).  Assume the arrows are constituents of net magnetization of the sample.

* Place the backdrop with the arrows attached down on a table. Fix your phone’s camera directly above the backdrop and make a video.  The video is to have three parts to it. 
	1. The first explains how pulsed NMR gives us T2\* is.
	1. The second explains how pulsed NMR gives T2.
	1. The third explains T1. 

* [Here is a sample](https://youtu.be/ywh9fTWfsoA) explaining where T2\* may come from.

* The only motion needed in your video is you slowly rotating the arrows, together or separately (ahem--when the arrows may separate is a big deal), and moving the check mark into the "A-on," "B-on,"" or "All off" box, indicating which pulse (if any) is on, turning the RF on, and affecting the arrows the way you’ll show.  

* As you begin a new explanation (of T2\*, T2, or T1), be sure all of the arrows start out oriented along the static B-field direction. You should narrate the video as you move the arrows and the check mark. Here is a sample that may explain where T2* comes from.

* Share your video with your instructor for grading. (Suggestion: put on Youtube with the permission set to 'unlisted.')

## Lab 13: Single photon interference

Note! As you ease into this experiment, please read Ch 1 of [this book](https://www.amazon.com/QED-Strange-Princeton-Science-Library/dp/0691164096/ref=sr_1_1?dchild=1&keywords=feynman+qed&qid=1599434314&sr=8-1). (Notes: 1) This is suuuuuch a good book. 2) It might be on b-ok.cc.)  You will likely be unable to come up with any sort of theoretical discussion for this experiment without understanding the ideas presented in this book.  Chapter 2 is most relevant to this experiment, but ideas in Ch 1 are needed as a basis for Ch 2.

In introductory physics or in optics, you studied the Young’s double slit experiment, which is summarized nicely [here](https://en.wikipedia.org/wiki/Double-slit_experiment). In such an experiment, a coherent laser beam is split by two slits, separated by some small distance. Each slit launches a portion of the coherent beam toward a viewing screen, where an interference pattern is seen.  The idea of wave interference with peaks and valleys in each beam, each traveling some distance before combining with the other at a screen via superposition, makes it plausible that an interference pattern will form on the viewing screen.  The pattern becomes more complicated if one works in that the slits have a finite width, but the wave picture still makes it plausible that an interference pattern on a viewing screen will  form. The classical interference pattern is described by the culminating equation in the “Classical wave-optics formulation” section in the Wikipedia article, or

<img src="https://render.githubusercontent.com/render/math?math=I(\theta)\propto\cos^2\left[\frac{\pi d \sin\theta}{\lambda}\right]\sinc^2\left[\frac{\pi b \sin\theta}{\lambda}\right]">


Here, I(θ) is the intensity seen at some position θ on the screen, d is the slit separation, and b is the slit width. On a linear screen, θ is usually replaced with y/L, where y is some actual distance along the image plane (the screen), and L is the slit-to-image plane distance (about 50 cm in this apparatus).

In this experiment, we consider what would happen in a Young’s double slit experiment if the coherent laser beam was replaced with a stream of single photons.  One usually starts thinking about this in terms of which slit a photon may “choose” to pass through with the classical analogy of “baseballs flying through holes,” etc.  The conceptual difficulty is in how an interference pattern can form with photons.  This all often falls under the idea of a “which-way” experiment, also briefly covered [here](https://en.wikipedia.org/wiki/Double-slit_experiment).

### Equipment Tour

* We are using the [photon interference apparatus by TeachSpin](https://www.teachspin.com/two-slit). 

* Here is [the company’s manual](https://github.com/tbensky/PhysicsLabs/blob/master/Labs/SinglePhotonInterference/2slit_man.pdf).

* Here is a video tour of the apparatus:

* [General tour of apparatus](https://youtu.be/gwGBdQ6_Jdw)
* [Tour of detector end of apparatus](https://youtu.be/mMEfq-UFpJE)
* [Tour of apparatus internals](https://youtu.be/ZVJoAKVbhvU)
* [Initial power up and turning of knobs](https://youtu.be/UcYX-Fkhfoc)
* [Turning lamp intensity knob](https://youtu.be/UV-o4Jt7CUg)

#### Slit used

* Separation=0.406 mm, slit opening width=0.09 mm
![Image of slit](https://github.com/tbensky/PhysicsLabs/blob/master/Labs/SinglePhotonInterference/slit.png)

#### Single Photon Source

To do this experiment, we want a single photon at a time to approach and interact with the double slit. A question is: Does the light bulb we’re using produce “one photon at a time?”  

Think about it this way. The apparatus is about 1 m long, and light travels at 3x10^8 m/s, so  it would take 3.33x10^-9 s for a photon to travel from the bulb to the detector.  If you demanded that at most there is only one photon traveling down the apparatus at a time, you would insist that no more than 3x10^8 (=1/3.33x10^-9) photons/second arrive at the detector. 

When you take data, you’ll see the photon arrival rate is something on the order of 1,000 photons/second. This is 5 orders of magnitude less than your demand. Indeed there is at most only one photon traveling from the bulb to the detector at a given time.


#### Videos: Data taking

As discussed in the apparatus tour video, your data consists of scanning a small aperture across the photons that emerge from the double slit. The aperture allows you to sample a small section across the transverse dimension of the interference pattern.  A “data point” here is how many photons arrive at the detector as a function of the aperture position.  This aperture does not cause any additional interference, as it only serves as a spatial discriminator: it only allows photons lined up with its own transverse position (relative to the travel direction of the photons) to reach the detector.

The data videos likely represent what you as a student might have taken in the lab yourself: several curious runs at different bulb intensities. It is not clear which will be the best.  For a given video, take data and produce a plot of “photon counts” (y-axis) vs. aperture position (x-axis).  In many cases, the aperture is held in a given position for 2 or more seconds, allowing you to average two or more readings as your official “data point.” (A quick mental average is fine, as you watch the counts come in.) Your photon counts are just “counts,” so the usual uncertainty in each apply.


* [Single photon interference experiment: Lamp intensity knob at 3/4 of max, 0.406 mm slit separation, slits 0.09 mm wide (run 1 at this bulb intensity)](https://youtu.be/Kl_uEwwu8YM)

* [Single photon interference experiment: Lamp intensity knob at 3/4 of max, 0.406 mm slit separation, slits 0.09 mm wide (run 2 at this bulb intensity)](https://youtu.be/01vw2B6TxIo)

* [Single photon interference experiment: Lamp intensity knob at full maximum, 0.406 mm slit separation, slits 0.09 mm wide (only run at this bulb intensity)](https://youtu.be/pO1Tm_6raLQ)

* [Single photon interference experiment: Lamp intensity knob at half maximum, 0.406 mm slit separation, slits 0.09 mm wide (run 1 at this bulb intensity)](https://youtu.be/jI2TQ_QwhV0)

* [Single photon interference experiment: Lamp intensity knob at half maximum, 0.406 mm slit separation, slits 0.09 mm wide (run 2 at this bulb intensity)](https://youtu.be/tmXQ6x4XFq0)





### Data Analysis

For each data set, plot photon counts vs aperture distance.  Fit the classical double slit intensity formula (see Wikipedia article in the Introduction above) to each plot. Since we don’t know where the central maximum is, it is OK to add a offset along the horizontal axis in the theory equation.  Free fit parameters then will be an overall multiplicative constant, the photon wavelength, and the horizontal offset. The overall multiplicative constant will be <img src="https://render.githubusercontent.com/render/math?math=I_0">, the light intensity that arrives at the double slit. In the photon view, <img src="https://render.githubusercontent.com/render/math?math=I_0"> will be the number of photons per second arriving at the double slit.

#### Theory
Apart from the analysis and curve fitting, it would be nice if you could leave this lab with some feeling on what a single photon does as it interacts with a double slit. The analysis and curve fitting should allow you to form your first idea, but this is just an observation of the data:

In the limit of high photon counts, single photons appear to follow _______________.

You fill in the blank.  The answer should be of no surprise, since light is fundamentally a photon, with an intense, classically analyzed light field (like from a laser), just the presence of a lot of photons.

But again, your first impression here, and what you fill in the blank is just an observation. You saw how the data behaved when a lot of photons are aimed at a double slit. You should still be wondering: 

##### What happens when just one of those photons interacts with the double slit? 

To answer this, you need to learn a bit about "Quantum Electrodynamics,"" or "QED" from the Feynman book reference above. Let’s learn a bit of QED from this book.  Chapter 2 describes all of classical optics, including how reflection, diffraction, lenses, and mirages, not for light waves (as in classical optics), but for photons. The answer for photons and obstructions (like single and double slits) is contained in the figures on p. 55 and 56.  So you should read Chapter 2, which will likely need a bit of warm-up with a read of Chapter 1.  

Please discuss what a single photon does when it encounters a double slit, in your report. [This paper](https://github.com/tbensky/PhysicsLabs/blob/master/Labs/SinglePhotonInterference/2005%20Hanc%2C%20The%20Feynman%20quantum%20mechanics%20with%20the%20help%20of%20Java%20applets%20and%20physlets%20in%20Slovakia.pdf) may help you along as well. I am waiting for someone (a student) to code up some nice animations of photons flying around with Feynman's clocks on them.





