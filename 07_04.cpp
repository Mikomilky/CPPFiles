#include <opencv2/opencv.hpp>

cv::Mat adjustBrightnessContrast(const cv::Mat& inputImage, int brightness, int contrast) {

    double alpha = (contrast + 100.0) / 100.0;
    double beta = brightness;
    // 应用亮度和对比度调整
    cv::Mat adjustedImage;
    inputImage.convertTo(adjustedImage, -1, alpha, beta);

    return adjustedImage;
}

void onTrackbar(int, void* userdata) {
 
    cv::Mat* image = reinterpret_cast<cv::Mat*>(userdata);
    int brightness = cv::getTrackbarPos("亮度", "调整");
    int contrast = cv::getTrackbarPos("对比度", "调整");

    // 调整图像亮度和对比度
    cv::Mat adjustedImage = adjustBrightnessContrast(*image, brightness, contrast);

    // 显示调整后的图像
    cv::imshow("调整", adjustedImage);
}

int main() {
    // 读取图像
    cv::Mat originalImage = cv::imread("C:/Users/30826/Desktop/PlayerUI.jpg");

    if (originalImage.empty()) {
        std::cerr << "Error: Unable to load image!" << std::endl;
        return -1;
    }

    cv::namedWindow("调整", cv::WINDOW_NORMAL);

    // 创建亮度和对比度的滑动条
    int initialBrightness = 0;  
    int initialContrast = 0;   
    cv::createTrackbar("亮度", "调整", &initialBrightness, 100, onTrackbar, &originalImage);
    cv::createTrackbar("对比度", "调整", &initialContrast, 100, onTrackbar, &originalImage);

    // 初始化时调用一次回调函数
    onTrackbar(0, &originalImage);

    cv::waitKey(0);

    return 0;
}
