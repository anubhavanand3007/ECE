I = imread('lena_gray.bmp','bmp');
imshow(I);

BW1 = edge(I,'sobel');
BW2 = edge(I,'canny');

subplot(221), imshow(I), title('Image');
subplot(222), imshow(BW1), title('Sobel Filter');
subplot(223), imshow(BW2), title('Canny Filter');