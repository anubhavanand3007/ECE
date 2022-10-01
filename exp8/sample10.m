clc, clear all, close all;

I = imread('lena_gray.bmp','bmp');
imshow(I);
Ifft = fft2(I);
J = imrotate(I, 45);
Jfft = fft2(J);

subplot(321), imshow(I), title('Image');
subplot(322), imshow(J), title('Rotate');
subplot(323), imagesc(abs(fftshift(Ifft))), title('fft');
subplot(324), imagesc(abs(fftshift(Jfft))), title('fftrotate');
subplot(325), imagesc(log10(abs(fftshift(Jfft)))), title('log of magnitude');
subplot(326), imagesc(log10(abs(fftshift(Jfft)))), title('log of magnitude of rotated img');