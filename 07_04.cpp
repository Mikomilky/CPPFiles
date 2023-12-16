#include <opencv2/opencv.hpp>

cv::Mat adjustBrightnessContrast(const cv::Mat& inputImage, int brightness, int contrast) {

    double alpha = (contrast + 100.0) / 100.0;
    double beta = brightness;
    // Ӧ�����ȺͶԱȶȵ���
    cv::Mat adjustedImage;
    inputImage.convertTo(adjustedImage, -1, alpha, beta);

    return adjustedImage;
}

void onTrackbar(int, void* userdata) {
 
    cv::Mat* image = reinterpret_cast<cv::Mat*>(userdata);
    int brightness = cv::getTrackbarPos("����", "����");
    int contrast = cv::getTrackbarPos("�Աȶ�", "����");

    // ����ͼ�����ȺͶԱȶ�
    cv::Mat adjustedImage = adjustBrightnessContrast(*image, brightness, contrast);

    // ��ʾ�������ͼ��
    cv::imshow("����", adjustedImage);
}

int main() {
    // ��ȡͼ��
    cv::Mat originalImage = cv::imread("C:/Users/30826/Desktop/PlayerUI.jpg");

    if (originalImage.empty()) {
        std::cerr << "Error: Unable to load image!" << std::endl;
        return -1;
    }

    cv::namedWindow("����", cv::WINDOW_NORMAL);

    // �������ȺͶԱȶȵĻ�����
    int initialBrightness = 0;  
    int initialContrast = 0;   
    cv::createTrackbar("����", "����", &initialBrightness, 100, onTrackbar, &originalImage);
    cv::createTrackbar("�Աȶ�", "����", &initialContrast, 100, onTrackbar, &originalImage);

    // ��ʼ��ʱ����һ�λص�����
    onTrackbar(0, &originalImage);

    cv::waitKey(0);

    return 0;
}
