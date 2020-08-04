/**
 *  1. ofstream 该数据类型表示输出文件流，用于创建文件并向文件写入信息
 *
 * 2. ifstream 该数据类型表示输入文件流， 用于从文件读取信息
 *
 * 3. fstream 该数据类型通常表示文件流，且同时具有 ofstream 和 ifstream 两种功能， 这意味着他可以创建文件，项文件写入信息， 从文件读取信息
 * */

#include <fstream>
#include <iostream>
using namespace std;

int main()
{
    // 第一个字符串
    char data[100];

    ofstream outfile; // 以写模式打开文件

    outfile.open("afile.dat", ios::out | ios::trunc);
    cout << "正在写入文件。。。" << endl;

    cout << "请输入你的名字：" << endl;

    cin.getline(data, 100);

    //向文件写入用户输入数据

    outfile << data << endl;

    cout << "年龄：" << endl;

    cin >> data;

    cin.ignore();

    // 再次向文件写入数据
    outfile << data << endl;

    outfile.close(); // 关闭打开文件

    // 以读模式 打开文件
    ifstream infile;

    infile.open("afile.dat");
    cout << "正在读文件。。。" << endl;
    infile >> data;
    // 在屏幕上写数据
    cout << data << endl;

    infile >> data;
    cout << data << endl;
    // close
    infile.close();


    return 0;
}
