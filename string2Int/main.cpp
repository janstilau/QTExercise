#include <QCoreApplication>
#include <QDebug>

int wholeNumer(const QString &text, QString &err) {

    int result = 0;
    int length = text.length();
    if (!length) {
        err = "empty string";
        return result;
    }

    static const QChar zeroItem('0');
    static const QChar nineItem('9');
    static const QChar positiveSymbol('+');
    static const QChar negativeSymbol('-');
    bool numProcessed = false;
    int facotr = 1;
    for (int i = 0; i < length; ++i) {
        const QChar item = text.at(i);
        if (item == positiveSymbol || item == negativeSymbol) {
            if (!numProcessed) {
                facotr *= item == positiveSymbol? 1 : -1;
                continue;
            } else {
                err = "prefix symbol error";
                return result;
            }
        }
        numProcessed = true;
        if (zeroItem <= item && item <= nineItem) {
            int addedNum = item.digitValue() - zeroItem.digitValue();
            if (result > (INT32_MAX - addedNum) / 10) {
                err = "the num is too large";
                return result;
            }
            result *= 10;
            result += addedNum;
        } else {
            err = "contains no num char";
            return result;
        }
    }

    result *= facotr;
    err = "";
    return result;
}

int main(int argc, char *argv[])
{
    QString success;
    QStringList list;
    qDebug() << INT_MAX;
    list << "121312" << "123.12" << "001235.32" << "asdf" << "" << "+++++++++++90877" << "-------------123123213" << "+123-123+123" << "77777777777777777777777777777777777777777777777777777777777777777777777777777";
    foreach (auto text, list) {
        int result = wholeNumer(text, success);
        qDebug () << "hint: " << success << " and result :" << result;
    }
}
