#include <bits/stdc++.h>
using namespace std;

// 以下に、24時間表記の時計構造体 Clock を定義する

// Clock構造体のメンバ変数を書く
//   int hour    時間を表す (0~23の値をとる)
//   int minute  分を表す   (0~59の値をとる)
//   int second  秒を表す   (0~59の値をとる)
struct Clock {
    private:
        int hour;
        int minute;
        int second;
    public:
        void set(int, int, int);
        string to_str();
        void shift(int);
};

// メンバ関数 set の定義を書く
//   関数名: set
//   引数: int h, int m, int s (それぞれ時、分、秒を表す)
//   返り値: なし
//   関数の説明:
//     時・分・秒を表す3つの引数を受け取り、
//     それぞれ、メンバ変数 hour, minute, second に代入する
void Clock::set(int h, int m, int s) {
    this->hour = h;
    this->minute = m;
    this->second = s;
}

// メンバ関数 to_str の定義を書く
//   関数名: to_str
//   引数: なし
//   返り値: string型
//   関数の仕様:
//     メンバ変数が表す時刻の文字列を返す
//     時刻の文字列は次のフォーマット
//     "HH:MM:SS"
//     HH、MM、SSはそれぞれ時間、分、秒を2桁で表した文字列
string Clock::to_str() {
    stringstream ss;
    ss << setfill('0') << right << setw(2) << this->hour << ":";
    ss << setfill('0') << right << setw(2) << this->minute << ":";
    ss << setfill('0') << right << setw(2) << this->second;
    return ss.str();
}

// メンバ関数 shift の定義を書く
//   関数名: shift
//   引数: int diff_second
//   返り値: なし
//   関数の仕様:
//     diff_second 秒だけメンバ変数が表す時刻を変更する(ただし、日付やうるう秒は考えない)
//     diff_second の値が負の場合、時刻を戻す
//     diff_second の値が正の場合、時刻を進める
//     diff_second の値は -86400 ~ 86400 の範囲を取とりうる
void Clock::shift(int diff_second) {
    int diff_hour    = diff_second / 3600;
    diff_second     %= 3600;
    int diff_minute  = diff_second / 60;
    diff_second     %= 60;

    this->second += diff_second;
    this->minute += diff_minute;
    this->hour   += diff_hour;

    int acc_unit = (diff_second >= 0) ? 1 : -1;
    int inv_ms   = (diff_second >= 0) ? 0 : 60;
    int inv_h    = (diff_second >= 0) ? 0 : 24;

    if(this->second >= 60 || this->second < 0) {
        this->minute += acc_unit;
        this->second = (inv_ms + this->second) % 60;
    }
    if(this->minute >= 60 || this->minute < 0) {
        this->hour += acc_unit;
        this->minute = (inv_ms + this->minute) % 60;
    }
    if(this->hour >= 24 || this->hour < 0) {
        this->hour = (inv_h + this->hour) % 24;
    }
}

// -------------------
// ここから先は変更しない
// -------------------

int main() {
    // 入力を受け取る
    int hour, minute, second;
    cin >> hour >> minute >> second;
    int diff_second;
    cin >> diff_second;

    // Clock構造体のオブジェクトを宣言
    Clock clock;

    // set関数を呼び出して時刻を設定する
    clock.set(hour, minute, second);

    // 時刻を出力
    cout << clock.to_str() << endl;

    // 時計を進める(戻す)
    clock.shift(diff_second);

    // 変更後の時刻を出力
    cout << clock.to_str() << endl;
}
