#ifndef RECURSIVE_MOVING_AVERAGE_H
#define RECURSIVE_MOVING_AVERAGE_H

// 湲곕낯 �덈룄�� �ш린 �뺤쓽 (�꾩슂�� �곕씪 �섏젙 媛���)
#ifndef WINDOW_SIZE
#define WINDOW_SIZE 5
#endif

class RecursiveMovingAverage
{
  private:
    float sensorData[WINDOW_SIZE];
    int windowSize;

  public:
    // �앹꽦��
    RecursiveMovingAverage();

    // �덈줈�� 媛믪쑝濡� �대룞�됯퇏 �낅뜲�댄듃
    float update(float adValue, float avgOld);

    // 諛곗뿴 珥덇린�� (�좏깮�ы빆)
    void reset();

    // �꾩옱 �덈룄�� �ш린 諛섑솚
    int getWindowSize() const;
};

#endif // RECURSIVE_MOVING_AVERAGE_H