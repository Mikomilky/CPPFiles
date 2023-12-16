#include <opencv2/opencv.hpp>

int main() {
    // ��ȡͼ��
    cv::Mat originalImage = cv::imread("C:/Users/30826/Desktop/PlayerUI.jpg");

    if (originalImage.empty()) {
        std::cerr << "����ͼ��ʧ��" << std::endl;
        return -1;
    }

    // ��ͼ��ת��Ϊ�Ҷ�ͼ
    cv::Mat grayImage;
    cv::cvtColor(originalImage, grayImage, cv::COLOR_BGR2GRAY);

    // �ԻҶ�ͼ����ж�ֵ��
    cv::Mat binaryImage;
    cv::threshold(grayImage, binaryImage, 128, 255, cv::THRESH_BINARY);

    // �ԻҶ�ͼ����и�˹ģ������
    cv::Mat blurredImage;
    cv::GaussianBlur(grayImage, blurredImage, cv::Size(5, 5), 0);

    // ��ʾԭʼͼ��
    cv::namedWindow("ԭʼͼ��", cv::WINDOW_NORMAL);
    cv::imshow("ԭʼͼ��", originalImage);

    // ��ʾ������ͼ��
    cv::namedWindow("�����ͼ��", cv::WINDOW_NORMAL);
    cv::imshow("�����ͼ��", blurredImage);


    cv::waitKey(0);

    return 0;
}
