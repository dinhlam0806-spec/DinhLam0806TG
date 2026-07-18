#include <iostream>
using namespace std;
struct IMU_Data {
    float roll;
    float pitch;
    float yaw;
    IMU_Data() {
        roll = 0.0;
        pitch = 0.0;
        yaw = 0.0;
    }
    IMU_Data(float r, float p, float y) {
        roll = r;
        pitch = p;
        yaw = y;
    }
    void inTrangThai() {
        cout << "Goc nghieng -> Roll: " << roll << " | Pitch: " << pitch << " | Yaw: " << yaw << endl;
    }
    IMU_Data operator+(const IMU_Data& other) {
        IMU_Data ketQua;
        ketQua.roll = this->roll + other.roll;
        ketQua.pitch = this->pitch + other.pitch;
        ketQua.yaw = this->yaw + other.yaw;
        return ketQua;
    }
};
int main() {   
    IMU_Data drone_start; 
    cout << "--- Truoc khi cat canh ---" << endl;
    drone_start.inTrangThai(); 
    IMU_Data lan_doc_1(1.2, -0.5, 0.1);
    IMU_Data lan_doc_2(0.8, -0.3, 0.2);
    IMU_Data data_tong = lan_doc_1 + lan_doc_2;
    cout << "\n--- Tong hop du lieu 2 lan doc ---" << endl;
    data_tong.inTrangThai();
    return 0;
}