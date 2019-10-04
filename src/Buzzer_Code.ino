/*
 제목    : 피에조 부저 (Piezo Buzzer) 소리내기
 내용   : '도레미파솔라시' 음계를 소리내도록 만든다.
 */
 
// 피에조 부저를 3번 핀에 연결합니다.
int piezo = 3;
 
// 음계의 배열을 만들고 배열에 들어가는 인자의 갯수를 8개로 지정합니다.
// 음계는 4옥타브를 기준으로 도, 레, 미, 파, 솔, 라, 시, 도를 출력합니다.
int numTones = 8;
int tones[] = {261, 294, 330, 349, 392, 440, 494, 523};
 
// 실행시 가장 먼저 호출되는 함수이며, 최초 1회만 실행됩니다.
// 변수를 선언하거나 초기화를 위한 코드를 포함합니다.
void setup() {
  // 피에조 부저가 연결된 핀을 OUTPUT으로 설정합니다.
  pinMode(piezo, OUTPUT);
 }
 
// setup() 함수가 호출된 이후, loop() 함수가 호출되며,
// 블록 안의 코드를 무한히 반복 실행됩니다.
void loop() {
  // 스위치가 연결된 핀의 로직레벨이 LOW라면(버튼이 눌렸다면)
  for (int i = 0; i < numTones; i++) {
      //numTones(8)의 수만큼 반복 실행합니다.
      tone(piezo, tones[i]);   // tone함수를 통해 피에조부저에서 소리가 나며 tones[]배열에 있는 주파수에 해당하는 음계가 출력됩니다.
      delay(500);      // 0.5초 동안 대기합니다.
    }
    noTone(piezo);
  }
}