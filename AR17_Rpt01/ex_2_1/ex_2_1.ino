/*
 예제 2.1
 Arduino에서 컴퓨터로 변수와 문자열 전송하기
 */

int number = 0;    // -32768~32767 범위의 변수 number 설정, 초기값은 0

void setup() {
  Serial.begin(9600);    // 9600bps로 시리얼 통신 설정
  Serial.println("AR17");
}

void loop() {
  Serial.print(number);    // number 변수값 출력
  Serial.println(" sec");    // " sec"를 출력 후 줄 바꿈
  delay(2000);    // 
  number++;    //
}
