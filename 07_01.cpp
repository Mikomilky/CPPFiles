#include <opencv2/opencv.hpp>

int main() {
    // 加载并显示一张图像
    cv::Mat image = cv::imread("C:/Users/30826/Desktop/PlayerUI.jpg");

    if (image.empty()) {
        std::cerr << "加载图像失败" << std::endl;
        return -1;
    }

    cv::namedWindow("Image", cv::WINDOW_NORMAL);
    cv::imshow("Image", image);

    // 等待键盘输入，按下Esc退出
    while (cv::waitKey(0) != 27) {}
    cv::destroyAllWindows();  

    // 加载一个视频
    cv::VideoCapture video("C:/Users/30826/Desktop/边境风云/边境风云原片段.mov");

    if (!video.isOpened()) {
        std::cerr << "加载视频失败" << std::endl;
        return -1;
    }


    while (true) {
        cv::Mat frame;
        video >> frame;

        if (frame.empty()) {
            std::cerr << "加载视频失败" << std::endl;
            break;
        }

        cv::imshow("Video", frame);

        // 等待键盘输入，按下Esc退出
        if (cv::waitKey(30) == 27) {
            cv::destroyAllWindows();
            break;
        }
    }

    // 开启计算机摄像头捕获视频
    cv::VideoCapture camera(0); 

    if (!camera.isOpened()) {
        std::cerr << "打开摄像头失败" << std::endl;
        return -1;
    }

    while (true) {
        cv::Mat frame;
        camera >> frame;

        if (frame.empty()) {
            std::cerr << "捕获视频失败" << std::endl;
            break;
        }

        cv::imshow("Camera", frame);

        // 等待键盘输入，按下Esc退出
        if (cv::waitKey(30) == 27) {
            cv::destroyAllWindows();
            break;
        }
    }

    return 0;
}
