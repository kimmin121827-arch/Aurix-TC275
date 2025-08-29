#include "RecursiveMovingAverage.h"

// �앹꽦��
RecursiveMovingAverage::RecursiveMovingAverage() : windowSize(WINDOW_SIZE)
{
    for (int i = 0; i < windowSize; i++)
    {
        sensorData[i] = 0.0;
    }
}

// �덈줈�� 媛믪쑝濡� �대룞�됯퇏 �낅뜲�댄듃
float RecursiveMovingAverage::update(float adValue, float avgOld)
{
    float avg = 0.0;
    float oldValue = sensorData[0];

    // 諛곗뿴�� �쇱そ�쇰줈 �쒗봽��
    for (int i = 0; i < windowSize - 1; i++)
    {
        sensorData[i] = sensorData[i + 1];
    }
    sensorData[windowSize - 1] = adValue;

    // �덈줈�� �됯퇏 怨꾩궛
    avg = avgOld + (sensorData[windowSize - 1] - oldValue) / windowSize;

    return avg;
}

// 諛곗뿴 珥덇린�� (�좏깮�ы빆)
void RecursiveMovingAverage::reset()
{
    for (int i = 0; i < windowSize; i++)
    {
        sensorData[i] = 0.0;
    }
}

// �꾩옱 �덈룄�� �ш린 諛섑솚
int RecursiveMovingAverage::getWindowSize() const
{
    return windowSize;
}