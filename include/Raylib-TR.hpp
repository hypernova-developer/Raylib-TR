#pragma once

#ifndef RAYLIB_TR_HPP
#define RAYLIB_TR_HPP

#include <raylib.h>

constexpr Color KIRMIZI = RED;
constexpr Color MAVI = BLUE;
constexpr Color YESIL = GREEN;
constexpr Color BEYAZ = WHITE;
constexpr Color SIYAH = BLACK;
constexpr Color SARI = YELLOW;
constexpr Color ACIK_GRI = LIGHTGRAY;
constexpr Color GRI = GRAY;
constexpr Color KOYU_GRI = DARKGRAY;
constexpr Color ALTIN_SARSI = GOLD;
constexpr Color TURUNCU = ORANGE;
constexpr Color PEMBE = PINK;
constexpr Color KAHVERENGI = BROWN;
constexpr Color KAHVERENGI2 = MAROON;
constexpr Color ACIK_YESIL = LIME;
constexpr Color KOYU_YESIL = DARKGREEN;
constexpr Color GOKYUZU_MAVISI = SKYBLUE;
constexpr Color KOYU_MAVI = DARKBLUE;
constexpr Color MOR = PURPLE;
constexpr Color MENEKSE = VIOLET;
constexpr Color KOYU_MOR = DARKPURPLE;
constexpr Color BEJ = BEIGE;
constexpr Color KOYU_KAHVERENGI = DARKBROWN;
constexpr Color BOSLUK = BLANK;
constexpr Color MACENTA = MAGENTA;
constexpr Color RAYLIB_BEYAZI = RAYWHITE;


inline void PencereOlustur(int genislik, int yukseklik, const char *baslik)
{
    InitWindow(genislik, yukseklik, baslik);
}

inline bool PencereKapanmaliMi()
{
    return WindowShouldClose();
}

inline void PencereyiKapat()
{
    CloseWindow();
}

inline void FPSi_Ayarla(int FPS)
{
    SetTargetFPS(FPS);
}

inline int EkranGenisliginiAl()
{
    return GetScreenWidth();
}

inline int EkranYuksekliginiAl()
{
    return GetScreenHeight();
}

inline bool PencereTamEkranMi()
{
    return IsWindowFullscreen();
}

inline void EkranModunuDegistir()
{
    ToggleFullscreen();
}

inline float KareZamaniniAl()
{
    return GetFrameTime();
}

inline bool PencereHazirMi()
{
    return IsWindowReady();
}

inline void CizmeyeBasla()
{
    BeginDrawing();
}

inline void CizmeyiBitir()
{
    EndDrawing();
}

inline void ArkaPlaniTemizle(Color renk)
{
    ClearBackground(renk);
}

inline void IkiBoyutluKamerayiBaslat(Camera2D camera)
{
    BeginMode2D(camera);
}

inline void IkiBoyutluKamerayiDurdur()
{
    EndMode2D();
}

inline void UcBoyutluKamerayiBaslat(Camera3D camera)
{
    BeginMode3D(camera);
}

inline void UcBoyutluKamerayiDurdur()
{
    EndMode3D();
}

inline void PikselCiz(int x, int y, Color renk)
{
    DrawPixel(x, y, renk);
}

inline void CizgiCiz(int baslangicX, int baslangicY, int bitisX, int bitisY, Color renk)
{
    DrawLine(baslangicX, baslangicY, bitisX, bitisY, renk);
}

inline void DaireCiz(int merkezX, int merkezY, float cap, Color renk)
{
    DrawCircle(merkezX, merkezY, cap, renk);
}

inline void DikdortgenCiz(int x, int y, int genislik, int yukseklik, Color renk)
{
    DrawRectangle(x, y, genislik, yukseklik, renk);
}

inline void HalkaCiz(Vector2 merkez, float icCap, float disCap, float baslangicAcisi, float bitisAcisi, int segmentler, Color renk)
{
    DrawRing(merkez, icCap, disCap, baslangicAcisi, bitisAcisi, segmentler, renk);
}

inline void ElipsCiz(int merkezX, int merkezY, float yatayCap, float dikeyCap, Color renk)
{
    DrawEllipse(merkezX, merkezY, yatayCap, dikeyCap, renk);
}

inline void YuvarlakKenarDikdortgenCiz(Rectangle dikdortgen, float yuvarlaklik, int segmentler, Color renk)
{
    DrawRectangleRounded(dikdortgen, yuvarlaklik, segmentler, renk);
}

inline void ProDikdortgenCiz(Rectangle dikdortgen, Vector2 koken, float rotasyon, Color renk)
{
    DrawRectanglePro(dikdortgen, koken, rotasyon, renk);
}

#endif
