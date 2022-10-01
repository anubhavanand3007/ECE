clc;
close all;
clear all;
% a)
a = imread('lena_gray.bmp','bmp');
subplot(221),imshow(a), title('a) Image');
% b)
subplot(222), imhist(a,255), title('b) Negative of the image');
% c)
J= histeq(a);
subplot(223),imshow(J), title('a) Image');
% d)
subplot(224), imhist(J,255), title('b) Negative of the image');
