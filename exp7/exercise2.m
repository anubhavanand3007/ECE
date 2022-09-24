clc, clear all, close all;wp = 0.2*pi;ws = 0.3*pi;N = ceil(6.6*pi/(ws-wp)); % estimates order of the filterk = kaiser(N+1,2.5);kb = fir1(N,[0.2 0.5],k);[H,W] = freqz(b,1,512);plot(W/pi,20*log10(abs(H))), grid on, title('FIR filter using Hamming window'); xlabel('Normalized Frequency'), ylabel('Gain in dB');