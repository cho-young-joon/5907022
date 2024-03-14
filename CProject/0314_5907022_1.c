
// 1) 0���� 100������ ���� �߿��� �Ҽ��� ���� ���� ���ϴ� ���α׷��� �ۼ��Ѵ�.
// 0���� 100������ ���� �߿��� �Ҽ��� ���� ���� ���ϴ� ���α׷��� ���� �ð��� clock �Լ��� ����Ͽ� �����Ѵ�
#include <stdio.h>
#include <time.h>

int main(void) {
    clock_t start = clock(); //���� ����
    int sum = 0;

    int i = 2; // 0 �� 1 �� �Ҽ��� �ƴ϶� ���� �Ѵ�.

    while (i <= 100) {
        int isPrime = 1; // �Ҽ� ���θ� �Ǵ��ϴ� ���� (1: �Ҽ�, 0: �Ҽ� �ƴ�)

        // 2���� i-1���� i�� ������ ���������� �˻�
        for (int j = 2; j <= i / 2; j++) {
            if (i % j == 0) {
                isPrime = 0; // i�� �Ҽ��� �ƴϸ� isPrime�� 0���� ����
                break;
            }
        }

        // i�� �Ҽ���� sum�� ���ϱ�
        if (isPrime) {
            sum += i;
        }

        i++; // ���� ���ڷ� �̵�

    }
    clock_t stop = clock(); // ���� ����

    // ��� ���
    printf("0���� 100������ �Ҽ����� ���� %d�Դϴ�.\n", sum);
    printf("���� �ð�: %f��\n", (double)(stop - start) / CLOCKS_PER_SEC);

    return 0;
}
