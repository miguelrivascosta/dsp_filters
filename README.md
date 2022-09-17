# Digital Signal Processing (DSP) filters
Finite Impulse Response (FIR) filters are a type of digital filter which impulse response has a finite number of terms. Here two different implementations of the FIR filter are available: linear-based FIR   and circular-based FIR. In both cases, the result is the same, however the circular-based makes a more efficient used of available resources.

The equation of FIR filter is the following:
$$y[n] = \sum_{k=0}^{N-1}b_kx[n-k]$$
where $b_k$ are the filter coefficients and $x[n-k]$ is the sample in the time instant $n-k$.

In the repository, the file *data.h* contains samples of a noisy sine wave and the file *b.h* consists in the coeffients of the FIR filter. There are lots of filter types to be used with different coefficients. However, in this case a simple moving average was used so, each coefficient has value equal to $1/N$ where $N$ is the number of coeffients.

# Results
Finally, in the following image it is shown the result of applying the filter:
![dsp output](https://raw.githubusercontent.com/miguelrivascosta/dsp_filters/master/images/output.png)
