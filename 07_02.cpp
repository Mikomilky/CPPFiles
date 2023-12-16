#include <opencv2/opencv.hpp>

int main() {
    // 读取图像
    cv::Mat originalImage = cv::imread("C:/Users/30826/Desktop/PlayerUI.jpg");

    if (originalImage.empty()) {
        std::cerr << "加载图像失败" << std::endl;
        return -1;
    }

    // 将图像转换为灰度图
    cv::Mat grayImage;
    cv::cvtColor(originalImage, grayImage, cv::COLOR_BGR2GRAY);

    // 对灰度图像进行二值化
    cv::Mat binaryImage;
    cv::threshold(grayImage, binaryImage, 128, 255, cv::THRESH_BINARY);

    // 对灰度图像进行高斯模糊处理
    cv::Mat blurredImage;
    cv::GaussianBlur(grayImage, blurredImage, cv::Size(5, 5), 0);

    // 显示原始图像
    cv::namedWindow("原始图像", cv::WINDOW_NORMAL);
    cv::imshow("原始图像", originalImage);

    // 显示处理后的图像
    cv::namedWindow("处理后图像", cv::WINDOW_NORMAL);
    cv::imshow("处理后图像", blurredImage);


    cv::waitKey(0);

    return 0;
}
