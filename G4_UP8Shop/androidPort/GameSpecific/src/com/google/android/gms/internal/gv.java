// Decompiled from classes.dex (SourceFile: gv.java) via IDA Pro 9.5 Dalvik Decompiler
package com.google.android.gms.internal;

import android.graphics.Bitmap;
import android.graphics.PorterDuff;
public final class gv {
    // Methods
    public static android.graphics.Bitmap a(android.graphics.Bitmap p0)
    {
      int v1;
      int Width;
      int Height; // RETVAL
      int v6;
      int v7;
      android.graphics.Bitmap Bitmap;
      android.graphics.Canvas v9;
      android.graphics.Paint v10;
      v1 = 0;
      if ( p0 == null )
        return null;
      Width = p0.getWidth();
      Height = p0.getHeight();
      v6 = Height;
      if ( Width < Height )
      {
        v6 = Width;
        v1 = Height / 2 - Width / 2;
        v7 = 0;
      }
      else
      {
        v7 = Width / 2 - Height / 2;
      }
      Bitmap = android.graphics.Bitmap.createBitmap(v6, v6, android.graphics.Bitmap.Config.ARGB_8888);
      v9 = new android.graphics.Canvas(Bitmap);
      v10 = new android.graphics.Paint(1);
      v10.setColor(-16777216);
      v9.drawCircle((float)(v6 / 2), (float)(v6 / 2), (float)(v6 / 2), v10);
      v10.setXfermode(new android.graphics.PorterDuffXfermode(PorterDuff.Mode.SRC_IN));
      v9.drawBitmap(p0, (float)v7, (float)v1, v10);
      return Bitmap;
    }

    private static android.graphics.Bitmap a(android.graphics.drawable.Drawable p0)
    {
      android.graphics.Bitmap Bitmap;
      android.graphics.Canvas v3;
      if ( p0 == null )
        return null;
      if ( p0 instanceof android.graphics.drawable.BitmapDrawable )
        return ((android.graphics.drawable.BitmapDrawable)p0).getBitmap();
      Bitmap = android.graphics.Bitmap.createBitmap(p0.getIntrinsicWidth(), p0.getIntrinsicHeight(), android.graphics.Bitmap.Config.ARGB_8888);
      v3 = new android.graphics.Canvas(Bitmap);
      p0.setBounds(0, 0, v3.getWidth(), v3.getHeight());
      p0.draw(v3);
      return Bitmap;
    }

    public static android.graphics.drawable.Drawable a(
            android.content.res.Resources p0,
            android.graphics.drawable.Drawable p1)
    {
      return new android.graphics.drawable.BitmapDrawable(p0, a(a(p1)));
    }

}
