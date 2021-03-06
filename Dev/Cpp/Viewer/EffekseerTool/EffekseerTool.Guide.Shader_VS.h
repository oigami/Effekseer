#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Zpc /Tvs_2_0 /EVS /Fh EffekseerTool.Guide.Shader_VS.h guide_vs.fx
//
//
// Parameters:
//
//   float2 Size;
//
//
// Registers:
//
//   Name         Reg   Size
//   ------------ ----- ----
//   Size         c0       1
//

    vs_2_0
    def c1, -0.5, 2, -1, 1
    def c2, 0, 1, 0, 0
    dcl_position v0
    rcp r0.x, c0.x
    add r0.yz, v0.xxyw, c1.x
    mul r0.x, r0.x, r0.y
    mad oPos.x, r0.x, c1.y, c1.z
    rcp r0.x, c0.y
    mul r0.x, r0.x, r0.z
    mad oPos.y, r0.x, -c1.y, c1.w
    mov oPos.zw, c2.xyxy

// approximately 8 instruction slots used
#endif

const BYTE g_vs20_VS[] =
{
      0,   2, 254, 255, 254, 255, 
     33,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  79,   0, 
      0,   0,   0,   2, 254, 255, 
      1,   0,   0,   0,  28,   0, 
      0,   0,  16,   1,   0,   0, 
     72,   0,   0,   0,  48,   0, 
      0,   0,   2,   0,   0,   0, 
      1,   0,   2,   0,  56,   0, 
      0,   0,   0,   0,   0,   0, 
     83, 105, 122, 101,   0, 171, 
    171, 171,   1,   0,   3,   0, 
      1,   0,   2,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
    118, 115,  95,  50,  95,  48, 
      0,  77, 105,  99, 114, 111, 
    115, 111, 102, 116,  32,  40, 
     82,  41,  32,  72,  76,  83, 
     76,  32,  83, 104,  97, 100, 
    101, 114,  32,  67, 111, 109, 
    112, 105, 108, 101, 114,  32, 
     57,  46,  50,  57,  46,  57, 
     53,  50,  46,  51,  49,  49, 
     49,   0,  81,   0,   0,   5, 
      1,   0,  15, 160,   0,   0, 
      0, 191,   0,   0,   0,  64, 
      0,   0, 128, 191,   0,   0, 
    128,  63,  81,   0,   0,   5, 
      2,   0,  15, 160,   0,   0, 
      0,   0,   0,   0, 128,  63, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  31,   0,   0,   2, 
      0,   0,   0, 128,   0,   0, 
     15, 144,   6,   0,   0,   2, 
      0,   0,   1, 128,   0,   0, 
      0, 160,   2,   0,   0,   3, 
      0,   0,   6, 128,   0,   0, 
    208, 144,   1,   0,   0, 160, 
      5,   0,   0,   3,   0,   0, 
      1, 128,   0,   0,   0, 128, 
      0,   0,  85, 128,   4,   0, 
      0,   4,   0,   0,   1, 192, 
      0,   0,   0, 128,   1,   0, 
     85, 160,   1,   0, 170, 160, 
      6,   0,   0,   2,   0,   0, 
      1, 128,   0,   0,  85, 160, 
      5,   0,   0,   3,   0,   0, 
      1, 128,   0,   0,   0, 128, 
      0,   0, 170, 128,   4,   0, 
      0,   4,   0,   0,   2, 192, 
      0,   0,   0, 128,   1,   0, 
     85, 161,   1,   0, 255, 160, 
      1,   0,   0,   2,   0,   0, 
     12, 192,   2,   0,  68, 160, 
    255, 255,   0,   0
};
