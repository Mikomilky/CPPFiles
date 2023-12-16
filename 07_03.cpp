#include <opencv2/opencv.hpp>

int main() {
    // ��ȡͼ��
    cv::Mat originalImage = cv::imread("C:/Users/30826/Desktop/PlayerUI.jpg");

    if (originalImage.empty()) {
        std::cerr << "����ͼ��ʧ��" << std::endl;
        return -1;
    }

    // ���ͼ���Ե
    cv::Mat edges;
    cv::Canny(originalImage, edges, 50, 150);

    // �������Ͳ���
    cv::Mat dilatedImage;
    cv::dilate(edges, dilatedImage, cv::Mat(), cv::Point(-1, -1), 2);

    // ������ʴ����
    cv::Mat erodedImage;
    cv::erode(dilatedImage, erodedImage, cv::Mat(), cv::Point(-1, -1), 1);

    // �ı�ͼ���С������Ϊ50%
    cv::Mat resizedImage;
    cv::resize(originalImage, resizedImage, cv::Size(), 0.5, 0.5);

    // ��ʾԭʼͼ��
    cv::namedWindow("ԭʼͼ��", cv::WINDOW_NORMAL);
    cv::imshow("ԭʼͼ��", originalImage);

    // ��ʾ������ͼ��
    cv::namedWindow("�����ͼ��", cv::WINDOW_NORMAL);
    cv::imshow("�����ͼ��", erodedImage);

    cv::waitKey(0);

    return 0;
}
