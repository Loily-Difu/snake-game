void DisplayMenu()
{
    ShowCursor();
    system("cls");
    int choice;
    SetColor(11); // Màu xanh dương nhạt cho menu
    cout << "========= RAN SAN MOI =========" << endl;
    cout << "1. BAT DAU" << endl;
    cout << "2. HUONG DAN SU DUNG" << endl;
    cout << "3. THOAT" << endl;
    cout << "===============================" << endl;
    cout << "Moi lua chon: ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        HideCursor();
        Setup();
        while (!gameOver)
        {
            Draw();
            Input();
            Logic();
            Sleep(speed);
        }
        break;
    case 2:
        system("cls");
        SetColor(15); // Màu trắng cho hướng dẫn
        cout << "================= HUONG DAN CHOI =================" << endl;
        cout << "1. Su dung 'W' de di chuyen len." << endl;
        cout << "2. Su dung 'S' de di chuyen xuong." << endl;
        cout << "3. Su dung 'A' de di chuyen qua trai." << endl;
        cout << "4. Su dung 'D' de di chuyen qua phai." << endl;
        cout << "5. Su dung 'E' de tang toc." << endl;
        cout << "6. Thu thap con moi 'o' de lon len va ghi diem." << endl;
        cout << "7. Dung va duoi cua chinh minh!" << endl;
        cout << "==================================================" << endl;
        system("pause");
        DisplayMenu();
        break;
    case 3:
        exit(0);
    default:
        cout << "Lua chon khong hop le, vui long thu lai!" << endl;
        Sleep(1000);
        DisplayMenu();
        break;
    }
}
