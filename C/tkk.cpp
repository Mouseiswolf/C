#include "opencv2/highgui/highgui.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include <iostream>
#include <stdio.h>
#include <opencv2/core/utils/logger.hpp>

using namespace std;
using namespace cv;

Mat img;
Mat templ;
Mat result;

int match_method;

void MatchingMethod(int, void*) {
    Mat img_display;
    img.copyTo(img_display);

    // 创建输出结果的矩阵
    int result_cols = img.cols - templ.cols + 1;
    int result_rows = img.rows - templ.rows + 1;

    result.create(result_cols, result_rows, CV_32FC1);

    // 进行匹配和归一化
    matchTemplate(img, templ, result, match_method);
    normalize(result, result, 0, 1, NORM_MINMAX, -1, Mat());

    //定位最匹配的位置
    double minVal;
    double maxVal;
    Point minLoc;
    Point maxLoc;
    Point matchLoc;

    //在图中找到全局最小值和全局最大值
    minMaxLoc(result, &minVal, &maxVal, &minLoc, &maxLoc, Mat());

    if (match_method == TM_SQDIFF || match_method == TM_SQDIFF_NORMED) {
        matchLoc = minLoc;
    }
    else matchLoc = maxLoc;

    //对角线两点画矩形轮廓
    rectangle(img_display, matchLoc, Point(matchLoc.x + templ.cols, matchLoc.y + templ.rows), Scalar(0, 0, 255), 2, 8, 0);
    rectangle(result, matchLoc, Point(matchLoc.x + templ.cols, matchLoc.y + templ.rows), Scalar::all(0), 2, 8, 0);

    //imwrite("D:\\图图\\TKK\\output1.jpg", img_display);
    //imwrite("D:\\图图\\TKK\\output2.jpg", img_display);
    imwrite("D:\\图图\\TKK\\output3.jpg", img_display);

    imshow("Source Image", img_display);

    return;
}

int main(int argc, char** argv) {
    cv::utils::logging::setLogLevel(utils::logging::LOG_LEVEL_SILENT);//不再输出日志

    //img = imread("D:\\图图\\TKK\\classic.png", 1);
    //img = imread("D:\\图图\\TKK\\hentai.png", 1);
    img = imread("D:\\图图\\TKK\\shakeit.jpg", 1);
    templ = imread("D:\\图图\\TKK\\model.jpg", 1);

    namedWindow("Source Image", WINDOW_AUTOSIZE);

    //0: SQDIFF
    //1: SQDIFF NORMED
    //2: TM CCORR
    //3: TM CCORR NORMED
    //4: TM COEFF
    //5: TM COEFF NORMED
    createTrackbar("Method", "Source Image", &match_method, 5, MatchingMethod);
    MatchingMethod(0, 0);

    waitKey(0);
    return 0;
}