#include <janet.h>
static const unsigned char bytes[] = {215, 0, 205, 0, 153, 0, 0, 6, 0, 0, 205, 127, 255, 255, 255, 10, 40, 206, 4, 109, 97, 105, 110, 206, 14, 115, 114, 99, 47, 109, 97, 105, 110, 46, 106, 97, 110, 101, 116, 206, 4, 80, 79, 82, 84, 216, 9, 111, 115, 47, 103, 101, 116, 101, 110, 118, 206, 4, 56, 48, 48, 48, 216, 11, 115, 99, 97, 110, 45, 110, 117, 109, 98, 101, 114, 206, 4, 72, 79, 83, 84, 206, 9, 108, 111, 99, 97, 108, 104, 111, 115, 116, 206, 18, 76, 105, 115, 116, 101, 110, 105, 110, 103, 32, 111, 110, 32, 37, 115, 58, 37, 100, 216, 6, 112, 114, 105, 110, 116, 102, 215, 0, 205, 0, 152, 0, 0, 15, 1, 1, 1, 21, 86, 206, 3, 97, 112, 112, 218, 2, 208, 3, 117, 114, 105, 213, 9, 206, 12, 47, 102, 97, 118, 105, 99, 111, 110, 46, 105, 99, 111, 213, 4, 208, 4, 102, 105, 108, 101, 206, 18, 115, 116, 97, 116, 105, 99, 47, 102, 97, 118, 105, 99, 111, 110, 46, 105, 99, 111, 208, 6, 115, 116, 97, 116, 117, 115, 128, 200, 208, 4, 107, 105, 110, 100, 218, 15, 208, 4, 109, 105, 109, 101, 206, 12, 105, 109, 97, 103, 101, 47, 120, 45, 105, 99, 111, 110, 206, 6, 47, 97, 117, 100, 105, 111, 213, 4, 218, 15, 206, 17, 115, 116, 97, 116, 105, 99, 47, 97, 117, 100, 105, 111, 46, 104, 116, 109, 108, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 206, 9, 116, 101, 120, 116, 47, 104, 116, 109, 108, 206, 11, 47, 97, 117, 100, 105, 111, 46, 104, 116, 109, 108, 218, 25, 206, 6, 47, 118, 105, 100, 101, 111, 213, 4, 218, 15, 206, 17, 115, 116, 97, 116, 105, 99, 47, 118, 105, 100, 101, 111, 46, 104, 116, 109, 108, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 24, 206, 11, 47, 118, 105, 100, 101, 111, 46, 104, 116, 109, 108, 218, 29, 206, 11, 47, 105, 110, 100, 101, 120, 46, 104, 116, 109, 108, 213, 4, 218, 15, 206, 17, 115, 116, 97, 116, 105, 99, 47, 105, 110, 100, 101, 120, 46, 104, 116, 109, 108, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 24, 206, 6, 47, 105, 109, 97, 103, 101, 218, 33, 206, 11, 47, 114, 111, 98, 111, 116, 115, 46, 116, 120, 116, 213, 4, 218, 15, 206, 17, 115, 116, 97, 116, 105, 99, 47, 114, 111, 98, 111, 116, 115, 46, 116, 120, 116, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 206, 10, 116, 101, 120, 116, 47, 112, 108, 97, 105, 110, 206, 10, 47, 115, 116, 121, 108, 101, 46, 99, 115, 115, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 115, 116, 121, 108, 101, 46, 99, 115, 115, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 206, 8, 116, 101, 120, 116, 47, 99, 115, 115, 210, 2, 0, 208, 7, 104, 101, 97, 100, 101, 114, 115, 206, 6, 65, 99, 99, 101, 112, 116, 216, 6, 103, 101, 116, 45, 105, 110, 218, 24, 216, 18, 115, 116, 114, 105, 110, 103, 47, 104, 97, 115, 45, 112, 114, 101, 102, 105, 120, 63, 216, 3, 110, 111, 116, 206, 1, 44, 216, 12, 115, 116, 114, 105, 110, 103, 47, 115, 112, 108, 105, 116, 206, 1, 59, 213, 24, 218, 41, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 99, 115, 115, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 41, 206, 15, 97, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 47, 112, 100, 102, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 112, 100, 102, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 55, 206, 13, 105, 109, 97, 103, 101, 47, 115, 118, 103, 43, 120, 109, 108, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 115, 118, 103, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 58, 206, 9, 105, 109, 97, 103, 101, 47, 106, 120, 108, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 106, 120, 108, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 61, 206, 9, 97, 117, 100, 105, 111, 47, 109, 52, 97, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 109, 52, 97, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 64, 206, 9, 97, 117, 100, 105, 111, 47, 97, 97, 99, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 97, 97, 99, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 67, 206, 9, 105, 109, 97, 103, 101, 47, 103, 105, 102, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 103, 105, 102, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 70, 218, 37, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 116, 120, 116, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 37, 206, 9, 105, 109, 97, 103, 101, 47, 119, 112, 50, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 119, 112, 50, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 75, 206, 29, 97, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 47, 120, 45, 115, 104, 111, 99, 107, 119, 97, 118, 101, 45, 102, 108, 97, 115, 104, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 115, 119, 102, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 78, 206, 9, 105, 109, 97, 103, 101, 47, 98, 109, 112, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 98, 109, 112, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 81, 206, 11, 118, 105, 100, 101, 111, 47, 120, 45, 102, 108, 118, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 102, 108, 118, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 84, 206, 9, 118, 105, 100, 101, 111, 47, 109, 112, 52, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 109, 112, 52, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 87, 206, 10, 105, 109, 97, 103, 101, 47, 106, 112, 101, 103, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 106, 112, 103, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 90, 206, 22, 97, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 47, 106, 97, 118, 97, 115, 99, 114, 105, 112, 116, 213, 4, 218, 15, 206, 15, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 106, 115, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 93, 206, 16, 97, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 47, 106, 115, 111, 110, 213, 4, 218, 15, 206, 17, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 106, 115, 111, 110, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 96, 206, 9, 97, 117, 100, 105, 111, 47, 111, 103, 103, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 111, 103, 103, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 99, 206, 10, 105, 109, 97, 103, 101, 47, 119, 101, 98, 112, 213, 4, 218, 15, 206, 17, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 119, 101, 98, 112, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 102, 206, 16, 97, 112, 112, 108, 105, 99, 97, 116, 105, 111, 110, 47, 120, 45, 115, 104, 213, 4, 218, 15, 206, 15, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 115, 104, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 105, 206, 10, 97, 117, 100, 105, 111, 47, 109, 112, 101, 103, 213, 4, 218, 15, 218, 88, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 108, 206, 10, 118, 105, 100, 101, 111, 47, 119, 101, 98, 109, 213, 4, 218, 15, 206, 17, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 119, 101, 98, 109, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 110, 206, 9, 118, 105, 100, 101, 111, 47, 111, 103, 118, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 111, 103, 118, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 113, 206, 9, 105, 109, 97, 103, 101, 47, 112, 110, 103, 213, 4, 218, 15, 206, 16, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 112, 110, 103, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 116, 206, 10, 105, 109, 97, 103, 101, 47, 97, 118, 105, 102, 213, 4, 218, 15, 206, 17, 115, 116, 97, 116, 105, 99, 47, 98, 114, 101, 97, 100, 46, 97, 118, 105, 102, 218, 17, 128, 200, 218, 18, 218, 15, 218, 19, 218, 119, 206, 18, 67, 111, 110, 116, 101, 110, 116, 32, 110, 101, 103, 111, 116, 105, 97, 116, 101, 100, 216, 5, 112, 114, 105, 110, 116, 213, 24, 206, 10, 47, 98, 114, 101, 97, 100, 46, 116, 120, 116, 218, 74, 206, 11, 47, 98, 114, 101, 97, 100, 46, 97, 118, 105, 102, 218, 121, 206, 10, 47, 98, 114, 101, 97, 100, 46, 99, 115, 115, 218, 54, 206, 10, 47, 98, 114, 101, 97, 100, 46, 111, 103, 118, 218, 115, 206, 10, 47, 98, 114, 101, 97, 100, 46, 115, 119, 102, 218, 80, 206, 10, 47, 98, 114, 101, 97, 100, 46, 112, 100, 102, 218, 57, 206, 9, 47, 98, 114, 101, 97, 100, 46, 115, 104, 218, 107, 206, 10, 47, 98, 114, 101, 97, 100, 46, 106, 112, 103, 218, 92, 206, 10, 47, 98, 114, 101, 97, 100, 46, 109, 52, 97, 218, 66, 206, 10, 47, 98, 114, 101, 97, 100, 46, 112, 110, 103, 218, 118, 206, 10, 47, 98, 114, 101, 97, 100, 46, 97, 97, 99, 218, 69, 206, 10, 47, 98, 114, 101, 97, 100, 46, 102, 108, 118, 218, 86, 206, 11, 47, 98, 114, 101, 97, 100, 46, 119, 101, 98, 109, 218, 112, 206, 11, 47, 98, 114, 101, 97, 100, 46, 119, 101, 98, 112, 218, 104, 206, 10, 47, 98, 114, 101, 97, 100, 46, 106, 120, 108, 218, 63, 206, 10, 47, 98, 114, 101, 97, 100, 46, 115, 118, 103, 218, 60, 206, 10, 47, 98, 114, 101, 97, 100, 46, 109, 112, 51, 218, 109, 206, 10, 47, 98, 114, 101, 97, 100, 46, 109, 112, 52, 218, 89, 206, 10, 47, 98, 114, 101, 97, 100, 46, 103, 105, 102, 218, 72, 206, 10, 47, 98, 114, 101, 97, 100, 46, 119, 112, 50, 218, 77, 206, 11, 47, 98, 114, 101, 97, 100, 46, 106, 115, 111, 110, 218, 98, 206, 10, 47, 98, 114, 101, 97, 100, 46, 111, 103, 103, 218, 101, 206, 9, 47, 98, 114, 101, 97, 100, 46, 106, 115, 218, 95, 206, 10, 47, 98, 114, 101, 97, 100, 46, 98, 109, 112, 218, 83, 208, 6, 109, 101, 116, 104, 111, 100, 206, 5, 37, 115, 32, 37, 115, 218, 10, 206, 1, 47, 206, 10, 105, 110, 100, 101, 120, 46, 104, 116, 109, 108, 215, 0, 205, 0, 152, 0, 0, 7, 2, 2, 2, 6, 16, 206, 15, 115, 116, 97, 116, 105, 99, 45, 114, 101, 115, 112, 111, 110, 115, 101, 218, 2, 206, 7, 115, 116, 97, 116, 105, 99, 47, 216, 6, 115, 116, 114, 105, 110, 103, 218, 15, 218, 17, 218, 18, 218, 19, 44, 2, 0, 0, 42, 3, 0, 0, 48, 3, 0, 0, 42, 4, 1, 0, 51, 3, 4, 0, 42, 4, 2, 0, 42, 5, 3, 0, 49, 4, 3, 5, 41, 4, 200, 0, 42, 5, 4, 0, 42, 6, 2, 0, 49, 4, 5, 6, 42, 4, 5, 0, 48, 4, 1, 0, 65, 3, 0, 0, 3, 3, 0, 0, 3, 1, 3, 11, 0, 11, 0, 11, 0, 11, 191, 253, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 213, 2, 218, 17, 129, 148, 208, 4, 98, 111, 100, 121, 206, 9, 78, 111, 116, 32, 70, 111, 117, 110, 100, 44, 1, 0, 0, 42, 3, 0, 0, 57, 2, 0, 3, 25, 3, 2, 0, 42, 5, 1, 0, 57, 4, 5, 3, 25, 5, 4, 0, 28, 5, 2, 0, 26, 51, 0, 0, 42, 6, 2, 0, 48, 0, 6, 0, 42, 7, 3, 0, 51, 6, 7, 0, 25, 7, 6, 0, 28, 7, 10, 0, 42, 8, 4, 0, 48, 8, 7, 0, 42, 9, 5, 0, 51, 8, 9, 0, 47, 8, 0, 0, 42, 10, 6, 0, 51, 9, 10, 0, 25, 6, 9, 0, 26, 2, 0, 0, 25, 6, 7, 0, 28, 6, 34, 0, 42, 8, 7, 0, 48, 8, 7, 0, 42, 9, 8, 0, 51, 8, 9, 0, 25, 9, 8, 0, 38, 10, 0, 0, 71, 8, 9, 10, 25, 10, 8, 0, 29, 10, 24, 0, 56, 8, 9, 10, 25, 11, 8, 0, 42, 8, 9, 0, 48, 8, 11, 0, 42, 12, 8, 0, 51, 8, 12, 0, 41, 13, 0, 0, 57, 12, 8, 13, 25, 8, 12, 0, 28, 5, 2, 0, 26, 11, 0, 0, 42, 13, 10, 0, 57, 12, 13, 8, 25, 13, 12, 0, 28, 13, 7, 0, 42, 12, 11, 0, 47, 12, 0, 0, 42, 14, 12, 0, 51, 12, 14, 0, 25, 5, 13, 0, 26, 1, 0, 0, 71, 10, 9, 10, 26, 233, 255, 255, 26, 1, 0, 0, 28, 5, 2, 0, 26, 5, 0, 0, 28, 3, 4, 0, 42, 6, 13, 0, 57, 5, 6, 3, 26, 1, 0, 0, 42, 7, 14, 0, 57, 6, 0, 7, 42, 8, 0, 0, 57, 7, 0, 8, 42, 8, 15, 0, 49, 8, 6, 7, 42, 9, 16, 0, 51, 8, 9, 0, 28, 5, 2, 0, 3, 5, 0, 0, 42, 7, 17, 0, 35, 6, 7, 3, 28, 6, 6, 0, 42, 7, 18, 0, 42, 9, 4, 0, 48, 7, 9, 0, 42, 7, 19, 0, 52, 7, 0, 0, 42, 7, 20, 0, 3, 7, 0, 0, 4, 0, 0, 0, 57, 1, 2, 14, 0, 14, 0, 5, 1, 15, 0, 15, 0, 5, 1, 5, 0, 5, 2, 21, 0, 21, 0, 21, 0, 21, 0, 9, 1, 15, 0, 32, 0, 32, 0, 32, 0, 32, 0, 27, 0, 27, 0, 27, 0, 15, 0, 15, 0, 15, 0, 9, 1, 32, 0, 32, 0, 32, 0, 32, 0, 13, 0, 13, 0, 13, 0, 13, 0, 13, 0, 13, 0, 13, 1, 40, 0, 40, 0, 40, 0, 40, 0, 35, 0, 35, 0, 17, 1, 17, 0, 17, 1, 31, 0, 31, 0, 21, 1, 21, 1, 25, 0, 25, 0, 25, 0, 25, 1, 25, 191, 254, 21, 191, 252, 13, 0, 13, 191, 255, 9, 11, 5, 0, 5, 0, 18, 1, 19, 0, 19, 191, 255, 18, 3, 21, 0, 21, 0, 43, 0, 43, 0, 5, 0, 5, 0, 5, 0, 5, 1, 5, 0, 5, 2, 9, 0, 9, 191, 254, 5, 2, 21, 0, 21, 0, 21, 0, 21, 0, 21, 191, 254, 5, 0, 5, 0, 5, 216, 13, 95, 48, 48, 48, 48, 51, 48, 115, 101, 114, 118, 101, 114, 44, 1, 0, 0, 42, 2, 0, 0, 47, 2, 0, 0, 42, 3, 1, 0, 51, 2, 3, 0, 25, 3, 2, 0, 28, 3, 3, 0, 25, 2, 3, 0, 26, 2, 0, 0, 42, 2, 2, 0, 41, 4, 1, 0, 57, 3, 0, 4, 30, 3, 2, 0, 25, 3, 2, 0, 47, 3, 0, 0, 42, 4, 3, 0, 51, 2, 4, 0, 25, 3, 2, 0, 42, 2, 4, 0, 47, 2, 0, 0, 42, 4, 1, 0, 51, 2, 4, 0, 25, 4, 2, 0, 28, 4, 3, 0, 25, 2, 4, 0, 26, 2, 0, 0, 42, 2, 5, 0, 41, 5, 2, 0, 57, 4, 0, 5, 30, 4, 2, 0, 25, 4, 2, 0, 25, 2, 4, 0, 42, 4, 6, 0, 49, 4, 2, 3, 42, 5, 7, 0, 51, 4, 5, 0, 42, 4, 8, 0, 49, 4, 3, 2, 42, 4, 9, 0, 52, 4, 0, 0, 89, 1, 1, 45, 0, 45, 0, 45, 0, 45, 0, 41, 0, 41, 0, 41, 0, 41, 0, 41, 0, 29, 0, 29, 0, 29, 0, 29, 0, 16, 0, 16, 0, 16, 0, 5, 1, 32, 0, 32, 0, 32, 0, 32, 0, 28, 0, 28, 0, 28, 0, 28, 0, 28, 0, 16, 0, 16, 0, 16, 0, 16, 191, 255, 5, 3, 9, 0, 9, 0, 9, 0, 9, 1, 9, 0, 9, 0, 9, 0, 9};

