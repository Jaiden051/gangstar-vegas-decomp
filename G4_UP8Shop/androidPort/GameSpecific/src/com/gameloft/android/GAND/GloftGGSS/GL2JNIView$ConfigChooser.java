// Decompiled from classes.dex (SourceFile: GL2JNIView$ConfigChooser.java) via IDA Pro 9.5 Dalvik Decompiler
package com.gameloft.android.GAND.GloftGGSS;

class GL2JNIView$ConfigChooser implements com.gameloft.android.GAND.GloftGGSS.w {
    // Fields
    private static int[] h;
    private static int[] i;
    private static final int[] j;
    private static final java.lang.String[] k;
    protected int a;
    protected int b;
    protected int c;
    protected int d;
    protected int e;
    protected int f;
    protected int g;
    private int[] l;

    // Methods
    static
    {
      int[] v0;
      int[] v1;
      int[] v2;
      String[] v3;
      v0 = new int[11];
      v0[0] = 12324;
      v0[1] = 4;
      v0[2] = 12323;
      v0[3] = 4;
      v0[4] = 12322;
      v0[5] = 4;
      v0[6] = 12352;
      v0[7] = GL2JNIView.access$1100();
      v0[8] = GL2JNIView.access$1200();
      v0[9] = GL2JNIView.access$1300_gv();
      v0[10] = 12344;
      h = (int[])v0;
      v1 = new int[9];
      v1[0] = 12324;
      v1[1] = 4;
      v1[2] = 12323;
      v1[3] = 4;
      v1[4] = 12322;
      v1[5] = 4;
      v1[6] = 12352;
      v1[7] = GL2JNIView.access$1100();
      v1[8] = 12344;
      i = (int[])v1;
      v2 = new int[34];
      v2[0] = 12321;
      v2[1] = 12322;
      v2[2] = 12323;
      v2[3] = 12324;
      v2[4] = 12325;
      v2[5] = 12326;
      v2[6] = 12327;
      v2[7] = 12328;
      v2[8] = 12329;
      v2[9] = 12330;
      v2[10] = 12331;
      v2[11] = 12332;
      v2[12] = 12333;
      v2[13] = 12334;
      v2[14] = 12335;
      v2[15] = 12336;
      v2[16] = 12337;
      v2[17] = 12338;
      v2[18] = 12339;
      v2[19] = 12340;
      v2[20] = 12343;
      v2[21] = 12342;
      v2[22] = 12341;
      v2[23] = 12345;
      v2[24] = 12346;
      v2[25] = 12347;
      v2[26] = 12348;
      v2[27] = 12349;
      v2[28] = 12350;
      v2[29] = 12351;
      v2[30] = 12352;
      v2[31] = 12354;
      v2[32] = GL2JNIView.access$1400();
      v2[33] = GL2JNIView.access$1500();
      j = (int[])v2;
      v3 = new String[34];
      v3[0] = "EGL_ALPHA_SIZE";
      v3[1] = "EGL_BLUE_SIZE";
      v3[2] = "EGL_GREEN_SIZE";
      v3[3] = "EGL_RED_SIZE";
      v3[4] = "EGL_DEPTH_SIZE";
      v3[5] = "EGL_STENCIL_SIZE";
      v3[6] = "EGL_CONFIG_CAVEAT";
      v3[7] = "EGL_CONFIG_ID";
      v3[8] = "EGL_LEVEL";
      v3[9] = "EGL_MAX_PBUFFER_HEIGHT";
      v3[10] = "EGL_MAX_PBUFFER_PIXELS";
      v3[11] = "EGL_MAX_PBUFFER_WIDTH";
      v3[12] = "EGL_NATIVE_RENDERABLE";
      v3[13] = "EGL_NATIVE_VISUAL_ID";
      v3[14] = "EGL_NATIVE_VISUAL_TYPE";
      v3[15] = "EGL_PRESERVED_RESOURCES";
      v3[16] = "EGL_SAMPLES";
      v3[17] = "EGL_SAMPLE_BUFFERS";
      v3[18] = "EGL_SURFACE_TYPE";
      v3[19] = "EGL_TRANSPARENT_TYPE";
      v3[20] = "EGL_TRANSPARENT_RED_VALUE";
      v3[21] = "EGL_TRANSPARENT_GREEN_VALUE";
      v3[22] = "EGL_TRANSPARENT_BLUE_VALUE";
      v3[23] = "EGL_BIND_TO_TEXTURE_RGB";
      v3[24] = "EGL_BIND_TO_TEXTURE_RGBA";
      v3[25] = "EGL_MIN_SWAP_INTERVAL";
      v3[26] = "EGL_MAX_SWAP_INTERVAL";
      v3[27] = "EGL_LUMINANCE_SIZE";
      v3[28] = "EGL_ALPHA_MASK_SIZE";
      v3[29] = "EGL_COLOR_BUFFER_TYPE";
      v3[30] = "EGL_RENDERABLE_TYPE";
      v3[31] = "EGL_CONFORMANT";
      v3[32] = "EGL_COVERAGE_BUFFERS_NV";
      v3[33] = "EGL_COVERAGE_SAMPLES_NV";
      k = v3;
    }

