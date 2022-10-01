clc;
close all;
clear all;
% a)
a = imread('barbara_gray.bmp','bmp');
subplot(211),imshow(a), title('a) Image');
% b)
b = fft2(a);
subplot(212), imagesc(abs(fftshift(b))), title('b) dft of image');