const unsigned char *janet_payload_image_embed = bytes;
size_t janet_payload_image_embed_size = sizeof(bytes);
extern void janet_module_entry_circlet(JanetTable *);

int main(int argc, const char **argv) {

#if defined(JANET_PRF)
    uint8_t hash_key[JANET_HASH_KEY_SIZE + 1];
#ifdef JANET_REDUCED_OS
    char *envvar = NULL;
#else
    char *envvar = getenv("JANET_HASHSEED");
#endif
    if (NULL != envvar) {
        strncpy((char *) hash_key, envvar, sizeof(hash_key) - 1);
    } else if (janet_cryptorand(hash_key, JANET_HASH_KEY_SIZE) != 0) {
        fputs("unable to initialize janet PRF hash function.\n", stderr);
        return 1;
    }
    janet_init_hash_key(hash_key);
#endif

    janet_init();

    /* Get core env */
JanetTable *env = janet_core_env(NULL);
JanetTable *lookup = janet_env_lookup(env);
JanetTable *temptab;
int handle = janet_gclock();    temptab = janet_table(0);
    temptab->proto = env;
    janet_module_entry_circlet(temptab);
    janet_env_lookup_into(lookup, temptab, "_000030", 0);

    /* Unmarshal bytecode */
    Janet marsh_out = janet_unmarshal(
      janet_payload_image_embed,
      janet_payload_image_embed_size,
      0,
      lookup,
      NULL);

    /* Verify the marshalled object is a function */
    if (!janet_checktype(marsh_out, JANET_FUNCTION)) {
        fprintf(stderr, "invalid bytecode image - expected function.");
        return 1;
    }
    JanetFunction *jfunc = janet_unwrap_function(marsh_out);

    /* Check arity */
    janet_arity(argc, jfunc->def->min_arity, jfunc->def->max_arity);

    /* Collect command line arguments */
    JanetArray *args = janet_array(argc);
    for (int i = 0; i < argc; i++) {
        janet_array_push(args, janet_cstringv(argv[i]));
    }

    /* Create enviornment */
    temptab = env;
    janet_table_put(temptab, janet_ckeywordv("args"), janet_wrap_array(args));
    janet_gcroot(janet_wrap_table(temptab));

    /* Unlock GC */
    janet_gcunlock(handle);

    /* Run everything */
    JanetFiber *fiber = janet_fiber(jfunc, 64, argc, argc ? args->data : NULL);
    fiber->env = temptab;
#ifdef JANET_EV
    janet_gcroot(janet_wrap_fiber(fiber));
    janet_schedule(fiber, janet_wrap_nil());
    janet_loop();
    int status = janet_fiber_status(fiber);
    janet_deinit();
    return status;
#else
    Janet out;
    JanetSignal result = janet_continue(fiber, janet_wrap_nil(), &out);
    if (result != JANET_SIGNAL_OK && result != JANET_SIGNAL_EVENT) {
      janet_stacktrace(fiber, out);
      janet_deinit();
      return result;
    }
    janet_deinit();
    return 0;
#endif
}