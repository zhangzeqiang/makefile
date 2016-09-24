#include "ui/CUIClient.hpp"

namespace cli {
CUIClient::CUIClient () {
        shared_ptr<CWINClient> tmpWin(new CWINClient());
        cWin = tmpWin;
}

void CUIClient::start() {
    CUIClient::_create ();
}

void CUIClient::_create () {
    cWin->createWin ();
}

void CUIClient::_destroy () {
    cWin->destroyWin ();
}

void CWINClient::createWin () {
    while (true) {
        // TODO循环等待消息输入
    }
}

void CWINClient::destroyWin () {
    // 打印窗口退出信息
}

string CWINClient::cmdWin () {
    // 输入指令
}

void CWINClient::translateCmd () {

}

string CWINClient::input () {

}
}



