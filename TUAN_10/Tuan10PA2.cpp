
int *p = new int;

int *p2 = p;

*p = 10;

delete p;
// free mem for p, sau khi giải phóng, p2 vẫn trỏ đến vùng nhớ đã bị giải phóng -> gây lỗi undefined behavior.

*p2 = 100;
// gán giá trị 100 vào vùng nhớ mà p2 trỏ đến nhưng vùng nhớ đã bị giải phóng -> lỗi undefined behavior.

cout << *p2;
// in ra giá trị tại vùng nhớ mà p2 trỏ đến, vùng nhớ này đã bị giải phóng -> lỗi undefined behavior.

delete p2;
// giải phóng bộ nhớ được cấp phát cho p2, vùng nhớ này đã bị giải phóng trước đó -> lỗi undefined behavior.