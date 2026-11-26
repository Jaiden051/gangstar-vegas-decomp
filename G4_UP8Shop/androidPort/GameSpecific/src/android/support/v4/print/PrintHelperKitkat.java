// Decompiled from classes.dex (SourceFile: PrintHelperKitkat.java) via IDA Pro 9.5 Dalvik Decompiler
package android.support.v4.print;

import android.graphics.BitmapFactory;
import android.print.PrintAttributes;
import android.util.Log;
class PrintHelperKitkat {
    // Fields
    public static int c;
    public static int d;
    public static int e;
    public static int f;
    public static int g;
    public static int h;
    private static java.lang.String l;
    private static int m;
    final android.content.Context a;
    android.graphics.BitmapFactory.Options b;
    int i;
    int j;
    int k;
    private final java.lang.Object n;

    // Methods
    PrintHelperKitkat(android.content.Context p0)
    {
      super();
      this.b = null;
      this.n = new Object();
      this.i = 2;
      this.j = 2;
      this.k = 1;
      this.a = p0;
    }

    private android.graphics.Bitmap a(android.net.Uri p0, int p1) throws java.io.FileNotFoundException
    {
      int v3;
      android.graphics.Bitmap v4;
      android.graphics.BitmapFactory.Options v5;
      int v6;
      int outHeight;
      int v9;
      int v10; // RETVAL
      Object n;
      android.graphics.BitmapFactory.Options b;
      android.graphics.Bitmap v13; // RETVAL
      Object v14;
      Object v18;
      v3 = 1;
      v4 = null;
      if ( p1 <= 0 || p0 == null || this.a == null )
        throw new IllegalArgumentException("bad argument to getScaledBitmap");
      v5 = new android.graphics.BitmapFactory.Options();
      v5.inJustDecodeBounds = true;
      this.a(p0, v5);
      v6 = v5.outWidth;
      outHeight = v5.outHeight;
      if ( v6 <= 0 )
        return v4;
      if ( outHeight <= 0 )
        return v4;
      v9 = Math.max(v6, outHeight);
      while ( v9 > p1 )
      {
        v9 = v9 >>> 1;
        v3 *= 2;
      }
      if ( v3 <= 0 )
        return v4;
      v10 = Math.min(v6, outHeight);
      if ( v10 / v3 <= 0 )
        return v4;
      n = this.n;
      synchronized ( n )
      {
        this.b = new android.graphics.BitmapFactory.Options();
        this.b.inMutable = true;
        this.b.inSampleSize = v3;
        b = this.b;
      }
      try
      {
        v13 = this.a(p0, b);
      }
      catch ( Throwable v17 )
      {
        v18 = this.n;
        synchronized ( v18 )
        {
          this.b = null;
          com.gameloft.android.DecompRT.monitorExit(v18);
          throw v17;
        }
      }
      v4 = v13;
      v14 = this.n;
      synchronized ( v14 )
      {
        this.b = null;
      }
      return v4;
    }

    private android.graphics.Bitmap a(android.net.Uri p0, android.graphics.BitmapFactory.Options p1) throws java.io.FileNotFoundException
    {
      int v3;
      java.io.InputStream v4;
      android.graphics.Bitmap v5; // RETVAL
      android.graphics.Bitmap v6;
      v3 = 0;
      if ( p0 == null || this.a == null )
        throw new IllegalArgumentException("bad argument to loadBitmap");
      try
      {
        v4 = this.a.getContentResolver().openInputStream(p0);
        v5 = BitmapFactory.decodeStream(v4, null, p1);
      }
      finally
      {
      }
      v6 = v5;
      if ( v4 != null )
      {
        try
        {
          v4.close();
          return v6;
        }
        catch ( java.io.IOException v8 )
        {
          Log.w("PrintHelperKitkat", "close fail ", v8);
        }
      }
      return v6;
    }

    /* synthetic */ static android.graphics.Matrix access$000(
            android.support.v4.print.PrintHelperKitkat p0,
            int p1,
            int p2,
            android.graphics.RectF p3,
            int p4)
    {
      android.graphics.Matrix v5;
      float v6;
      float v7;
      v5 = new android.graphics.Matrix();
      v6 = p3.width() / (float)p1;
      if ( p4 == 2 )
        v7 = Math.max(v6, p3.height() / (float)p2);
      else
        v7 = Math.min(v6, p3.height() / (float)p2);
      v5.postScale(v7, v7);
      v5.postTranslate((p3.width() - (float)p1 * v7) / 2.0f, (p3.height() - v7 * (float)p2) / 2.0f);
      return v5;
    }

    /* synthetic */ static android.graphics.Bitmap access$200(
            android.support.v4.print.PrintHelperKitkat p0,
            android.net.Uri p1,
            int p2) throws java.io.FileNotFoundException
    {
      return p0.a(p1, p2);
    }

    /* synthetic */ static Object access$300(android.support.v4.print.PrintHelperKitkat p0)
    {
      return p0.n;
    }

    private static android.graphics.Matrix getMatrix(int p0, int p1, android.graphics.RectF p2, int p3)
    {
      android.graphics.Matrix v4;
      float v5;
      float v6;
      v4 = new android.graphics.Matrix();
      v5 = p2.width() / (float)p0;
      if ( p3 == 2 )
        v6 = Math.max(v5, p2.height() / (float)p1);
      else
        v6 = Math.min(v5, p2.height() / (float)p1);
      v4.postScale(v6, v6);
      v4.postTranslate((p2.width() - (float)p0 * v6) / 2.0f, (p2.height() - v6 * (float)p1) / 2.0f);
      return v4;
    }

    public final int a()
    {
      return this.i;
    }

    public final void a(int p0)
    {
      this.i = p0;
    }

    public final void a(String p0, android.graphics.Bitmap p1)
    {
      int i;
      android.print.PrintManager v4;
      android.print.PrintAttributes.MediaSize v5;
      if ( p1 != null )
      {
        i = this.i;
        v4 = (android.print.PrintManager)this.a.getSystemService("print");
        v5 = PrintAttributes.MediaSize.UNKNOWN_PORTRAIT;
        if ( p1.getWidth() > p1.getHeight() )
          v5 = PrintAttributes.MediaSize.UNKNOWN_LANDSCAPE;
        v4.print(p0, new android.support.v4.print.e(this, p0, p1, i), new android.print.PrintAttributes.Builder().setMediaSize(v5).setColorMode(this.j).build());
      }
    }

    public final void a(String p0, android.net.Uri p1)
    {
      android.support.v4.print.PrintHelperKitkat$2 v3;
      android.print.PrintManager v4;
      android.print.PrintAttributes.Builder v5;
      v3 = new android.support.v4.print.PrintHelperKitkat$2(this, p0, p1, this.i);
      v4 = (android.print.PrintManager)this.a.getSystemService("print");
      v5 = new android.print.PrintAttributes.Builder();
      v5.setColorMode(this.j);
      if ( this.k == 1 )
      {
        v5.setMediaSize(PrintAttributes.MediaSize.UNKNOWN_LANDSCAPE);
      }
      else if ( this.k == 2 )
      {
        v5.setMediaSize(PrintAttributes.MediaSize.UNKNOWN_PORTRAIT);
      }
      v4.print(p0, v3, v5.build());
    }

    public final int b()
    {
      return this.k;
    }

    public final void b(int p0)
    {
      this.j = p0;
    }

    public final int c()
    {
      return this.j;
    }

    public final void c(int p0)
    {
      this.k = p0;
    }

}
