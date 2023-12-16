#include <opencv2/opencv.hpp>

int main() {
    // 读取图像
    cv::Mat originalImage = cv::imread("C:/Users/30826/Desktop/PlayerUI.jpg");

    if (originalImage.empty()) {
        std::cerr << "加载图像失败" << std::endl;
        return -1;
    }

    // 检测图像边缘
    cv::Mat edges;
    cv::Canny(originalImage, edges, 50, 150);

    // 进行膨胀操作
    cv::Mat dilatedImage;
    cv::dilate(edges, dilatedImage, cv::Mat(), cv::Point(-1, -1), 2);

    // 进行侵蚀操作
    cv::Mat erodedImage;
    cv::erode(dilatedImage, erodedImage, cv::Mat(), cv::Point(-1, -1), 1);

    // 改变图像大小，缩放为50%
    cv::Mat resizedImage;
    cv::resize(originalImage, resizedImage, cv::Size(), 0.5, 0.5);

    // 显示原始图像
    cv::namedWindow("原始图像", cv::WINDOW_NORMAL);
    cv::imshow("原始图像", originalImage);

    // 显示处理后的图像
    cv::namedWindow("处理后图像", cv::WINDOW_NORMAL);
    cv::imshow("处理后图像", erodedImage);

    cv::waitKey(0);

    return 0;
}