    private GL2JNIView$ConfigChooser()
    {
      super();
      this.l = new int[1];
    }

    /* synthetic */ GL2JNIView$ConfigChooser(int p0)
    {
      this();
    }

    private int a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLConfig p2,
            int p3,
            int p4)
    {
      int v6;
      v6 = 0;
      if ( p0.eglGetConfigAttrib(p1, p2, p3, this.l) )
        return this.l[0];
      return v6;
    }

    private javax.microedition.khronos.egl.EGLConfig a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLConfig[] p2,
            boolean p3)
    {
      javax.microedition.khronos.egl.EGLConfig[] v5;
      int v6;
      int v7;
      int i;
      javax.microedition.khronos.egl.EGLConfig v9;
      int v10;
      int v11; // RETVAL
      int v12;
      int v13;
      int v14;
      int v15; // RETVAL
      int v16;
      javax.microedition.khronos.egl.EGLConfig v17;
      javax.microedition.khronos.egl.EGLConfig v19;
      int v20;
      int j;
      int v22;
      int v23;
      v5 = new javax.microedition.khronos.egl.EGLConfig[p2.length];
      v6 = 0;
      v7 = p2.length;
      for ( i = 0; i < v7; ++i )
      {
        v9 = p2[i];
        v10 = this.a(p0, p1, v9, 12325, 0);
        v11 = this.a(p0, p1, v9, 12326, 0);
        if ( v10 >= this.e
          && v11 >= this.f
          && (com.gameloft.android.DecompRT.comma((v12 = this.a(p0, p1, v9, 12324, 0)), com.gameloft.android.DecompRT.comma((v13 = this.a(p0, p1, v9, 12323, 0)), com.gameloft.android.DecompRT.comma((v14 = this.a(p0, p1, v9, 12322, 0)), com.gameloft.android.DecompRT.comma((v15 = this.a(p0, p1, v9, 12321, 0)), (v12 == this.a))))))
          && v13 == this.b
          && v14 == this.c
          && v15 == this.d )
        {
          v16 = v6 + 1;
          v5[v6] = v9;
        }
        else
        {
          v16 = v6;
        }
        v6 = v16;
      }
      if ( v6 == 0 )
        return null;
      v19 = v5[0];
      v20 = 0x7FFFFFFF;
      for ( j = 0; j < v6; ++j )
      {
        v17 = v5[j];
        if ( p3 )
          v22 = this.a(p0, p1, v17, GL2JNIView.access$1500(), 0) * this.a(p0, p1, v17, GL2JNIView.access$1400(), 0);
        else
          v22 = 0;
        if ( this.g == v22 )
          return v17;
        if ( v22 <= 0 || Math.abs(v22 - this.g) >= v20 )
        {
          v23 = v20;
          v17 = v19;
        }
        else
        {
          v23 = Math.abs(v22 - this.g);
        }
        v20 = v23;
        v19 = v17;
      }
      return v19;
    }

    private void a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLConfig[] p2)
    {
      int v4;
      int i;
      javax.microedition.khronos.egl.EGLConfig v6;
      int[] v7;
      int j;
      v4 = p2.length;
      for ( i = 0; i < v4; ++i )
      {
        v6 = p2[i];
        v7 = new int[1];
        for ( j = 0; j < GL2JNIView$ConfigChooser.j.length; ++j )
        {
          if ( !p0.eglGetConfigAttrib(p1, v6, GL2JNIView$ConfigChooser.j[j], v7) )
          {
            while ( p0.eglGetError() != 12288 )
              ;
          }
        }
      }
    }

    private static void printConfig(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1,
            javax.microedition.khronos.egl.EGLConfig p2)
    {
      int[] v3;
      int i;
      v3 = new int[1];
      for ( i = 0; i < j.length; ++i )
      {
        if ( !p0.eglGetConfigAttrib(p1, p2, j[i], v3) )
        {
          while ( p0.eglGetError() != 12288 )
            ;
        }
      }
    }

    public final javax.microedition.khronos.egl.EGLConfig a(
            javax.microedition.khronos.egl.EGL10 p0,
            javax.microedition.khronos.egl.EGLDisplay p1)
    {
      java.util.StringTokenizer v3;
      boolean v4;
      int v5;
      boolean v6;
      int[] v7;
      int v8;
      int v9;
      javax.microedition.khronos.egl.EGLConfig[] v10;
      javax.microedition.khronos.egl.EGLConfig v11;
      GL2JNILib.initGL();
      GL2JNILib.getViewSettings();
      v3 = new java.util.StringTokenizer(p0.eglQueryString(p1, 12373));
      v4 = false;
      while ( v3.hasMoreTokens() )
      {
        v5 = v3.nextToken().equals("EGL_NV_coverage_sample") || v4 ? 1 : 0;
        v4 = v5 != 0;
      }
      GL2JNIView.access$300("chooseConfig (init)", p0);
      switch ( b )
      {
        case 24:
          this.c = 8;
          this.b = 8;
          this.a = 8;
          this.d = 0;
          break;
        case 32:
          this.d = 8;
          this.c = 8;
          this.b = 8;
          this.a = 8;
          break;
        default:
          this.a = 5;
          this.b = 6;
          this.c = 5;
          this.d = 0;
          break;
      }
      this.e = GL2JNILib.c;
      this.f = GL2JNILib.d;
      this.g = GL2JNILib.e;
      v6 = GL2JNILib.f == 1;
      v7 = new int[1];
      p0.eglChooseConfig(p1, h, null, 0, v7);
      GL2JNIView.access$300("chooseConfig (get)", p0);
      v8 = v7[0];
      if ( v8 > 0 && v6 )
      {
        v9 = v8;
      }
      else
      {
        p0.eglChooseConfig(p1, i, null, 0, v7);
        GL2JNIView.access$300("chooseConfig (get)", p0);
        v6 = false;
        v9 = v7[0];
      }
      if ( v9 <= 0 )
        throw new IllegalArgumentException("No configs match configSpec");
      v10 = new javax.microedition.khronos.egl.EGLConfig[v9];
      if ( v6 )
        p0.eglChooseConfig(p1, h, v10, v9, v7);
      else
        p0.eglChooseConfig(p1, i, v10, v9, v7);
      GL2JNIView.access$300("chooseConfig (list)", p0);
      GL2JNILib.c = 24;
      this.e = 24;
      v11 = this.a(p0, p1, v10, v4);
      if ( v11 == null )
      {
        GL2JNILib.c = 16;
        this.e = 16;
        v11 = this.a(p0, p1, v10, v4);
      }
      GL2JNIView.access$300("chooseConfig (end)", p0);
      return v11;
    }

}
