I = imread('lena_gray.bmp','bmp');
imshow(I);

J = imnoise(I,'salt & pepper');
K = medfilt2(J);
subplot(221), imshow(I), title('Image');
subplot(222), imshow(J), title('salt and pepper noise');
subplot(223), imshow(K), title('After Filter');