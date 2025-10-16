#include <stdio.h>

void generate_image() {
    FILE *file = fopen("image.ppm", "w");
    fprintf(file, "P3\n");
fprintf(file, "800 200\n");
fprintf(file, "255\n"); // <-- Cette ligne est cruciale !
    int R = 255;
    int G = 0;
    int B = 0;
    for (int y = 0; y < 200; y++) {
    for (int x = 0; x < 800; x++) {
        int color_width = 800 / 6; 
        if (x < color_width) {
            float progression = (float)x / color_width;
            R = 255;
            G = (int)(255 * progression);
            B = 0;
        } else if (x < color_width * 2) {
            double progression = (double)(x - color_width) / color_width;
            R = (int)(255 * (1.0 - progression));
            G = 255;
            B = 0;
        } else if (x < color_width * 3) {
            double progression = (double)(x - color_width * 2) / color_width;
            R = 0;
            G = 255;
            B = (int)(255 * progression);
        } else if (x < color_width * 4) {
            double progression = (double)(x - color_width * 3) / color_width;
            R = 0;
            G = (int)(255 * (1.0 - progression));
            B = 255;
        } else if (x < color_width * 5) {
            double progression = (double)(x - color_width * 4) / color_width;
            R = (int)(255 * progression);
            G = 0;
            B = 255;
        } else {
            double progression = (double)(x - color_width * 5) / (800 - color_width * 5);
            R = 255;
            G = 0;
            B = (int)(255 * (1.0 - progression));
        }
        fprintf(file, "%d %d %d ", R, G, B);
    }
    fprintf(file, "\n"); 
}
}

int main() {
    generate_image();
}



