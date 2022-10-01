I = imread('lena_gray.bmp','bmp');
imshow(I);

c = [222 272 300 270 221 194];
r = [21 21 75 121 121 75];

BW = roipoly(I,c,r);
subplot(121), imshow(I), title('Image');
subplot(122), imshow(BW), title('region');