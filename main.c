typedef struct tagBITMAPFILEHEADER
{
    UINT16 bfType;
    DWORD bfSize;
    UINT16 bfReserved1;
    UINT16 bfReserved2;
    DWORD bfOffBits;
    int hello;
} BITMAPFILEHEADER; 
