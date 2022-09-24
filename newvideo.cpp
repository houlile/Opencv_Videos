#include<opencv2/opencv.hpp>
using namespace cv;

int main()
{
	//从摄像头读取视频
	VideoCapture capture("Beauty.mp4");
	//循环显示每一帧
	while (1)
	{
		Mat frame;//定义一个Mat变量，用于存储每一帧的图像
		capture >> frame;//读取当前帧
		imshow("读取视频帧", frame);//显示当前帧
		if(waitKey(30)==27) //按esc键退出，
		{
			break;
		}
	}
	system("pause");
	return 0;
}


