#include <DFRobot_ZT.h> //����ͷ�ļ�

void setup(void){
  Serial.begin(115200);  //��ʼ������
  delay(100);
  DFRobot_ZT zt;         //��������
  zt.setName("zhangsan");zt.setAge(18);//���и�ֵ
  Serial.print("name=");Serial.println(zt.getName()); //��ӡ��ȡֵ
  Serial.print("age=");Serial.println(zt.getAge());
}

void loop(void){
  
}