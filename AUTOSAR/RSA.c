#include <stdio.h>
#include <stdint.h>

void print_hex(const uint8_t *data, size_t length) {
    for (size_t i = 0; i < length; i++) {
        printf("%02X ", data[i]); // In từng byte ở dạng hex
        if ((i + 1) % 16 == 0) { // Xuống dòng sau mỗi 16 byte
            printf("\n");
        }
    }
    printf("\n");
}

int main() {
    // Mở file DER
    FILE *file = fopen("rsa_private_key.der", "rb");
    if (!file) {
        perror("Failed to open file");
        return 1;
    }

    // Xác định kích thước file
    fseek(file, 0, SEEK_END);
    size_t file_size = ftell(file);
    fseek(file, 0, SEEK_SET);

    // Cấp phát bộ nhớ để đọc dữ liệu
    uint8_t *buffer = (uint8_t *)malloc(file_size);
    if (!buffer) {
        perror("Failed to allocate memory");
        fclose(file);
        return 1;
    }

    // Đọc nội dung file vào buffer
    fread(buffer, 1, file_size, file);

    // Đóng file
    fclose(file);

    // Hiển thị nội dung dưới dạng hex
    printf("File content in hex:\n");
    print_hex(buffer, file_size);

    // Giải phóng bộ nhớ
    free(buffer);

    return 0;
}

