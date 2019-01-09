#include "ImageConverter.h"

Image ImageConverter::getImage(Mat grayImg, Mat mask)
{
	
	
	Image result(grayImg.rows, grayImg.cols);

	for (int i = 0; i < grayImg.rows; ++i)
	{
		for (int j = 0; j < grayImg.cols; ++j) 
		{
			if (mask.at<float>(i, j) != 0)
			{
				float val = grayImg.at<float>(i, j);
				result.GetPixel(i, j)->SetColor(val);
			}

			else///<Hole pixel
			{
				result.GetPixel(i, j)->SetColor(-1);
			}
		}
	}
				
}
