clc;
close all;
clear all;
[a,fs] = audioread('ee1.wav');
subplot(311), plot(a);
title('Speech signal plot'), xlabel('Time');
%sound(a,fs);

[b g] = lpc(a,14);
subplot(312), plot(b), grid on, title('Frequency components'), xlabel('Frequency');

c = filter(b,g,a);
subplot(313), plot(c), title('STFT of the speech sample');