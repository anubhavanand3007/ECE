I = imread('lena_gray.bmp','bmp');
imshow(I);

J = imresize(I,2);
K = imnoise(I,'salt & pepper', 0.25);

K3 = medfilt2(J, [3 3]);
K5 = medfilt2(J, [5 5]);
K7 = medfilt2(J, [7 7]); 

subplot(321), imshow(I), title('Image');
subplot(322), imshow(J), title('Resize');
subplot(323), imshow(K), title('Noise');
subplot(324), imshow(K3), title('Filter3x3');
subplot(325), imshow(K5), title('Filter5x5');
subplot(326), imshow(K7), title('Filter7x7');
