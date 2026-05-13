2018년 업데이트 ㅇ_ㅇ'' <BR>
1000배 이상. 1초 순간 압축되는 rand length 랜덤 데이터 ㅇ_ㅇ;; LZMA 7zip WinZipX XZ brotli <BR>
Test extreme compression ratios (1000x or more) for random data in around 1 second using 7z and Brotli <BR>
압축효율 0% 면 성공 <BR>
랜덤파일은 생성 속도가 느리니. 미리 생성해서 사용. <BR>
<BR>
<BR>
rand ( ) % 2 ~ 8 <BR>
GetTickCount ( ) % 2 ~ 8 <BR>
~16 ~32도 압축효율 가능성이 보임. ㅇ_ㅇ;; <BR>
- r값 : 랜덤 데이터를 1바이트씩 얻는다. 아스키 문자 숫자 '4' '2' '5'... <BR>
- ar[r] = 1 : 8바이트배열ar의 순서 위치r을 활성화. 비활성화 인 경우만 처리 <BR>
<BR>
랜덤값 위치에 값을. 입력하거나 활성화하고. 이미 값이 있으면. 다음 랜덤값 실행. <BR>
4257201436 실제 생성된 랜덤값 <BR>
42570136  실제 처리된 값 <BR>
[ ][ ][4][ ][ ][ ][ ][ ] <BR>
[ ][2][4][ ][ ][ ][ ][ ] <BR>
[ ][2][4][ ][ ][ ][5][ ] <BR>
[ ][2][4][ ][ ][7][5][ ] <BR>
[ ][2][4][ ][0][7][5][ ] <BR>
[ ][2][4][ ][0][7][5][1] <BR>
[3][2][4][ ][0][7][5][1] <BR>
[3][2][4][6][0][7][5][1] 마지막 결과값 8바이트 문자 <BR>
<BR>
8바이트씩 묶어서 저장하면. 1000배 이상 압축 가능 ㅇ_ㅇ'' <BR>
마치. HyperThreding의 고속 포트 순서 처럼 ㅇ_ㅇ'' <BR> 
XP PC 시절에는 COM Port 도 짝수 홀수 충돌 영향을 받았다.  Core2Duo 도 비슷하다. <BR> 
 <BR>
// 유사한 속도 향상 사례<BR>
QCOW WinSPD 1GB 읽기 쓰기 벤치마크 테스트 기록 <BR>
CreateFileMapping () x1.5배 읽기 쓰기 <BR>
PWSa 2번째 쓰기부터. 1초 순간 복사 <BR>

Intel Multicore Hyperthreading 
https://www.youtube.com/watch?v=VcoVYfDVEww <BR> 


