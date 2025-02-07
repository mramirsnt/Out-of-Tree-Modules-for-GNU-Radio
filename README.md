# GNU Radio Custom Blocks: Z-Score & Wiener Filter

This repository contains Out of Tree GNU Radio blocks of **Z-Score** and **Wiener Filter**. These blocks were implemented with c++. I might add the Pyhton blocks in the future.

---

## Table of Contents

- [About GNU Radio](#about-gnu-radio)
- [Custom Blocks](#custom-blocks)
  - [Z-Score Block](#z-score-block)
  - [Wiener Filter Block](#wiener-filter-block)
- [Installation](#installation)
  - [Installing GNU Radio](#installing-gnu-radio)
  - [Installing Dependencies](#installing-dependencies)
- [Usage](#usage)

---

## About GNU Radio

**GNU Radio** is an open-source software development toolkit that provides a vast collection of signal processing blocks for creating software-defined radios and complex signal processing systems. 

---

## Custom Blocks

This repository includes two custom blocks tailored for advanced signal processing:

### Z-Score Block

The **Z-Score Block** computes the statistical Z-Score for an input signal. The Z-Score represents the number of standard deviations a data point is from the mean, which is useful for:

- **Normalization:** Standardizing data to enable comparison across different datasets.
- **Anomaly Detection:** Identifying outliers that deviate significantly from expected values.

### Wiener Filter Block

The **Wiener Filter Block** applies a Wiener filter to reduce noise in a signal. The Wiener filter minimizes the mean square error between the estimated and true signals, making it ideal for:

- **Noise Reduction:** Enhancing signal quality by filtering out unwanted noise.
- **Signal Restoration:** Recovering signals that have been degraded by noise.
- **System Identification:** Optimally estimating system parameters.

---

## Installation

### Installing GNU Radio

Since this project is developed on Ubuntu 22.04, you can install GNU Radio using the following command:

```bash
sudo apt-get install gnuradio
```

If you are using a different Linux distribution, please refer to the [GNU Radio website](https://wiki.gnuradio.org/index.php/InstallingGR) for detailed installation instructions.

### Installing Dependencies

Before building the custom blocks, ensure you have the following dependencies installed:

```bash
sudo apt install git cmake g++ libboost-all-dev libgmp-dev swig python3-numpy \
python3-mako python3-sphinx python3-lxml doxygen libfftw3-dev \
libsdl1.2-dev libgsl-dev libqwt-qt5-dev libqt5opengl5-dev python3-pyqt5 \
liblog4cpp5-dev libzmq3-dev python3-yaml python3-click python3-click-plugins \
python3-zmq python3-scipy python3-gi python3-gi-cairo gir1.2-gtk-3.0 \
libcodec2-dev libgsm1-dev libusb-1.0-0 libusb-1.0-0-dev libudev-dev python3-setuptools
```

---

## Usage

To integrate these custom blocks into your GNU Radio flowgraphs, follow these steps:

### Clone the Repository

```bash
git clone https://github.com/yourusername/your-repository.git
cd your-repository
```

### Run the Setup Script

Execute the provided `setup.sh` script to build and install the blocks:

```bash
./setup.sh
```

This script will compile the blocks and register them with your GNU Radio installation.

---



